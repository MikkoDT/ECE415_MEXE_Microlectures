int redLED=4; // 1sec on and 1 sec off
int blueLED=3; // .25sec on/.25sec off
int t=100;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(blueLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(redLED,HIGH);
digitalWrite(blueLED,HIGH);
delay(t);
digitalWrite(blueLED,LOW);
delay(t);
digitalWrite(blueLED,HIGH);
delay(t);
digitalWrite(blueLED,LOW);
delay(t);
digitalWrite(redLED,LOW);
digitalWrite(blueLED,HIGH);
delay(t);
digitalWrite(blueLED,LOW);
delay(t);
digitalWrite(blueLED,HIGH);
delay(t);
digitalWrite(blueLED,LOW);
delay(t);
}
