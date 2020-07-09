
#include <Servo.h>// include library for servo

Servo servo1;// intalizing servo motor1  
Servo servo2;// intalizing servo motor2 

long Postion1,Postion2;// intalizing type of input value     

void setup()
{
// follow block state the pins attach to which pins
 servo1.attach(6);
 servo2.attach(3);

Serial.begin(9600);// intalizing buadrate

// input angle or postion
Serial.println("Enter Position = servo1 degree, servo2 degree ");

// massege shown to user
Serial.print("Enter Position = ");

}

void loop() 
{ 
  
  while(Serial.available()>0)
  { 
    
  Postion1= Serial.parseInt();
     
  Serial.print(Postion1);  
  Serial.print(" degree , ");
  
  Postion2= Serial.parseInt(); 
    
  Serial.print(Postion2);  
  Serial.println(" degree ");
  
  Serial.print("Enter Position = ");
  
  }
  
  servo1.write(Postion1);
  servo2.write(Postion2);
  delay(1000);
}
