//   ________  _______   ________         ___  ___          ___       __   ________  ___       ___       ___  ________      
//  |\   __  \|\  ___ \ |\   ___  \      |\  \|\  \        |\  \     |\  \|\   __  \|\  \     |\  \     |\  \|\   ____\     
//  \ \  \|\ /\ \   __/|\ \  \\ \  \     \ \  \ \  \       \ \  \    \ \  \ \  \|\  \ \  \    \ \  \    \ \  \ \  \___|_    
//   \ \   __  \ \  \_|/_\ \  \\ \  \  __ \ \  \ \  \       \ \  \  __\ \  \ \   __  \ \  \    \ \  \    \ \  \ \_____  \   
//    \ \  \|\  \ \  \_|\ \ \  \\ \  \|\  \\_\  \ \  \       \ \  \|\__\_\  \ \  \ \  \ \  \____\ \  \____\ \  \|____|\  \  
//     \ \_______\ \_______\ \__\\ \__\ \________\ \__\       \ \____________\ \__\ \__\ \_______\ \_______\ \__\____\_\  \ 
//      \|_______|\|_______|\|__| \|__|\|________|\|__|        \|____________|\|__|\|__|\|_______|\|_______|\|__|\_________\
//                                                                                                              \|_________|
#include <SPI.h>
#include <Wire.h>
#include "RF24.h"
#include "printf.h"
RF24 SendRadio(9, 10);
const int J1X = A2;
const int J1Y = A1;
const int J1SW = A0;
const int J2X = A5;
const int J2Y = A4;
const int J2SW = A3;
const int datanum = 6;
int data[datanum];

void setup() {
  Serial.begin(115200);
  printf_begin();
  Serial.println(F("LGT RF-NANO v2.0 Send Test"));
  SendRadio.begin();
  SendRadio.setAddressWidth(5);
  SendRadio.openWritingPipe(0xF0F0F0F066LL);
  SendRadio.setChannel(115);           //115 band above WIFI signals
  SendRadio.setPALevel(RF24_PA_MAX);   //MIN power low rage
  SendRadio.setDataRate(RF24_1MBPS) ;  //Minimum speed
  SendRadio.stopListening(); //Stop Receiving and start transminitng
  Serial.print("Send Setup Initialized");
  SendRadio.printDetails();
  delay(500);
  pinMode(J1X, INPUT);
  pinMode(J1Y, INPUT);
  pinMode(J1SW, INPUT);
  pinMode(J2X, INPUT);
  pinMode(J2Y, INPUT);
  pinMode(J2SW, INPUT);
}

void loop() {
  data[0] = analogRead(J1X);
  data[1] = analogRead(J1Y);
  data[2] = analogRead(J1SW);
  data[3] = analogRead(J2X);
  data[4] = analogRead(J2Y);
  data[5] = analogRead(J2SW);
  SendRadio.openWritingPipe(0xF0F0F0F066);//Sends data on this 40-bit address
  SendRadio.write(data, datanum * sizeof(int));;
  Serial.print(data[0]);
  Serial.print(" ");
  Serial.print(data[1]);
  Serial.print(" ");
  Serial.print(data[2]);
  Serial.print(" ");
  Serial.print(data[3]);
  Serial.print(" ");
  Serial.print(data[4]); 
  Serial.print(" ");
  Serial.println(data[5]);
  delay(100);
}
