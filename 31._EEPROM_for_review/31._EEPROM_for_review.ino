#include <EEPROM.h>
int redLED=3;
int butPin=12;

int butState;
int lastButState=1;
long unsigned int lastPress;
int debounceTime = 20;
int counter;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(butPin,INPUT);
digitalWrite(butPin,HIGH);
Serial.begin(9600);
counter=EEPROM.read(0); //assign counter the address 0
EEPROM.write(0,0); // write 0  to address 0. Consecutive resets to reset the counter.
}

void loop() {
  // put your main code here, to run repeatedly:
butState=digitalRead(butPin);
if(millis() - lastPress > debounceTime)
{
  lastPress = millis();
  if(butState==0 && lastButState==1)
  {
    counter++;
    EEPROM.write(0,counter);
    digitalWrite(redLED,HIGH);
    lastButState = 0;

    Serial.print("Counter: ");
    Serial.println(counter);
  }

  if(butState==1 && lastButState==0)
  {
  lastButState=1;
  digitalWrite(redLED,LOW);
  }
}
}
