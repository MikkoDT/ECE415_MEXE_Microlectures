#include <Servo.h>
const int Pot=13, sPin=18;
float aRead;
float serPos=0;
Servo sv;
int t=1000;

void setup() {
  // put your setup code here, to run once:
  pinMode(Pot, INPUT);
  pinMode(sPin, OUTPUT);
  sv.attach(sPin);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
 
  aRead = analogRead(Pot);
  serPos = (180./4095.)*aRead;  // aRead to serPos

  Serial.print("Position: ");
  Serial.print(serPos);
  Serial.println(" deg");
  Serial.println();
  delay(t);

  sv.write(serPos);
}