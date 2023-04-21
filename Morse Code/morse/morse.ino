float speed = 0.00; //speed of overall
int morsegap = 100; //time between dots and dashes
int wordgap = 600; //time between words
int lettergap = 300; //time between letters
int dotlength = 100; //length of a dot
int dashlength = 300; //length of a dash
int led = 2; //the pin the LED is connected to
int potpin = A1; //the pin the potentiometer is connected to
float pot = analogRead(potpin); //the value of the potentiometer
char input; //the character we're reading from the serial port
int dot() { //function to flash a dot on the LED
  digitalWrite(led, HIGH);
  delay(dotlength*speed);
  digitalWrite(led, LOW);
  delay(morsegap*speed);
}
int dash() { //function to flash a dash on the LED
  digitalWrite(led, HIGH);
  delay(dashlength*speed);
  digitalWrite(led, LOW);
  delay(morsegap*speed);
}
float updatepot() { //function to update the speed of the morse code
  Serial.println("Pot"); 
  pot = analogRead(potpin); 
  speed = pot/100; 
  Serial.println(speed);
}
void setup() {
  pinMode(led, OUTPUT);
  pinMode(potpin, INPUT);
  Serial.begin(9600);
  pot = analogRead(potpin);
  speed = pot/100;
}
void la() {
  dot();
  dash();
  delay(lettergap*speed);
}
void lb() {
  dash();
  dot();
  dot();
  dot();
  delay(lettergap*speed);
}
void lc() {
  dash();
  dot();
  dash();
  dot();
  delay(lettergap*speed);
}
void ld() {
  dash();
  dot();
  dot();
  delay(lettergap*speed);
}
void le() {
  dot();
  delay(lettergap*speed);
}
void lf() {
  dot();
  dot();
  dash();
  dot();
  delay(lettergap*speed);
}
void lg() {
  dash();
  dash();
  dot();
  delay(lettergap*speed);
}
void lh() {
  dot();
  dot();
  dot();
  dot();
  delay(lettergap*speed);
}
void li() {
  dot();
  dot();
  delay(lettergap*speed);
}
void lj() {
  dot();
  dash();
  dash();
  dash();
  delay(lettergap*speed);
}
void lk() {
  dash();
  dot();
  dash();
  delay(lettergap*speed);
}
void ll() {
  dot();
  dash();
  dot();
  dot();
  delay(lettergap*speed);
}
void lm() {
  dash();
  dash();
  delay(lettergap*speed);
}
void ln() {
  dash();
  dot();
  delay(lettergap*speed);
}
void lo() {
  dash();
  dash();
  dash();
  delay(lettergap*speed);
}
void lp() {
  dot();
  dash();
  dash();
  dot();
  delay(lettergap*speed);
}
void lq() {
  dash();
  dash();
  dot();
  dash();
  delay(lettergap*speed);
}
void lr() {
  dot();
  dash();
  dot();
  delay(lettergap*speed);
}
void ls() {
  dot();
  dot();
  dot();
  delay(lettergap*speed);
}
void lt() {
  dash();
  delay(lettergap*speed);
}
void lu() {
  dot();
  dot();
  dash();
  delay(lettergap*speed);
}
void lv() {
  dot();
  dot();
  dot();
  dash();
  delay(lettergap*speed);
}
void lw() {
  dot();
  dash();
  dash();
  delay(lettergap*speed);
}
void lx() {
  dash();
  dot();
  dot();
  dash();
  delay(lettergap*speed);
}
void ly() {
  dash();
  dot();
  dash();
  dash();
  delay(lettergap*speed);
}
void lz() {
  dash();
  dash();
  dot();
  dot();
  delay(lettergap*speed);
}
void l0() {
  dash();
  dash();
  dash();
  dash();
  dash();
  delay(lettergap*speed);
}
void l1() {
  dot();
  dash();
  dash();
  dash();
  dash();
  delay(lettergap*speed);
}
void l2() {
  dot();
  dot();
  dash();
  dash();
  dash();
  delay(lettergap*speed);
}
void l3() {
  dot();
  dot();
  dot();
  dash();
  dash();
  delay(lettergap*speed);
}
void l4() {
  dot();
  dot();
  dot();
  dot();
  dash();
  delay(lettergap*speed);
}
void l5() {
  dot();
  dot();
  dot();
  dot();
  dot();
  delay(lettergap*speed);
}
void l6() {
  dash();
  dot();
  dot();
  dot();
  dot();
  delay(lettergap*speed);
}
void l7() {
  dash();
  dash();
  dot();
  dot();
  dot();
  delay(lettergap*speed);
}
void l8() {
  dash();
  dash();
  dash();
  dot();
  dot();
  delay(lettergap*speed);
}
void l9() {
  dash();
  dash();
  dash();
  dash();
  dot();
  delay(lettergap*speed);
}
void sos() {
  dot();
  dot();
  dot();
  dash();
  dash();
  dash();
  dot();
  dot();
  dot();
  delay(wordgap*speed);
  updatepot();
  sos();
}
void loop () {
  if (Serial.available()) {
    input = Serial.read();
    if (input == 'a' || input == 'A') {Serial.println("a ._"); la();}
    if (input == 'b' || input == 'B') {Serial.println("b _..."); lb();}
    if (input == 'c' || input == 'C') {Serial.println("c _._."); lc();}
    if (input == 'd' || input == 'D') {Serial.println("d _.."); ld();}
    if (input == 'e' || input == 'E') {Serial.println("e ."); le();}
    if (input == 'f' || input == 'F') {Serial.println("f .._."); lf();}
    if (input == 'g' || input == 'G') {Serial.println("g __."); lg();}
    if (input == 'h' || input == 'H') {Serial.println("h ...."); lh();}
    if (input == 'i' || input == 'I') {Serial.println("i .."); li();}
    if (input == 'j' || input == 'J') {Serial.println("j .___"); lj();}
    if (input == 'k' || input == 'K') {Serial.println("k _._"); lk();}
    if (input == 'l' || input == 'L') {Serial.println("l ._.."); ll();}
    if (input == 'm' || input == 'M') {Serial.println("m __"); lm();}
    if (input == 'n' || input == 'N') {Serial.println("n _."); ln();}
    if (input == 'o' || input == 'O') {Serial.println("o ___"); lo();}
    if (input == 'p' || input == 'P') {Serial.println("p .__."); lp();}
    if (input == 'q' || input == 'Q') {Serial.println("q __._"); lq();}
    if (input == 'r' || input == 'R') {Serial.println("r ._."); lr();}
    if (input == 's' || input == 'S') {Serial.println("s ..."); ls();}
    if (input == 't' || input == 'T') {Serial.println("t _"); lt();}
    if (input == 'u' || input == 'U') {Serial.println("u .._"); lu();}
    if (input == 'v' || input == 'V') {Serial.println("v ..._"); lv();}
    if (input == 'w' || input == 'W') {Serial.println("w .__"); lw();}
    if (input == 'x' || input == 'X') {Serial.println("x _.._"); lx();}
    if (input == 'y' || input == 'Y') {Serial.println("y _.__"); ly();}
    if (input == 'z' || input == 'Z') {Serial.println("z __.."); lz();}
    if (input == ' ') {delay(wordgap*speed); Serial.println("Space Key Pressed");}
    if (input == '0') {Serial.println("0 _____"); l0();}
    if (input == '1') {Serial.println("1 .____"); l1();}
    if (input == '2') {Serial.println("2 ..___"); l2();}
    if (input == '3') {Serial.println("3 ...__"); l3();}
    if (input == '4') {Serial.println("4 ...._"); l4();}
    if (input == '5') {Serial.println("5 ....."); l5();}
    if (input == '6') {Serial.println("6 _...."); l6();}
    if (input == '7') {Serial.println("7 __..."); l7();}
    if (input == '8') {Serial.println("8 ___.."); l8();}
    if (input == '9') {Serial.println("9 ____."); l9();}
    if (input == '.') {Serial.println("Dot"); dot();}
    if (input == '/') {Serial.println("Dash"); dash();}
    if (input == ',') {updatepot();}
    if (input == ']') {Serial.println("SOS ... ____ ..."); sos();}
    }
  }