#include <ESP32Servo.h>
int servoPin=16;

float servoPos=0;
Servo myServo;
int t=250;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println("What Angle for the Servo? ");
while(Serial.available()==0)
{
  
}
servoPos=Serial.parseFloat();
Serial.print("Angle = ");
Serial.println(servoPos);
Serial.println();
delay(t);
myServo.write(servoPos);
}
