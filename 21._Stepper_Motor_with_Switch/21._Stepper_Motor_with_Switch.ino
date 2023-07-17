#include <Stepper.h>
int stepsPerRev=2048;
int motSpeed=10;
Stepper myStepper(stepsPerRev, 8,10,9,11);
int t=500;

int butPin=4;
int motDir=1;
int butNew;
int butPast=1;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myStepper.setSpeed(motSpeed);
pinMode(butPin,INPUT);
digitalWrite(butPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
butNew=digitalRead(butPin);
if (butPast==0 && butNew==1)
{
  motDir=motDir*(-1);
}
myStepper.step(motDir*1);
butPast=butNew;
}
