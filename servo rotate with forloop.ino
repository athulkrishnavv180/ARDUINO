#include<Servo.h>

Servo myServo;
const int servopin =9;

int pos=0;



void setup()
{ myServo.attach(servopin);
}
  
  void loop()
  
  {
    for(pos=0;pos<=180;pos +=1)
        {
         myServo.write(pos);
         delay(15);
          }
  
    for(pos=180;pos>=0;pos -=1)
       {
         myServo.write(pos);
          delay(15);
        }
  
    
    
    }