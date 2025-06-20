int redLED=2;
int myNum;
String msg1="How many blinks do you want?";
String msg2="Your Number is: ";
int i;
int t=500;

void setup() {
  // put your setup code here, to run once:
pinMode(redLED,OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg1);
while(Serial.available()==0)
{
  
}
myNum=Serial.parseInt();
Serial.print(msg2);
Serial.println(myNum);
for (i=1;i<=myNum;i++)
{
  digitalWrite(redLED,HIGH);
  delay(t);
  digitalWrite(redLED,LOW);
  delay(t);
}
}
