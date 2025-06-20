#include <IRremote.h>
int IRpin=11;
IRrecv IR(IRpin);
int t=1500;
int redLED=4;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
IR.enableIRIn();
pinMode(redLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
if(IR.decode())
{
 //Serial.println(IR.decodedIRData.decodedRawData,HEX); 
 if(IR.decodedIRData.decodedRawData == 0xEA15FF00)
 {
  digitalWrite(redLED,HIGH);
 }
  if(IR.decodedIRData.decodedRawData == 0xF807FF00)
 {
  digitalWrite(redLED,LOW);
 }
 delay(t);
 IR.resume();
}

}
