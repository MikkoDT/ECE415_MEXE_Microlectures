int tiltPin=2;
int tiltVal;
int t=500;
int redLED=5;
int greenLED=4;

void setup() {
  // put your setup code here, to run once:
pinMode(tiltPin,INPUT);
digitalWrite(tiltPin,HIGH);
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
tiltVal=digitalRead(tiltPin);
Serial.println(tiltVal);
if(tiltVal==0)
{
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,LOW);
}
else
{
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,HIGH);
}
delay(t);
}
