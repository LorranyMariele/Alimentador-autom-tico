#include <Arduino.h>
const int velmotor = 3;
const int motora = 10;
const int motorb = 11;
const int buz = 9;
const int verd = 6;
const int verm = 7;
//#define tmp 3000

void setup (){
  pinMode(velmotor,OUTPUT);
  pinMode(motora,OUTPUT);
  pinMode(motorb,OUTPUT);
  pinMode(buz, OUTPUT);
  pinMode(verd,OUTPUT);
  pinMode(verm, OUTPUT);
}
void loop(){
  int vel = 70;
  
  digitalWrite(motora,LOW);
  digitalWrite(motorb,HIGH);
  analogWrite(velmotor, 0);
  delay (600000);
  if(digitalRead(velmotor ==70)){
    analogWrite(velmotor, vel);
    digitalWrite(verd, HIGH);
    digitalWrite(verm,LOW);
    tone(buz,4000,200);
    delay (1000);
    analogWrite(velmotor, vel);
    delay (60000);
    
  }
  
  
  digitalWrite(verd, LOW);
  digitalWrite(verm,HIGH);
   
   
}
