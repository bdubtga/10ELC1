int hpin1 = 6;
int hpin2 = 7; // h bridge pins
int potpin = A0; // potentiometer pin
int potval = 0; // potentiometer value
int motorspeed = 0; // motor speed
int hpinspeed = 11; // h bridge speed pin

void setup() {
    pinMode(hpin1, OUTPUT);
    pinMode(hpin2, OUTPUT);
    pinMode(potpin, INPUT);
    pinMode(hpinspeed, OUTPUT);
    Serial.begin(9600);
}

void loop() {
    Serial.print(potval);
    Serial.print(" ");
    Serial.println(motorspeed);
    potval = analogRead(potpin);
    analogWrite(hpinspeed, motorspeed);
    if (potval > 520) {
        digitalWrite(hpin1, HIGH);
        digitalWrite(hpin2, LOW);
        motorspeed = ((potval - 520)/4)*2;
    } 
    else if (potval < 500) {
        digitalWrite(hpin1, LOW);
        digitalWrite(hpin2, HIGH);
        motorspeed = ((500 - potval)/4)*2;
    }
    else {
        digitalWrite(hpin1, LOW);
        digitalWrite(hpin2, LOW);
        motorspeed = 0;
    }
}

