float myRad;
String msg1="What is the radius of your Circle?";
String msg2="My radius is  ";
String msg3="The Area of your Circle is: ";
int t=500;
float area;
float pi=3.1416;

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
myRad=Serial.parseFloat();
area=pi*pow(myRad,2);
Serial.print(msg2);
Serial.println(myRad);
Serial.print(msg3);
Serial.println(area);
Serial.println();
}
