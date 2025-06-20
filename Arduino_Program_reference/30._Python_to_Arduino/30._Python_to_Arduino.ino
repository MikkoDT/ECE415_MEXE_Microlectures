String myCmd;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(13,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
while(Serial.available()==0)
{
  
}
myCmd=Serial.readStringUntil('\r');
Serial.println(myCmd);
if(myCmd=="ON")
{
  digitalWrite(13,HIGH);
}
if(myCmd=="OFF")
{
  digitalWrite(13,LOW);
}
}
