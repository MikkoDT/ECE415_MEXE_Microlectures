int redLED=5;
int buttonPin=2;
int buttonRead;
int t=250;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(buttonPin,INPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonRead=digitalRead(buttonPin);
Serial.println(buttonRead);
delay(t);
if(buttonRead==1)
{
  digitalWrite(redLED,LOW);
}
if(buttonRead==0)
{
  digitalWrite(redLED,HIGH);
}
}
