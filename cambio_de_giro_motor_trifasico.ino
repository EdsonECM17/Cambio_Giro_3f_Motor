#include <SoftwareSerial.h>

int led13=3;
int estado=0;


void setup(){
  Serial.begin(9600);
  pinMode(12,OUTPUT); 
  pinMode(13,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(10,OUTPUT);
   pinMode(7,OUTPUT);
}

void loop(){
 if(Serial.available()>0){
  estado = Serial.read();
  Serial.println(estado);
  
  }
 
 if (estado == 97){
  digitalWrite(11,HIGH);
 digitalWrite(10,HIGH);
 digitalWrite(7,HIGH);
 }

  if (estado == 98){
  digitalWrite(11,LOW);
 digitalWrite(10,LOW);
 digitalWrite(7,LOW);
 
 }
 
 
  

//giro izq//
if (estado == 99){
  digitalWrite(13,LOW);
 digitalWrite(12,LOW);
 
 }
 //giro der//
 if (estado == 100){
  digitalWrite(13,HIGH);
 digitalWrite(12,HIGH);
 
 
 
 }

}
