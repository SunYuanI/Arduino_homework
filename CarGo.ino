int pinA1=5;
int pinA2=6;
int pinB1=10;
int pinB2=11;
int pinledl=7;
int pinledr=8;
int pinledb=9;
void setup() {
  pinMode(pinA1,OUTPUT);
  pinMode(pinA2,OUTPUT);
  pinMode(pinB1,OUTPUT);
  pinMode(pinB2,OUTPUT);
  pinMode(pinledl,OUTPUT);
  pinMode(pinledr,OUTPUT);
  pinMode(pinledb,OUTPUT);
  Serial.begin(9600);
}
int dir;
void loop() {
  if(Serial.available()){
      judge();
    }
}
void judge(){
    dir=Serial.read();
    if(dir=='f'){
        forward();
      }
    if(dir=='b'){
        backward();
      }
    if(dir=='l'){
        left();
      }
    if(dir=='r'){
        right();
      }   
    if(dir=='c'){
        cease();
      }
}
void forward(){
  digitalWrite(pinA1,HIGH);
  digitalWrite(pinA2,LOW);
  digitalWrite(pinB1,HIGH);
  digitalWrite(pinB2,LOW);
}
void backward(){
  digitalWrite(pinA1,LOW);
  digitalWrite(pinA2,HIGH);
  digitalWrite(pinB1,LOW);
  digitalWrite(pinB2,HIGH);
  while(!Serial.available()){
      digitalWrite(pinledb,HIGH);
    }
}
void left(){
  digitalWrite(pinA1,HIGH);
  digitalWrite(pinA2,LOW);
  digitalWrite(pinB1,LOW);
  digitalWrite(pinB2,HIGH);
  while(!Serial.available()){
      digitalWrite(pinledl,HIGH);
      delay(100);
      digitalWrite(pinledl,LOW);
      delay(100);
    } 
}
void right(){
  digitalWrite(pinA1,LOW);
  digitalWrite(pinA2,HIGH);
  digitalWrite(pinB1,HIGH);
  digitalWrite(pinB2,LOW);
  while(!Serial.available()){
      digitalWrite(pinledr,HIGH);
      delay(100);
      digitalWrite(pinledr,LOW);
      delay(100);
    }  
}
void cease(){
  digitalWrite(pinA1,LOW);
  digitalWrite(pinA2,LOW);
  digitalWrite(pinB1,LOW);
  digitalWrite(pinB2,LOW);  
}
