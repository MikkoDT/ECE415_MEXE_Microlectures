String myName;
String msg1="Hello! What's your name?";
String msg2="Hi! My name is ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(msg1);
while(Serial.available()==0)
{
  
}
myName=Serial.readString();
Serial.print(msg2);
Serial.println(myName);
Serial.println();
}
