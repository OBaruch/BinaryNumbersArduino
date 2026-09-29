# Hardware (Inferred)

[← Back to README](../README.md)

> The original repository contains no schematic, photo, or parts list. Everything on this page is **inferred** from the pins used in the sketch and should be treated as a reasonable reconstruction, not a confirmed record.

## Likely Components

| Qty | Component | Notes |
|----:|-----------|-------|
| 1 | Arduino-compatible board | Model unknown. Pins 0–4 must be digital I/O. |
| 4 | LEDs | One per bit. |
| 4 | Current-limiting resistors | Typical 220 Ω–330 Ω (value not documented). |
| — | Breadboard and jumper wires | — |

## Inferred Wiring

```
Arduino pin 3 ──[R]──►|── GND    b3 (MSB, value 8)
Arduino pin 2 ──[R]──►|── GND    b2 (value 4)
Arduino pin 1 ──[R]──►|── GND    b1 (value 2)
Arduino pin 0 ──[R]──►|── GND    b0 (LSB, value 1)
Arduino pin 4    (configured as OUTPUT, not used)
```

Arranging the LEDs left-to-right as pin 3, 2, 1, 0 makes the display read like a normal binary number.

## Notes

- On the Arduino Uno and similar ATmega328P boards, pins 0 (RX) and 1 (TX) are shared with the USB serial interface. LEDs on these pins may flicker during upload, and connected circuitry can interfere with uploading.
- The sketch assumes active-high LEDs (`HIGH` = on).
