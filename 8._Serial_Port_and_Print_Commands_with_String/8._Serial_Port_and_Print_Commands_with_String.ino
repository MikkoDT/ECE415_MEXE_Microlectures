int j=1;
int t=500;
String myString="j = ";

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.print(myString);
Serial.println(j);
j=j+1;
delay(t);
}
