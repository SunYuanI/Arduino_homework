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
  delay(500); 
}
void pick(int temp){
 if(temp=='A'){
    Serial.println("*- ");
  }
 if(temp=='B'){
    Serial.println("-*** ");
  }
 if(temp=='C'){
    Serial.println("-*-* ");
  }
 if(temp=='D'){
    Serial.println("-** ");
  }
 if(temp=='E'){
    Serial.println("* ");
  }
 if(temp=='F'){
    Serial.println("**-* ");
  }
 if(temp=='G'){
    Serial.println("--* ");
  }
 if(temp=='H'){
    Serial.println("**** ");
  }
 if(temp=='I'){
    Serial.println("** ");
  }
 if(temp=='J'){
    Serial.println("*--- ");
  }
 if(temp=='K'){
    Serial.println("-*- ");
  }
 if(temp=='L'){
    Serial.println("*-** ");
  }
 if(temp=='M'){
    Serial.println("-- ");
  }
 if(temp=='N'){
    Serial.println("-* ");
  }
 if(temp=='O'){
    Serial.println("--- ");
  }
 if(temp=='P'){
    Serial.println("*--* ");
  }
 if(temp=='Q'){
    Serial.println("--*- ");
  }
 if(temp=='R'){
    Serial.println("*-* ");
  }
 if(temp=='S'){
    Serial.println("*** ");
  }
 if(temp=='T'){
    Serial.println("- ");
  }
 if(temp=='U'){
    Serial.println("**- ");
  }
 if(temp=='V'){
    Serial.println("***- ");
  }
 if(temp=='W'){
    Serial.println("*-- ");
  }
 if(temp=='X'){
    Serial.println("-**- ");
  }
 if(temp=='Y'){
    Serial.println("-*-- ");
  }
 if(temp=='Z'){
    Serial.println("--** ");
  }
 if(temp==' '){
    Serial.println("/");
  }
}
