const int tempsensorpin = A0;
const int buzzerpin = 8;
const float temperaturethreshold=5.0;

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
 
    }
   
  
   else{
            
  noTone(buzzerpin);     
  
    }
    delay(1000);
}