#include <IRremote.h>
int IRpin=11;
IRrecv IR(IRpin);
int t=1500;

int redLED=3,greenLED=5,blueLED=6;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
IR.enableIRIn();
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
pinMode(blueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(IR.decode())
{
 //Serial.println(IR.decodedIRData.decodedRawData,HEX);
 if(IR.decodedIRData.decodedRawData == 0xE916FF00)
 {
  Serial.println(0);
  analogWrite(redLED,255);
  analogWrite(blueLED,255);
  analogWrite(greenLED,255);
 }
 if(IR.decodedIRData.decodedRawData == 0xF30CFF00)
 {
  Serial.println(1);
  analogWrite(redLED,255);
  analogWrite(blueLED,0);
  analogWrite(greenLED,0);
 }
  if(IR.decodedIRData.decodedRawData == 0xE718FF00)
 {
  Serial.println(2);
  analogWrite(redLED,0);
  analogWrite(blueLED,255);
  analogWrite(greenLED,0);
 }
 if(IR.decodedIRData.decodedRawData == 0xA15EFF00)
 {
  Serial.println(3);
  analogWrite(redLED,0);
  analogWrite(blueLED,0);
  analogWrite(greenLED,255);
 }
 if(IR.decodedIRData.decodedRawData == 0xF708FF00)
 {
  Serial.println(4);
  analogWrite(redLED,255);
  analogWrite(blueLED,255);
  analogWrite(greenLED,0);
 }
 if(IR.decodedIRData.decodedRawData == 0xE31CFF00)
 {
  Serial.println(5);
  analogWrite(redLED,255);
  analogWrite(blueLED,0);
  analogWrite(greenLED,255);
 }
  if(IR.decodedIRData.decodedRawData == 0xA55AFF00)
 {
  Serial.println(6);
  analogWrite(redLED,0);
  analogWrite(blueLED,255);
  analogWrite(greenLED,255);
 }
 if(IR.decodedIRData.decodedRawData == 0xBD42FF00)
 {
  Serial.println(7);
  analogWrite(redLED,255);
  analogWrite(blueLED,0);
  analogWrite(greenLED,50);
 }
 if(IR.decodedIRData.decodedRawData == 0xAD52FF00)
 {
  Serial.println(8);
  analogWrite(redLED,255);
  analogWrite(blueLED,100);
  analogWrite(greenLED,0);
 }
 if(IR.decodedIRData.decodedRawData == 0xB54AFF00)
 {
  Serial.println(9);
  analogWrite(redLED,0);
  analogWrite(blueLED,80);
  analogWrite(greenLED,255);
 }
 if(IR.decodedIRData.decodedRawData == 0xBC43FF00)
 {
  Serial.println("Play/Pause");
  analogWrite(redLED,0);
  analogWrite(blueLED,0);
  analogWrite(greenLED,0);
 }
  if(IR.decodedIRData.decodedRawData == 0xE619FF00)
 {
  Serial.println(".");
 }
  if(IR.decodedIRData.decodedRawData == 0xEA15FF00)
 {
  Serial.println("v+");
 }
  if(IR.decodedIRData.decodedRawData == 0xF807FF00)
 {
  Serial.println("v-");
 }
  if(IR.decodedIRData.decodedRawData == 0xBF40FF00)
 {
  Serial.println("Next");
 }
  if(IR.decodedIRData.decodedRawData == 0xBB44FF00)
 {
  Serial.println("Prev");
 }
  if(IR.decodedIRData.decodedRawData == 0xB946FF00)
 {
  Serial.println("CH");
 }
  if(IR.decodedIRData.decodedRawData == 0xB847FF00)
 {
  Serial.println("CH+");
 }
  if(IR.decodedIRData.decodedRawData == 0xBA45FF00)
 {
  Serial.println("CH-");
 }
  if(IR.decodedIRData.decodedRawData == 0xF609FF00)
 {
  Serial.println("EQ");
 }
 delay(t);
 IR.resume();
}

}
