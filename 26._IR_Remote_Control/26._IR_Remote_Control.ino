#include <IRremote.h>
int IRpin=11;
IRrecv IR(IRpin);
int t=1500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(IRpin,INPUT);
IR.enableIRIn();
}

void loop() {
  // put your main code here, to run repeatedly:
while(IR.decode())
{
 //Serial.println(IR.decodedIRData.decodedRawData,HEX);
 if(IR.decodedIRData.decodedRawData == 0xE916FF00)
 {
  Serial.println(0);
 }
 if(IR.decodedIRData.decodedRawData == 0xF30CFF00)
 {
  Serial.println(1);
 }
  if(IR.decodedIRData.decodedRawData == 0xE718FF00)
 {
  Serial.println(2);
 }
 if(IR.decodedIRData.decodedRawData == 0xA15EFF00)
 {
  Serial.println(3);
 }
  if(IR.decodedIRData.decodedRawData == 0xF708FF00)
 {
  Serial.println(4);
 }
 if(IR.decodedIRData.decodedRawData == 0xE31CFF00)
 {
  Serial.println(5);
 }
  if(IR.decodedIRData.decodedRawData == 0xA55AFF00)
 {
  Serial.println(6);
 }
 if(IR.decodedIRData.decodedRawData == 0xBD42FF00)
 {
  Serial.println(7);
 }
 if(IR.decodedIRData.decodedRawData == 0xAD52FF00)
 {
  Serial.println(8);
 }
 if(IR.decodedIRData.decodedRawData == 0xB54AFF00)
 {
  Serial.println(9);
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
  if(IR.decodedIRData.decodedRawData == 0xBC43FF00)
 {
  Serial.println("Play/Pause");
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
