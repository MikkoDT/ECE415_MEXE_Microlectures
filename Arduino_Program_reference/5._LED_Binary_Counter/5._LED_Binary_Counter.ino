int pin2=2,pin3=3,pin4=4,pin5=5;
int t=1000;

void setup() {
  // put your setup code here, to run once:
pinMode(pin2,OUTPUT);
pinMode(pin3,OUTPUT);
pinMode(pin4,OUTPUT);
pinMode(pin5,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
// 0 = 0000
digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
digitalWrite(pin5,LOW);
delay(t);

// 1 = 0001
digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
digitalWrite(pin5,HIGH);
delay(t);

// 2 = 0010
digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,LOW);
delay(t);

// 3 = 0011
digitalWrite(pin2,LOW);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,HIGH);
delay(t);

// 4 = 0100
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
digitalWrite(pin5,LOW);
delay(t);

// 5 = 0101
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
digitalWrite(pin5,HIGH);
delay(t);

// 6 = 0110
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,LOW);
delay(t);

// 7 = 0111
digitalWrite(pin2,LOW);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,HIGH);
delay(t);

// 8 = 1000
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
digitalWrite(pin5,LOW);
delay(t);

// 9 = 1001
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,LOW);
digitalWrite(pin5,HIGH);
delay(t);

// 10 = 1010
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,LOW);
delay(t);

// 11 = 1011
digitalWrite(pin2,HIGH);
digitalWrite(pin3,LOW);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,HIGH);
delay(t);

// 12 = 1100
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
digitalWrite(pin5,LOW);
delay(t);

// 13 = 1101
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,LOW);
digitalWrite(pin5,HIGH);
delay(t);

// 14 = 1110
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,LOW);
delay(t);

// 15 = 1111
digitalWrite(pin2,HIGH);
digitalWrite(pin3,HIGH);
digitalWrite(pin4,HIGH);
digitalWrite(pin5,HIGH);
delay(t);
}
