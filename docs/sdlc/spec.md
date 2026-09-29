# Specification (As-Built)

[← Back to README](../../README.md) · Previous: [Intent](intent.md) · Next: [Plan](plan.md)

> **Status:** Retrospective, as-built. Every requirement below is traced to the original sketch [`NumerosBinarios1_15.ino`](../../src/NumerosBinarios1_15/NumerosBinarios1_15.ino). This spec describes existing behavior; it does not request changes.

## 1. System Overview

A single Arduino sketch drives four LEDs as a 4-bit binary display, cycling through the values 1–15.

## 2. Interfaces

| Interface | Direction | Description |
|-----------|-----------|-------------|
| Digital pin 0 | Output | Bit 0 (LSB, weight 1) |
| Digital pin 1 | Output | Bit 1 (weight 2) |
| Digital pin 2 | Output | Bit 2 (weight 4) |
| Digital pin 3 | Output | Bit 3 (MSB, weight 8) |
| Digital pin 4 | Output | Configured, never driven |

No inputs. No serial communication.

## 3. Functional Requirements

| ID | Requirement | Traceability |
|----|-------------|--------------|
| FR-1 | On startup, the system shall configure pins 0, 1, 2, 3 and 4 as digital outputs. | `setup()`, lines 1–8 |
| FR-2 | The system shall display the values 1 through 15 in ascending order. | `loop()`, lines 10–123 |
| FR-3 | For each value *n*, pin *k* (k = 0..3) shall be `HIGH` if bit *k* of *n* is 1, otherwise `LOW`. | 15 blocks `CONFIGURACION NUMERO …` |
| FR-4 | Each value shall be held for 500 ms. | `delay(500)` after each block |
| FR-5 | After each value, all four LEDs shall turn off for 100 ms. | `cambio()`, lines 132–139 |
| FR-6 | After value 15, the sequence shall restart at 1. | Arduino `loop()` semantics |

## 4. Non-Functional Characteristics

| ID | Characteristic | Value |
|----|----------------|-------|
| NFR-1 | Cycle period | ≈ 9 s (15 × 600 ms) |
| NFR-2 | Dependencies | Arduino core only; no libraries |
| NFR-3 | Memory/state | No global variables; stateless |
| NFR-4 | Encoding | ASCII, CRLF line endings, Spanish comments |

## 5. Acceptance Criteria

- **AC-1** — *Given* the board is powered, *when* `setup()` completes, *then* pins 0–4 are outputs.
- **AC-2** — *Given* the sketch is running, *when* the display shows value *n* (1 ≤ n ≤ 15), *then* LEDs on pins 3‑2‑1‑0 match the binary representation of *n*.
- **AC-3** — *Given* value *n* is shown, *when* 500 ms elapse, *then* all LEDs turn off for 100 ms before value *n + 1* appears.
- **AC-4** — *Given* value 15 (`1111`) was shown, *when* the blank ends, *then* value 1 (`0001`) is shown.

## 6. Reference Truth Table

| n | Hex | b3 b2 b1 b0 |
|--:|:---:|:-----------:|
| 1 | 1 | 0001 |
| 2 | 2 | 0010 |
| 3 | 3 | 0011 |
| 4 | 4 | 0100 |
| 5 | 5 | 0101 |
| 6 | 6 | 0110 |
| 7 | 7 | 0111 |
| 8 | 8 | 1000 |
| 9 | 9 | 1001 |
| 10 | A | 1010 |
| 11 | B | 1011 |
| 12 | C | 1100 |
| 13 | D | 1101 |
| 14 | E | 1110 |
| 15 | F | 1111 |

All 15 blocks in the original sketch were checked against this table and match.

## 7. Known Deviations / Open Questions

- Pin 4 is configured but unused (reason **Unknown**).
- Value 0 is not part of the sequence (reason **Unknown**).
- Pins 0/1 overlap with the serial interface on common boards; see [possible-improvements.md](../possible-improvements.md).
- Target board model: **Unknown**.
