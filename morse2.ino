int pinled=13;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(pinled,OUTPUT);
}
void dot(){
  digitalWrite(pinled,HIGH);
  delay(250);
  digitalWrite(pinled,LOW);
  delay(250);  
}
void dash(){
  digitalWrite(pinled,HIGH);
  delay(1000);
  digitalWrite(pinled,LOW);
  delay(250); 
}
int temp;
void loop() {
  // put your main code here, to run repeatedly:
  temp=Serial.read();
  if(Serial.available()){
    pick(temp);  
  }
  delay(1200); 
}
void pick(int temp){
 if(temp=='A'){
    Serial.println("*- ");
    dot();
    dash();
  }
 if(temp=='B'){
    Serial.println("-*** ");
    dash();
    dot();
    dot();
    dot();
  }
 if(temp=='C'){
    Serial.println("-*-* ");
    dash();
    dot();
    dash();
    dot();
  }
 if(temp=='D'){
    Serial.println("-** ");
    dash();
    dot();
    dot();
  }
 if(temp=='E'){
    Serial.println("* ");
    dot();
  }
 if(temp=='F'){
    Serial.println("**-* ");
    dot();
    dot();
    dash();
    dot();
  }
 if(temp=='G'){
    Serial.println("--* ");
    dash();
    dash();
    dot();
  }
 if(temp=='H'){
    Serial.println("**** ");
    dot();
    dot();
    dot();
    dot();
  }
 if(temp=='I'){
    Serial.println("** ");
    dot();
    dot();
  }
 if(temp=='J'){
    Serial.println("*--- ");
    dot();
    dash();
    dash();
    dash();
  }
 if(temp=='K'){
    Serial.println("-*- ");
    dash();
    dot();
    dash();
  }
 if(temp=='L'){
    Serial.println("*-** ");
    dot();
    dash();
    dot();
    dot();
  }
 if(temp=='M'){
    Serial.println("-- ");
    dash();
    dash();
  }
 if(temp=='N'){
    Serial.println("-* ");
    dash();
    dot();
  }
 if(temp=='O'){
    Serial.println("--- ");
    dash();
    dash();
    dash();
  }
 if(temp=='P'){
    Serial.println("*--* ");
    dot();
    dash();
    dash();
    dot();
  }
 if(temp=='Q'){
    Serial.println("--*- ");
    dash();
    dash();
    dot();
    dash();
  }
 if(temp=='R'){
    Serial.println("*-* ");
    dot();
    dash();
    dot();
  }
 if(temp=='S'){
    Serial.println("*** ");
    dot();
    dot();
    dot();
  }
 if(temp=='T'){
    Serial.println("- ");
    dash();
  }
 if(temp=='U'){
    Serial.println("**- ");
    dot();
    dot();
    dash();
  }
 if(temp=='V'){
    Serial.println("***- ");
    dot();
    dot();
    dot();
    dash();
  }
 if(temp=='W'){
    Serial.println("*-- ");
    dot();
    dash();
    dash();
  }
 if(temp=='X'){
    Serial.println("-**- ");
    dash();
    dot();
    dot();
    dash();
  }
 if(temp=='Y'){
    Serial.println("-*-- ");
    dash();
    dot();
    dash();
    dash();
  }
 if(temp=='Z'){
    Serial.println("--** ");
    dash();
    dash();
    dot();
    dot();
  }
 if(temp==' '){
    Serial.println("/");
    delay(100);
  }
}
