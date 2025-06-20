int redLED=5;
int buttonPin=2;
int t=100;
int stateLED=0;
int buttonNew;
int buttonPast=1;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(buttonPin,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
buttonNew=digitalRead(buttonPin);
if(buttonPast==0 && buttonNew==1)
{
  if(stateLED==0)
  {
    digitalWrite(redLED,HIGH);
    stateLED=1;
  }
  else
  {
    digitalWrite(redLED,LOW);
    stateLED=0;
  }
}
buttonPast=buttonNew;
delay(t);
}
