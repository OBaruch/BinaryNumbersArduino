# Project Context

[← Back to README](../README.md)

## Summary

`BinaryNumbersArduino` is a single Arduino sketch that counts from 1 to 15 in binary on four LEDs. It is a small, self-contained hardware exercise.

## Sources Reviewed

The original repository contained only two files:

| File | Type | Content |
|------|------|---------|
| `NumerosBinarios1_15.ino` | Source code | Arduino sketch (127 lines, CRLF line endings, Spanish comments). |
| `LICENSE` | Legal | MIT License, "Copyright (c) 2021 Baruch Lopez". |

There were **no** PDFs, Word documents, presentations, images, diagrams, datasets, outputs, or README files. All context below is therefore derived from the code, file names, license, and Git history.

## Findings

### Confirmed

- The project is an Arduino sketch (`.ino`, `setup()` / `loop()` structure).
- It displays the numbers 1–15 as 4-bit binary values on digital pins 0–3.
- Comments label each step as `CONFIGURACION NUMERO <n>`, using hexadecimal letters `A`–`F` for 10–15.
- The file name `NumerosBinarios1_15` means "Binary Numbers 1–15" (Spanish).
- The author is Baruch Lopez; the files were uploaded to GitHub on **2021-02-20** (commits "Initial commit" and "Add files via upload").

### Inferred

- The project was likely a learning exercise about binary representation and/or basic Arduino digital output, given its size and hard-coded structure.
- The circuit most likely consisted of four LEDs with resistors on pins 0–3 (see [hardware.md](hardware.md)).
- Pin 4 is configured as an output but never used; it may be a leftover from an earlier version or a planned fifth bit. This cannot be confirmed.

### Unknown

- **Project origin:** Unknown. There is no evidence to classify it as coursework, a university project, or a personal project.
- The exact Arduino board model and development environment (Arduino IDE, Tinkercad, etc.).
- Whether a physical circuit or a simulator was used.
- Why the sequence starts at 1 instead of 0.

## Scope

- In scope (original): showing 1–15 in binary with fixed timing.
- Out of scope (original): user input, serial output, configurable ranges, counting logic.
