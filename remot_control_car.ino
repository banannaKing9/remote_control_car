
void setup() {
pinMode(11,OUTPUT);
pinMode(12,OUTPUT);
pinMode(1,OUTPUT);
pinMode(2,OUTPUT);
pinMode(3,OUTPUT);
pinMode(4,OUTPUT);
}

void loop(){
analogWrite(10,200);//RIGHT
analogWrite(11,200);//LEFT
digitalWrite(1,LOW);
digitalWrite(2,HIGH);
digitalWrite(3,HIGH);
digitalWrite(4,LOW);
delay(5000);
analogWrite(10,0);analogWrite(11,0);
delay(5000);
}

  
