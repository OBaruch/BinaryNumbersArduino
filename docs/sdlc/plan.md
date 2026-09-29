# Plan

[← Back to README](../../README.md) · Previous: [Intent](intent.md) · [Spec](spec.md)

This plan has two parts:

- **Part A** reconstructs how the original sketch was implemented (as-built, 2021).
- **Part B** records the repository modernization performed in 2026, which changes documentation and layout only.

---

## Part A — Original Implementation (As-Built, 2021)

| Step | Description | Result in code |
|------|-------------|----------------|
| A1 | Choose four output pins for the four bits. | Pins 0–3 (plus pin 4 configured). |
| A2 | Configure pins as outputs. | `setup()` with five `pinMode` calls. |
| A3 | Encode each value 1–15 explicitly. | 15 hard-coded blocks of `digitalWrite`, commented `CONFIGURACION NUMERO n`. |
| A4 | Hold each value for readability. | `delay(500)` after each block. |
| A5 | Separate consecutive values visually. | Helper `cambio()` turns LEDs off for 100 ms. |
| A6 | Repeat indefinitely. | Relies on Arduino `loop()`. |

Design decision (Inferred): an explicit, unrolled approach was chosen over a loop with bit operations, making each number's pattern directly visible in the source.

---

## Part B — Repository Modernization (2026)

### Invariants

1. The sketch content must remain **byte-for-byte identical** (SHA-256 `f1d583c2b6527909dd0ce5eed80880fae4512268f0858d21412fd79ffbb65fd6`).
2. `LICENSE` is kept unchanged.
3. No build systems, CI, containers, linters, or dependencies are added.
4. Documentation distinguishes Confirmed / Inferred / Unknown facts.

### Tasks

| # | Task | Status |
|---|------|--------|
| B1 | Inventory the repository and recover context (code, license, Git history). | Done |
| B2 | Move the sketch to `src/NumerosBinarios1_15/` (Arduino IDE folder convention) using `git mv`. | Done |
| B3 | Add `.gitattributes` (`*.ino -text`) to prevent line-ending normalization of the original file. | Done |
| B4 | Add a minimal `.gitignore` for Arduino build artifacts and editor files. | Done |
| B5 | Write `README.md`. | Done |
| B6 | Write `docs/project-context.md`, `docs/code-overview.md`, `docs/hardware.md`, `docs/possible-improvements.md`. | Done |
| B7 | Write SDLC artifacts: `docs/sdlc/intent.md`, `spec.md`, `plan.md`. | Done |
| B8 | Add `AGENTS.md` with contribution rules that protect the original code. | Done |

### Verification

```bash
# Original code is unchanged (compare against the 2021 commit)
git diff --stat 3f0db77 HEAD -M -- NumerosBinarios1_15.ino src/NumerosBinarios1_15/NumerosBinarios1_15.ino
sha256sum src/NumerosBinarios1_15/NumerosBinarios1_15.ino
```

Expected: the rename is reported with 100% similarity and no content changes, and the hash matches invariant 1.

### Out of Scope

Any change to the sketch's logic, style, comments, pins, or timing. Ideas are recorded in [possible-improvements.md](../possible-improvements.md) only.
