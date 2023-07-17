int readPin=A2;
int readVal;
int redLED=7;
int greenLED=9;
int t=250;

void setup() {
  // put your setup code here, to run once:
pinMode(readPin,INPUT);
pinMode(redLED,OUTPUT);
pinMode(greenLED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(readPin);
Serial.println(readVal);
delay(t);
if(readVal>350)
{
  digitalWrite(greenLED,HIGH);
  digitalWrite(redLED,LOW);
}
else if(readVal<350)
{
  digitalWrite(greenLED,LOW);
  digitalWrite(redLED,HIGH);
}
}
