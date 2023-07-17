
// millis variables
unsigned long fromStartms; // millis from start
unsigned long prevms=0; // millis previous read
unsigned long interval=1000;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
fromStartms=millis();
if(fromStartms - prevms > interval)
{
  prevms = fromStartms;
  Serial.println("Hello World!");
}
}
