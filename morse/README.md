## Arduino Morse Code Translator
This project takes serial input and converts it into morse code which is then shown on an LED. Additionally, this project also has a potentiometer which controls the speed of the morse code.

###### Hardware Required:
- Arduino
- LED connected to digital pin 2.
- Potentiometer connected to analog pin 0.

###### Controls:
- Typing plain letters or numbers will directly translate to morse.
- Typing a space will add a space (long gap) between words.
- '.' will manually type a dot.
- '/' will manually type a dash.
- ',' will update the potentiometer value therefore changing the speed of the morse code.
- ']' will automatically morse the SOS signal.
