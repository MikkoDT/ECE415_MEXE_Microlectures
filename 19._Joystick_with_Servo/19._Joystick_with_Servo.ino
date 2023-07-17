#include <Servo.h>
int xPin=A3;
int yPin=A4;
int swPin=3;
int xVal;
int yVal;
int swVal;
int t=500;
int xServo=10;
int yServo=8;
int angleX;
int angleY;
Servo servoX;
Servo servoY;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(xPin,INPUT);
pinMode(yPin,INPUT);
pinMode(swPin,INPUT);
pinMode(xServo,OUTPUT);
pinMode(yServo,OUTPUT);
servoX.attach(xServo);
servoY.attach(yServo);
digitalWrite(swPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
xVal=analogRead(xPin);
angleX=(180./1023.)*xVal; 

yVal=analogRead(yPin);
angleY=(180./1023.)*yVal; 

servoX.write(angleX);
servoY.write(angleY);

swVal=digitalRead(swPin);

Serial.print("X Value = ");
Serial.print(xVal);
Serial.print(", Y Value = ");
Serial.print(yVal);
Serial.print(", Switch State is ");
Serial.println(swVal);
Serial.println();
delay(t);
}
