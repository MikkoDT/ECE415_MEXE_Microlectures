#include <Stepper.h>
int stepsPerRev=2048;
int motSpeed=10;
Stepper myStepper(stepsPerRev, 8,10,9,11);
int t=500;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myStepper.setSpeed(motSpeed);
}

void loop() {
  // put your main code here, to run repeatedly:
myStepper.step(stepsPerRev);
delay(t);
myStepper.step(-stepsPerRev);
delay(t);
}
