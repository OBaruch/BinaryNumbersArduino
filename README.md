# Binary Numbers Arduino

An Arduino sketch that displays the numbers **1 to 15 in binary** using four LEDs, cycling through them continuously.

> **Original implementation preserved.** This repository preserves the original implementation of the project. The source code has intentionally not been refactored or modernized in order to retain the historical context and original development approach.

---

## Project Overview

The sketch [`NumerosBinarios1_15.ino`](src/NumerosBinarios1_15/NumerosBinarios1_15.ino) ("Binary Numbers 1–15") drives four digital outputs (pins `0`–`3`) as a 4-bit binary display. Every half second it shows the next value from `1` (`0001`) to `15` (`1111`), briefly turning all LEDs off between values, and then starts over.

## Project Context

| Item | Value | Evidence |
|------|-------|----------|
| Project origin | **Unknown** | No assignment, report or README was included. |
| Nature | Small hands-on Arduino exercise (**Inferred**) | Single short sketch, hard-coded patterns, no external libraries. |
| Date | February 2021 (**Confirmed**) | Git history: files uploaded on 2021-02-20. |
| Author | Baruch Lopez (**Confirmed**) | `LICENSE` and commit history. |
| Language of comments | Spanish (**Confirmed**) | e.g. `//CONFIGURACION NUMERO 1`, function `cambio()`. |

The original repository does not provide enough information to determine whether this was a course assignment or a personal experiment. See [docs/project-context.md](docs/project-context.md).

## Problem Statement

Visually represent how the decimal numbers 1–15 (hexadecimal `1`–`F`) are encoded in 4-bit binary, using physical LEDs as bits.

## Objective

Produce a repeating LED sequence where each LED represents one bit (pin `0` = least significant bit, pin `3` = most significant bit), so an observer can read the binary value of each number in turn.

## Repository Structure

```
.
├── README.md                      # This file
├── AGENTS.md                      # Working rules for contributors and AI coding agents
├── LICENSE                        # MIT License (original, 2021)
├── src/
│   └── NumerosBinarios1_15/
│       └── NumerosBinarios1_15.ino   # Original Arduino sketch (unchanged)
└── docs/
    ├── project-context.md         # Origin, scope, and confirmed/inferred/unknown facts
    ├── code-overview.md           # Walkthrough of the sketch and its truth table
    ├── hardware.md                # Inferred circuit / wiring
    ├── possible-improvements.md   # Observations NOT applied to the code
    └── sdlc/
        ├── intent.md              # Why the project exists
        ├── spec.md                # As-built behavioral specification
        └── plan.md                # As-built implementation + repository modernization plan
```

The sketch lives in a folder with the same name as the file because the Arduino IDE requires `<SketchName>/<SketchName>.ino`.

## Original Implementation

The file `src/NumerosBinarios1_15/NumerosBinarios1_15.ino` was only **moved**; its content is byte-for-byte identical to the 2021 upload (including Spanish comments, CRLF line endings, and the unused `pinMode(4, OUTPUT)`). A `.gitattributes` rule keeps Git from normalizing its line endings.

Known quirks and potential improvements are documented separately in [docs/possible-improvements.md](docs/possible-improvements.md) and were deliberately **not** applied.

## Technologies

- **Arduino (C/C++ dialect)** — `setup()` / `loop()` sketch structure.
- **Arduino core API** — `pinMode`, `digitalWrite`, `delay`.
- **Hardware:** an Arduino-compatible board with digital pins 0–3 driving LEDs. The exact board model is not specified (see [docs/hardware.md](docs/hardware.md)).

No external libraries are used.

## How It Works

1. `setup()` configures pins `0`–`4` as outputs.
2. `loop()` writes 15 hard-coded patterns to pins `0`–`3`, one per number from 1 to 15.
3. Each pattern is held for **500 ms**, then `cambio()` ("change") turns all four LEDs off for **100 ms**.
4. After 15 (`1111`) the loop restarts at 1. A full cycle takes about **9 seconds**.

| Decimal | Hex | Pin 3 | Pin 2 | Pin 1 | Pin 0 |
|--------:|:---:|:-----:|:-----:|:-----:|:-----:|
| 1  | 1 | 0 | 0 | 0 | 1 |
| 2  | 2 | 0 | 0 | 1 | 0 |
| 3  | 3 | 0 | 0 | 1 | 1 |
| … | … | … | … | … | … |
| 15 | F | 1 | 1 | 1 | 1 |

The full table is in [docs/code-overview.md](docs/code-overview.md).

## Inputs and Outputs

- **Inputs:** none (no buttons, sensors, or serial input).
- **Outputs:** four LEDs on digital pins `0`–`3`.

## Running the Project

The repository does not document the original toolchain or board. Based on the file format, the following standard Arduino workflow should apply:

1. Open `src/NumerosBinarios1_15/NumerosBinarios1_15.ino` in the Arduino IDE.
2. Select your board and port.
3. Connect four LEDs (each with a current-limiting resistor) to pins `0`, `1`, `2`, `3` — see [docs/hardware.md](docs/hardware.md).
4. Upload.

> On boards such as the Arduino Uno, pins 0 and 1 are shared with the USB serial interface; you may need to disconnect the LEDs on those pins while uploading.

## Documentation

- [Project context](docs/project-context.md)
- [Code overview](docs/code-overview.md)
- [Hardware (inferred)](docs/hardware.md)
- [Possible improvements (not applied)](docs/possible-improvements.md)
- SDLC artifacts: [Intent](docs/sdlc/intent.md) · [Spec](docs/sdlc/spec.md) · [Plan](docs/sdlc/plan.md)

## Historical Note

This repository was later reorganized and documented to improve readability and preserve the historical context of the original project. The original source code remains unchanged.

## License

[MIT](LICENSE) © 2021 Baruch Lopez
