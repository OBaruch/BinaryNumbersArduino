# Intent

[← Back to README](../../README.md) · Next: [Spec](spec.md) → [Plan](plan.md)

> **Status:** Retrospective. Reconstructed in 2026 from the existing 2021 code. It describes what the project set out to do, not new work to be built.
>
> Evidence labels: **Confirmed** (directly supported by files/history), **Inferred** (reasonable deduction), **Unknown**.

## 1. Why This Project Exists

Show, in a tangible way, how the numbers 1 to 15 are represented in 4-bit binary, by lighting LEDs connected to an Arduino board. *(Confirmed by the code and file name; the learning motivation is Inferred.)*

## 2. Problem

Binary numbers are abstract when seen only on paper. Mapping each bit to a physical LED makes the relationship between decimal, hexadecimal and binary values visible. *(Inferred)*

## 3. Target Audience

- The author, as a hands-on exercise with Arduino digital outputs and binary numbers. *(Inferred)*
- Anyone observing the circuit who wants to read binary values. *(Inferred)*

Project origin (course, university, personal): **Unknown**.

## 4. Goals

| ID | Goal | Evidence |
|----|------|----------|
| G1 | Display each number from 1 to 15 as a 4-bit pattern on four LEDs. | Confirmed |
| G2 | Keep each value visible long enough to be read by a person. | Confirmed (500 ms hold) |
| G3 | Make transitions between consecutive values clearly distinguishable. | Confirmed (100 ms blank via `cambio()`) |
| G4 | Repeat the sequence indefinitely without user interaction. | Confirmed (`loop()`) |

## 5. Non-Goals

- Accepting user input (buttons, serial, potentiometers).
- Showing `0` or values greater than 15.
- Generic or configurable counting logic.
- Serial/console output.

## 6. Constraints

- Arduino platform using only the core API (`pinMode`, `digitalWrite`, `delay`). *(Confirmed)*
- Four output pins (0–3) for the four bits. *(Confirmed)*
- Board model and toolchain version: **Unknown**.

## 7. Success Criteria

An observer watching the LEDs sees 1, 2, 3 … 15 in binary (pin 3 = MSB, pin 0 = LSB), each separated by a short blank, repeating forever.

## 8. Repository Modernization Intent (2026)

Present this historical project clearly in a portfolio **without changing the original code**: reorganize files, add documentation, and capture intent/spec/plan artifacts that describe the project as it was built.
