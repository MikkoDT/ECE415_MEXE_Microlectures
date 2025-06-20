int relayPin=4;
int pushBut=2;
int pushVal;
int t=250;

void setup() {
  // put your setup code here, to run once:
pinMode(pushBut,INPUT);
digitalWrite(pushBut,HIGH);
pinMode(relayPin,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
pushVal=digitalRead(pushBut);
if(pushVal==0)
{
  digitalWrite(relayPin,HIGH);
}
else
{
  digitalWrite(relayPin,LOW);
}
Serial.println(pushVal);
delay(t);
}
