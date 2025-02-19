
void setup() {
  Serial.begin(9600);
  pinMode(11, OUTPUT);  //enable 1
  pinMode(12, OUTPUT);  //enable 2
  pinMode(1, OUTPUT);   //motor1
  pinMode(2, OUTPUT);   //motor1
  pinMode(3, OUTPUT);   //motor2
  pinMode(4, OUTPUT);   //motor2
  pinMode(6, OUTPUT);   //enable 1
  pinMode(9, OUTPUT);   //enable 2
  pinMode(0, OUTPUT);   //motor3
  pinMode(5, OUTPUT);   //motor3
  pinMode(7, OUTPUT);   //motor4
  pinMode(8, OUTPUT);   //motor4
}

int getSpeed() {
  int speed = analogRead(A1);
  speed = speed >> 2;
  return speed;
}
void loop() {
  //code for changeing speed
  int speed = getSpeed();
 
  //front motors
  analogWrite(10, speed);  //RIGHT
  analogWrite(11, speed);  //LEFT
  digitalWrite(1, HIGH);
  digitalWrite(2, LOW);
  digitalWrite(3, HIGH);
  digitalWrite(4, LOW);
  //delay(5000);
  //analogWrite(10,0);analogWrite(11,0);
  //back motors
  analogWrite(6, speed);  //RIGHT
  analogWrite(9, speed);  //LEFT
  digitalWrite(0, LOW);
  digitalWrite(5, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, HIGH);
  //delay(5000);
  //analogWrite(6,0);analogWrite(9,0);
  /*
  delay(5000);
  analogWrite(6, 0);
  analogWrite(9, 0);
  analogWrite(10, 0);  //RIGHT
  analogWrite(11, 0);  //LEFT
  delay(5000);

*/
}

