
int buttonPin_1 = 3;   
int ledPin_1 =  11;    

int buttonPin_2 = 4;
int ledPin_2 =  10;

int pinRead_1;
int pinRead_2;

int range;

void setup() {
  pinMode(ledPin_1, OUTPUT);      
  pinMode(buttonPin_1, INPUT);  
  pinMode(ledPin_2, OUTPUT);      
  pinMode(buttonPin_2, INPUT);
}

void loop() {

  pinRead_1 = digitalRead(buttonPin_1);
  pinRead_2 = digitalRead(buttonPin_2);
  
  if(pinRead_1==0&&pinRead_2==1){
    range=1;
  }
  
  if(pinRead_1==1&&pinRead_2==0){
    range=0;
  }
  
  switch (range) {
  case 0:    
    digitalWrite(ledPin_1,LOW);
    digitalWrite(ledPin_2,HIGH);
    break;
  case 1:    
    digitalWrite(ledPin_1,HIGH);
    digitalWrite(ledPin_2,LOW);
    break;
 
  } 

}




