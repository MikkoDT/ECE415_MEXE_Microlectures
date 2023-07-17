#include <Servo.h>
int x1Pin=A2;
int y1Pin=A3;
int x2Pin=A4;
int y2Pin=A5;
int sw1Pin=2;
int sw2Pin=4;
int xVal1;
//int yVal1;
int swVal1;
//int xVal2;
int yVal2;
int swVal2;
int t=500;
int base_Servo=8;
int elbow_Servo=10;
int shoulder_Servo=9;
int hand_Servo=11;
int angleX1;
//int angleY1;
//int angleX2;
int angleY2;
int xVal_cor;
int yVal_cor;

Servo servo_base;
Servo servo_elbow;
Servo servo_shoulder;
Servo servo_hand;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(x1Pin,INPUT);
//pinMode(y1Pin,INPUT);
pinMode(sw1Pin,INPUT);
pinMode(base_Servo,OUTPUT);
pinMode(elbow_Servo,OUTPUT);
servo_base.attach(base_Servo);
servo_elbow.attach(elbow_Servo);
digitalWrite(sw1Pin,HIGH);

//pinMode(x2Pin,INPUT);
pinMode(y2Pin,INPUT);
pinMode(sw2Pin,INPUT);
pinMode(shoulder_Servo,OUTPUT);
pinMode(hand_Servo,OUTPUT);
servo_shoulder.attach(shoulder_Servo);
servo_hand.attach(hand_Servo);
digitalWrite(sw2Pin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
xVal1=analogRead(x1Pin);
if (xVal1==505)
{
  angleX1==0;
}
else
{
  angleX1=(180./518.)*xVal1;
} 

servo_base.write(angleX1);

yVal2=analogRead(y2Pin);

angleY2=(30./514.)*yVal2;
 
servo_shoulder.write(angleY2);

swVal1=digitalRead(sw1Pin);
if (swVal1 == 0)
{
  servo_elbow.write(20);
}
else
{
  servo_elbow.write(0);
}

swVal2=digitalRead(sw2Pin);
if (swVal2 == 0)
{
  servo_hand.write(90);
}
else
{
  servo_hand.write(0);
}


Serial.print("X Value = ");
Serial.print(xVal1);
Serial.print(", Y Value = ");
Serial.print(yVal2);
//Serial.print(", Switch State is ");
//Serial.println(swVal);
Serial.println();
delay(t);
}
