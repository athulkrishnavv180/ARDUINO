int Buttonpin1 =13;
int Buttonpin2=12;
int Buttonpin3 =11;
int Buttonpin4 =10;


int Buttonstate1=0;
int Buttonstate2=0;
int Buttonstate3=0;
int Buttonstate4=0;
int ledg=5;
int ledr=8;


void setup() 
{
pinMode(ledr,OUTPUT); 
pinMode(ledg,OUTPUT); 

pinMode (Buttonpin1,INPUT);
pinMode (Buttonpin2,INPUT);
pinMode (Buttonpin3,INPUT);
pinMode (Buttonpin4,INPUT);
}

void loop() {
 Buttonstate1 = digitalRead(Buttonpin1);
 Buttonstate2 = digitalRead(Buttonpin2);
 Buttonstate3 = digitalRead(Buttonpin3);
 Buttonstate4 = digitalRead(Buttonpin4);
 
 if(Buttonstate1==HIGH&&Buttonstate3==HIGH&&Buttonstate2==LOW&&Buttonstate4==LOW)
 {digitalWrite(ledg,HIGH);
  digitalWrite(ledr,LOW);
  }
  else
  {digitalWrite(ledr,HIGH);
  digitalWrite(ledg,LOW);
  }
 

}