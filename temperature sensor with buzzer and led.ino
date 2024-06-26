const int tempsensorpin = A0;
const int buzzerpin = 8;
const float temperaturethreshold=8.0;
const float tempepoint2=5.0;
const float tempepoint1=1.0;
int ledyellow =7;
int  ledorange =6;
int ledred =5;
  




void setup() {
  
 Serial.begin(9600);
 pinMode(buzzerpin,OUTPUT);
digitalWrite(buzzerpin,LOW);

}

void loop() {
  int sensorvalue = analogRead(tempsensorpin);
  float temperature = sensorvalue*(3.0/1023.0)*10;
  Serial.print("temperature:");
  Serial.print(temperature);
Serial.println("c");


  if(temperature>temperaturethreshold)
  {
    //digitalWrite(buzzerpin,HIGH);

     tone(buzzerpin, 2000);
     digitalWrite(ledred,HIGH);
    digitalWrite(ledyellow,LOW);
    digitalWrite(ledorange,LOW);
 
    }
    else if (temperature>tempepoint2 && temperature<temperaturethreshold)
   {
    
     digitalWrite(ledred,LOW);
      digitalWrite(ledorange,HIGH);
      digitalWrite(ledyellow,LOW);
      
    }

  else if (temperature>tempepoint1 && temperature<tempepoint2)
   {
    digitalWrite(ledorange,LOW);
     digitalWrite(ledorange,LOW);
     digitalWrite(ledyellow,HIGH);
    }
    
   else{
            
  noTone(buzzerpin);     
   digitalWrite(ledyellow,LOW);
   digitalWrite(ledorange,LOW);
   digitalWrite(ledred,LOW);
  
    }
    delay(1000);
}