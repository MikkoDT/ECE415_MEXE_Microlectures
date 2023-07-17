int redPin=3;
int bright=1;
void setup() {
  // put your setup code here, to run once:
 pinMode(redPin,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
analogWrite(redPin,bright);
}
