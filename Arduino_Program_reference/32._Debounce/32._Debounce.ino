int pressed;
int redLED=3;
int butPin=11;
bool butVal;
bool butState;
int debounceBut;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
pinMode(butPin,INPUT);
digitalWrite(butPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  butVal=digitalRead(butPin);
if(butVal==HIGH && butState==LOW)
{
  pressed++;
  butState=HIGH;
}
else if(debounceBut(butVal)==LOW &&butState==HIGH)
{
  butState=LOW;
}
if(pressed==10)
{
  digitalWrite(redLED,HIGH);
}
}
