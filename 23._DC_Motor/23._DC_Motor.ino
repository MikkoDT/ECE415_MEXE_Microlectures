int dir1=6;
int dir2=5;
int t=5000;

void setup() {
  // put your setup code here, to run once:
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);
delay(t);
  
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
delay(t);
}
