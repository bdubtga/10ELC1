## Arduino Knight Rider
This repository contains the code for the Knight Rider project. This project uses an Arduino to control 10 LEDs which will light up in various patterns. The LEDs are controlled via serial input.

###### Hardware Required:
- Arduino
- 10 LEDs connected to digital pins 2-11.

###### Controls (Serial):
- '1' will turn on all the LEDs.
- '2' will turn off all the LEDs.
- '3' will turn on the LEDs one by one from left to right. (Pin 11 to Pin 2)
- '4' will turn on the LEDs one by one from right to left. (Pin 2 to Pin 11)
- '5' will turn on the LEDs one by one from inside to outside.
- '6' will turn on the LEDs one by one from outside to inside.
- '7' will flash all the LEDs on for 100ms.
