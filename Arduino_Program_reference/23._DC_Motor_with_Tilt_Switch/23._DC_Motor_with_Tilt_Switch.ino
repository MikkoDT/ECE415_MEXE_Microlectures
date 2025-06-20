int dir1=6;
int dir2=5;
int tiltSw=2;
int tiltVal;
int t=500;

void setup() {
  // put your setup code here, to run once:
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(tiltSw,INPUT);
  digitalWrite(tiltSw,HIGH);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
tiltVal=digitalRead(tiltSw);
if (tiltVal==1)
{
  digitalWrite(dir1,HIGH);
}
else
{
  digitalWrite(dir1,LOW);
}
Serial.println(tiltVal);
delay(t);
}
