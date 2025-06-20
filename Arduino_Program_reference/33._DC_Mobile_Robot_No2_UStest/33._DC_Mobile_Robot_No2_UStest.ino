// Motor 1
int dir1=11;
int dir2=10;
int speed1=9;

// Motor 2
int dir3=6;
int dir4=5;
int speed2=3;

int motSpeed1=255;
int motSpeed2=0;

int t1 = 5000;
int t2 = 1000;

void setup() {
  // put your setup code here, to run once:
pinMode(dir1,OUTPUT);
pinMode(dir2,OUTPUT);
pinMode(speed1,OUTPUT);
 
pinMode(dir3,OUTPUT);
pinMode(dir4,OUTPUT);
pinMode(speed2,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//Motors direction - forward 1 sec
digitalWrite(dir1,HIGH);
digitalWrite(dir2,LOW);
digitalWrite(dir3,LOW);
digitalWrite(dir4,HIGH);  
analogWrite(speed1,motSpeed1);
analogWrite(speed2,motSpeed1);
delay(t1);
  
//Motors direction - stop 0.5 sec
digitalWrite(dir1,LOW);
digitalWrite(dir2,LOW);
digitalWrite(dir3,LOW);
digitalWrite(dir4,LOW);  
analogWrite(speed1,motSpeed2);
analogWrite(speed2,motSpeed2);
delay(t2);

//Motors direction - backward 1 sec
digitalWrite(dir1,LOW);
digitalWrite(dir2,HIGH);
digitalWrite(dir3,HIGH);
digitalWrite(dir4,LOW);  
analogWrite(speed1,motSpeed1);
analogWrite(speed2,motSpeed1);
delay(t1);
  
//Motors direction - stop 0.5 sec
digitalWrite(dir1,LOW);
digitalWrite(dir2,LOW);
digitalWrite(dir3,LOW);
digitalWrite(dir4,LOW);  
analogWrite(speed1,motSpeed2);
analogWrite(speed2,motSpeed2);
delay(t2);
}
