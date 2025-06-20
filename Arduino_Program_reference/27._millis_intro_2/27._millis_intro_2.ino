unsigned long event = 5000; // 5 seconds

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
Serial.println("Introduction to millis");
delay(2000);
}

void loop() {
  // put your main code here, to run repeatedly:
Serial.println(millis());

if(millis()>=event)
{
  Serial.println("Event occured");
}
}
