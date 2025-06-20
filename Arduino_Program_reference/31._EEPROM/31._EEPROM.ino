#include <EEPROM.h>
//EEPROM is good 100,00 write/erase cycles
//3.3 ms per write

int greenLED=5,redLED=3;
int greenBut=12,redBut=8;

int greenVal;
int redVal;

int lastPress=0;
int address=0;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(greenBut,INPUT);
digitalWrite(greenBut,HIGH);
pinMode(redBut,INPUT);
digitalWrite(redBut,HIGH);
pinMode(greenLED,OUTPUT);
pinMode(redLED,OUTPUT);
lastPress=EEPROM.read(address);
}

void loop() {
  // put your main code here, to run repeatedly:
greenVal=digitalRead(greenBut);
redVal=digitalRead(redBut);

if(greenVal==0)
{
  lastPress = greenVal;
  EEPROM.write(address,lastPress);
}
else if(redVal==0)
{
  lastPress = redVal;
  EEPROM.write(address,lastPress);
}
if(lastPress==greenVal)
{
  digitalWrite(redLED,LOW);
  EEPROM.write(address,redLED);
  digitalWrite(greenLED,HIGH);
  EEPROM.write(address,greenLED);
}
else if(lastPress==redVal)
{
  digitalWrite(redLED,HIGH);
  EEPROM.write(address,redLED);
  digitalWrite(greenLED,LOW);
  EEPROM.write(address,greenLED);
}
}
