unsigned long event = 5000; // 5 seconds
int butPin=2;
int butVal;
int butPin2=3;
int butVal2;
int redLED=8;
unsigned long butPushed;
unsigned long diff;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Introduction to millis");
pinMode(butPin,INPUT);
digitalWrite(butPin,HIGH);
pinMode(butPin2,INPUT);
digitalWrite(butPin2,HIGH);
pinMode(redLED,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(millis());
butVal=digitalRead(butPin);
if(butVal==0 && butPushed==0)
{
butPushed=millis();
Serial.print("First push at:");
Serial.println(butPushed);
}
if(butVal==0 && butPushed>0)
{
  diff = millis() - butPushed;
  if(diff >= event)
  {
    Serial.println("Action after 5 seconds of first push");
  }
}
butVal2=digitalRead(butPin2);
if(butVal2==0)
{
  digitalWrite(redLED,HIGH);
}
else
{
  digitalWrite(redLED,LOW);
}
}
