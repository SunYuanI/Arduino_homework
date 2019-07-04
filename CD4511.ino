int pinA=1;
int pinB=2;
int pinC=3;
int pinD=4;
int pinLE=5;
void setup() {
  pinMode(pinA,OUTPUT);
  pinMode(pinB,OUTPUT);
  pinMode(pinC,OUTPUT);
  pinMode(pinD,OUTPUT);
  pinMode(pinLE,OUTPUT);
  Serial.begin(9600);
}
int number;
void loop() {
  if(Serial.available()){
      digitalWrite(pinLE,LOW);
      number=Serial.read();
      if(number>>0&1){
          digitalWrite(pinA,HIGH);
        }else{
          digtialWrite(pinA,LOW);
        }
      if(number>>1&1){
          digitalWrite(pinB,HIGH);
        }else{
          digitalWrite(pinB,LOW);
        }
       if(number>>2&1){
          digitalWrite(pinC,HIGH);
        }else{
          digitalWrite(pinC,LOW);
        }
       if(number>>3&1){
          digitalWrite(pinD,HIGH);
        }else{
          digitalWrite(pinD,LOW);
        }
       digitalWrite(pinLE,HIGH);
    }
}
