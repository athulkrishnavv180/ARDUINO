#include<Servo.h>

Servo myServo;
const int servopin =9;



void setup()
{ myServo.attach(servopin);
  
  }



  
  void loop()
  
  {
    myServo.write(0);
    delay(1000);

    myServo.write(90);
    delay(1000);

    myServo.write(180);
    delay(1000);

    
    
    }