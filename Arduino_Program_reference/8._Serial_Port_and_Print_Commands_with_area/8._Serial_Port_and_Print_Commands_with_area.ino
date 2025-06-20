
int t=500;
String areaStr=", has an Area of ",rStr=" A circle with radius of ",periodStr=".";

float pi=3.1416,r=2,area;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
area=pi*r*r;
Serial.print(rStr);
Serial.print(r);
Serial.print(areaStr);
Serial.print(area);
Serial.println(periodStr);
r=r+.5;

delay(t);
}
