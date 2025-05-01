void setup() {

   Serial.begin(9600);
   pinMode(A2,OUTPUT);
 pinMode(A3,OUTPUT);
 pinMode(1,OUTPUT);
 pinMode(12,OUTPUT);
 pinMode(13,OUTPUT);
 pinMode(4,OUTPUT);   //motor2
   pinMode(A4, OUTPUT);   //enable 1
   pinMode(A5, OUTPUT);   //enable 2
   pinMode(6, OUTPUT);   //motor3
   pinMode(7, OUTPUT);   //motor3
   pinMode(8, OUTPUT);   //motor4
   pinMode(9, OUTPUT);   //motor4
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
   analogWrite(A2, speed);  //RIGHT
   analogWrite(A3, speed);  //LEFT
   digitalWrite(1, HIGH);
   digitalWrite(12, LOW );
   digitalWrite(13, HIGH);
   digitalWrite(4, LOW);
   //delay(5000);
   //analogWrite(10,0);analogWrite(11,0);
   //back motors
   analogWrite(A4, speed);  //RIGHT
   analogWrite(A5, speed);  //LEFT
   digitalWrite(6, LOW);
   digitalWrite(7, HIGH);
   digitalWrite(8, LOW);
   digitalWrite(9, HIGH);
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
 

*/
}

