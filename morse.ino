#include <Morse.h>
Morse morse(13);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
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
    morse.dot();
    morse.dash();
  }
 if(temp=='B'){
    Serial.println("-*** ");
    morse.dash();
    morse.dot();
    morse.dot();
    morse.dot();
  }
 if(temp=='C'){
    Serial.println("-*-* ");
    morse.dash();
    morse.dot();
    morse.dash();
    morse.dot();
  }
 if(temp=='D'){
    Serial.println("-** ");
    morse.dash();
    morse.dot();
    morse.dot();
  }
 if(temp=='E'){
    Serial.println("* ");
    morse.dot();
  }
 if(temp=='F'){
    Serial.println("**-* ");
    morse.dot();
    morse.dot();
    morse.dash();
    morse.dot();
  }
 if(temp=='G'){
    Serial.println("--* ");
    morse.dash();
    morse.dash();
    morse.dot();
  }
 if(temp=='H'){
    Serial.println("**** ");
    morse.dot();
    morse.dot();
    morse.dot();
    morse.dot();
  }
 if(temp=='I'){
    Serial.println("** ");
    morse.dot();
    morse.dot();
  }
 if(temp=='J'){
    Serial.println("*--- ");
    morse.dot();
    morse.dash();
    morse.dash();
    morse.dash();
  }
 if(temp=='K'){
    Serial.println("-*- ");
    morse.dash();
    morse.dot();
    morse.dash();
  }
 if(temp=='L'){
    Serial.println("*-** ");
    morse.dot();
    morse.dash();
    morse.dot();
    morse.dot();
  }
 if(temp=='M'){
    Serial.println("-- ");
    morse.dash();
    morse.dash();
  }
 if(temp=='N'){
    Serial.println("-* ");
    morse.dash();
    morse.dot();
  }
 if(temp=='O'){
    Serial.println("--- ");
    morse.dash();
    morse.dash();
    morse.dash();
  }
 if(temp=='P'){
    Serial.println("*--* ");
    morse.dot();
    morse.dash();
    morse.dash();
    morse.dot();
  }
 if(temp=='Q'){
    Serial.println("--*- ");
    morse.dash();
    morse.dash();
    morse.dot();
    morse.dash();
  }
 if(temp=='R'){
    Serial.println("*-* ");
    morse.dot();
    morse.dash();
    morse.dot();
  }
 if(temp=='S'){
    Serial.println("*** ");
    morse.dot();
    morse.dot();
    morse.dot();
  }
 if(temp=='T'){
    Serial.println("- ");
    morse.dash();
  }
 if(temp=='U'){
    Serial.println("**- ");
    morse.dot();
    morse.dot();
    morse.dash();
  }
 if(temp=='V'){
    Serial.println("***- ");
    morse.dot();
    morse.dot();
    morse.dot();
    morse.dash();
  }
 if(temp=='W'){
    Serial.println("*-- ");
    morse.dot();
    morse.dash();
    morse.dash();
  }
 if(temp=='X'){
    Serial.println("-**- ");
    morse.dash();
    morse.dot();
    morse.dot();
    morse.dash();
  }
 if(temp=='Y'){
    Serial.println("-*-- ");
    morse.dash();
    morse.dot();
    morse.dash();
    morse.dash();
  }
 if(temp=='Z'){
    Serial.println("--** ");
    morse.dash();
    morse.dash();
    morse.dot();
    morse.dot();
  }
 if(temp==' '){
    Serial.println("/");
    delay(100);
  }
}
