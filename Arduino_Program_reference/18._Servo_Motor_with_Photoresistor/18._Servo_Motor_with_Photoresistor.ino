#include <Servo.h>
int servoPin=4;
Servo myServo;
int t=250;
int lightVal;
int lightPin=A3;
float angleVal;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(lightPin,INPUT);
pinMode(servoPin,OUTPUT);
myServo.attach(servoPin);
}

void loop() {
  // put your main code here, to run repeatedly:
lightVal=analogRead(lightPin);
Serial.println(lightVal);
delay(t);
angleVal=(-3.0/10.0)*(lightVal-700.0);
myServo.write(angleVal);
}
