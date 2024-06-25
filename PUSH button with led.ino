
int Buttonpin =2;
int Buttonstate=0;
int led=5;


void setup() 
{
pinMode(led,OUTPUT); 
pinMode (Buttonpin,INPUT);
}

void loop() {
 Buttonstate = digitalRead(Buttonpin);
 if(Buttonstate==HIGH)
 {digitalWrite(led,HIGH);
  }
  else
  {digitalWrite(led,LOW);
  }
 

}






















































