# Possible Improvements

[← Back to README](../README.md)

> **None of these changes have been applied.** The original implementation is intentionally preserved to retain its historical context. This list only documents observations made while reviewing the code.

## Observations

| # | Observation | Impact |
|---|-------------|--------|
| 1 | Pins 0 and 1 are the hardware serial RX/TX on many boards (e.g. Uno). | Can interfere with uploading and prevents using `Serial` for debugging. |
| 2 | `pinMode(4, OUTPUT)` is set but pin 4 is never written. | Unused configuration; harmless. |
| 3 | Each number is a hard-coded block of four `digitalWrite` calls (15 blocks). | Long, repetitive code; changing the range or pins requires many edits. |
| 4 | The sequence starts at 1, so `0000` is never displayed as a value. | Behavioral choice; could be intentional. |
| 5 | Timing values (`500`, `100`) are literals repeated throughout. | Harder to tune. |
| 6 | Uses blocking `delay()`. | Fine for this use; prevents adding concurrent behavior (e.g. buttons). |
| 7 | Mixed-case / Spanish identifiers and CRLF line endings. | Style only. |

## Ideas for a Hypothetical Rewrite

If a new version were ever written (as a separate file, not replacing the original):

- Use pins 2–5 instead of 0–3 to keep the serial port free.
- Store the pins in an array and derive each LED state with bit operations (`(n >> bit) & 1`) in a `for` loop.
- Define named constants for the display and blank durations.
- Optionally include `0` and make the range configurable.
- Print the current value over `Serial` for debugging.
