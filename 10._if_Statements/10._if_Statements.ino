int myPin=A2;
float readVal;
float V2;
int t=500;
String Mess1="Potentiometer Voltage is ";
int redLED=3;
int buzzer=9;

void setup() {
  // put your setup code here, to run once:
pinMode(myPin,INPUT);
pinMode(redLED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
readVal=analogRead(myPin);
V2=(5./1023.)*readVal;
Serial.print(Mess1);
Serial.println(V2);

if (V2==5.0)
{
  digitalWrite(redLED,HIGH);
  tone(buzzer,800);
}
if (V2!=5.0)
{
  digitalWrite(redLED,LOW);
  noTone(buzzer);
}
delay(t);
}
