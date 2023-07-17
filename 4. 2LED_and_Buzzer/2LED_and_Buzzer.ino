/*
redLED = 5 sec
greenLED = 10sec
buzzer with greenLED = 5sec
*/

int redLED = 2, greenLED = 3, buzzer = 4;
int t1=1000;
void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED,HIGH);
delay(t1);

digitalWrite(redLED,LOW);


tone(buzzer,1200);
digitalWrite(greenLED,HIGH);
delay(t1);
noTone(buzzer);
delay(t1);
digitalWrite(greenLED,LOW);
}
