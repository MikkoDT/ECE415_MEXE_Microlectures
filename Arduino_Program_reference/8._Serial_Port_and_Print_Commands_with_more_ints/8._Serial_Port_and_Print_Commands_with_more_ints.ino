int j=1;
int t=500;
int x=3,y=7,z;
String plusString=" + ";
String equalString=" = ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
z=x+y;
Serial.print("x");
Serial.print(plusString);
Serial.print("y");
Serial.print(equalString);
Serial.println(z);
delay(t);
}
