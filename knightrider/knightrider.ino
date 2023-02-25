int led1 = 11;
int led2 = 10;
int led3 = 9;
int led4 = 8;
int led5 = 7;
int led6 = 6;
int led7 = 5;
int led8 = 4;
int led9 = 3;
int led10 = 2;
int randomNum;
char val;
void setup() {
    pinMode(led1, OUTPUT);
    pinMode(led2, OUTPUT);
    pinMode(led3, OUTPUT);
    pinMode(led4, OUTPUT);
    pinMode(led5, OUTPUT);
    pinMode(led6, OUTPUT);
    pinMode(led7, OUTPUT);
    pinMode(led8, OUTPUT);
    pinMode(led9, OUTPUT);
    pinMode(led10, OUTPUT);
    Serial.begin(9600);
}
void loop() {
    if (Serial.available()) {
        val = Serial.read();
        if (val == '1') {
            Serial.println("ON");
            digitalWrite(led1, HIGH);
            digitalWrite(led2, HIGH);
            digitalWrite(led3, HIGH);
            digitalWrite(led4, HIGH);
            digitalWrite(led5, HIGH);
            digitalWrite(led6, HIGH);
            digitalWrite(led7, HIGH);
            digitalWrite(led8, HIGH);
            digitalWrite(led9, HIGH);
            digitalWrite(led10, HIGH);
        }
        if (val == '2') {
            Serial.println("OFF");
            digitalWrite(led1, LOW);
            digitalWrite(led2, LOW);
            digitalWrite(led3, LOW);
            digitalWrite(led4, LOW);
            digitalWrite(led5, LOW);
            digitalWrite(led6, LOW);
            digitalWrite(led7, LOW);
            digitalWrite(led8, LOW);
            digitalWrite(led9, LOW);
            digitalWrite(led10, LOW);
        }
        if (val == '3') {
            Serial.println("LEFT > RIGHT");
            digitalWrite(led1, HIGH);
            delay(100);
            digitalWrite(led1, LOW);
            digitalWrite(led2, HIGH);
            delay(100);
            digitalWrite(led2, LOW);
            digitalWrite(led3, HIGH);
            delay(100);
            digitalWrite(led3, LOW);
            digitalWrite(led4, HIGH);   
            delay(100);
            digitalWrite(led4, LOW);
            digitalWrite(led5, HIGH);
            delay(100);
            digitalWrite(led5, LOW);
            digitalWrite(led6, HIGH);
            delay(100);
            digitalWrite(led6, LOW);
            digitalWrite(led7, HIGH);
            delay(100);
            digitalWrite(led7, LOW);
            digitalWrite(led8, HIGH);
            delay(100);
            digitalWrite(led8, LOW);
            digitalWrite(led9, HIGH);
            delay(100);
            digitalWrite(led9, LOW);
            digitalWrite(led10, HIGH);
            delay(100);
            digitalWrite(led10, LOW);
        }
        if (val == '4') {
            Serial.println("RIGHT > LEFT");
            digitalWrite(led10, HIGH);
            delay(100);
            digitalWrite(led10, LOW);
            digitalWrite(led9, HIGH);
            delay(100);
            digitalWrite(led9, LOW);
            digitalWrite(led8, HIGH);
            delay(100);
            digitalWrite(led8, LOW);
            digitalWrite(led7, HIGH);
            delay(100);
            digitalWrite(led7, LOW);
            digitalWrite(led6, HIGH);
            delay(100);
            digitalWrite(led6, LOW);
            digitalWrite(led5, HIGH);
            delay(100);
            digitalWrite(led5, LOW);
            digitalWrite(led4, HIGH);
            delay(100);
            digitalWrite(led4, LOW);
            digitalWrite(led3, HIGH);
            delay(100);
            digitalWrite(led3, LOW);
            digitalWrite(led2, HIGH);
            delay(100);
            digitalWrite(led2, LOW);
            digitalWrite(led1, HIGH);
            delay(100);
            digitalWrite(led1, LOW);
        }
        if (val == '5') {
            Serial.println("IN > OUT");
            digitalWrite(led5, HIGH);
            digitalWrite(led6, HIGH);
            delay(100);
            digitalWrite(led5, LOW);
            digitalWrite(led6, LOW);
            digitalWrite(led4, HIGH);
            digitalWrite(led7, HIGH);
            delay(100);
            digitalWrite(led4, LOW);
            digitalWrite(led7, LOW);
            digitalWrite(led3, HIGH);
            digitalWrite(led8, HIGH);
            delay(100);
            digitalWrite(led3, LOW);
            digitalWrite(led8, LOW);
            digitalWrite(led2, HIGH);
            digitalWrite(led9, HIGH);
            delay(100);
            digitalWrite(led2, LOW);
            digitalWrite(led9, LOW);
            digitalWrite(led1, HIGH);
            digitalWrite(led10, HIGH);
            delay(100);
            digitalWrite(led1, LOW);
            digitalWrite(led10, LOW);
        }
        if (val == '6') {
            Serial.println("OUT > IN");
            digitalWrite(led1, HIGH);
            digitalWrite(led10, HIGH);
            delay(100);
            digitalWrite(led1, LOW);
            digitalWrite(led10, LOW);
            digitalWrite(led2, HIGH);
            digitalWrite(led9, HIGH);
            delay(100);
            digitalWrite(led2, LOW);
            digitalWrite(led9, LOW);
            digitalWrite(led3, HIGH);
            digitalWrite(led8, HIGH);
            delay(100);
            digitalWrite(led3, LOW);
            digitalWrite(led8, LOW);
            digitalWrite(led4, HIGH);
            digitalWrite(led7, HIGH);
            delay(100);
            digitalWrite(led4, LOW);
            digitalWrite(led7, LOW);
            digitalWrite(led5, HIGH);
            digitalWrite(led6, HIGH);
            delay(100);
            digitalWrite(led5, LOW);
            digitalWrite(led6, LOW);
        }
        if (val == '7') {
            Serial.println("FLASH");
            digitalWrite(led1, HIGH);
            digitalWrite(led2, HIGH);
            digitalWrite(led3, HIGH);
            digitalWrite(led4, HIGH);
            digitalWrite(led5, HIGH);
            digitalWrite(led6, HIGH);
            digitalWrite(led7, HIGH);
            digitalWrite(led8, HIGH);
            digitalWrite(led9, HIGH);
            digitalWrite(led10, HIGH);
            delay(100);
            digitalWrite(led1, LOW);
            digitalWrite(led2, LOW);
            digitalWrite(led3, LOW);
            digitalWrite(led4, LOW);
            digitalWrite(led5, LOW);
            digitalWrite(led6, LOW);
            digitalWrite(led7, LOW);
            digitalWrite(led8, LOW);
            digitalWrite(led9, LOW);
            digitalWrite(led10, LOW);
            delay(100);
        }
    }
}