
#include<Servo.h>
Servo myservo;
#include<Adafruit_PWMServoDriver.h>
#include<Wire.h>

Adafruit_PWMServoDriver PWM = Adafruit_PWMServoDriver();

//servo 1 2                                     ---------------
//servo 3 4                     ------7--------8|             |1-------2-------                                                  
//servo 5 6                                     |             |   
//servo 7 8                     ------5--------6|             |11-------12-------  
//servo 9 10                                    |             |
//servo 11 12                  ------9--------10|             |3-------4-------
//                                              ---------------

//servo 1 2 //Leg 1
//servo 3 4 //leg 3
//servo 5 6 //leg 5
//servo 7 8 //leg 4
//servo 9 10 //leg6
//servo 11 12 //leg2


//servo 1 -> 0
//servo 2 -> 1
//servo 3 -> 2
//servo 4 -> 3
//servo 5 -> 4
//servo 6 -> 5
//servo 7 -> 6
//servo 8 -> 7
//servo 9 -> 8
//servo 10 -> 9
//servo 11 -> 10
//servo 12 -> 11



void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
PWM.begin();
PWM.setPWMFreq(60);
PWM.setPWM(0, 0, 150);
PWM.setPWM(1, 0, 150);
}

void loop() {
// servo 2 4 5 move from ground 
PWM.setPWM(1, 0, 150); //servo 2
PWM.setPWM(3, 0, 150); //servo 4
PWM.setPWM(4, 0, 150); //servo 5

delay(1000);

// servo 1 3 6 move forward 
PWM.setPWM(0, 150, 150); //servo 1
PWM.setPWM(2, 150, 150); //servo 3
PWM.setPWM(5, 150, 150); //servo 6

delay(1000);

// servo 2 4 5 return to the ground 
PWM.setPWM(1, 0, -150); //servo 2
PWM.setPWM(3, 0, -150); //servo 4
PWM.setPWM(4, 0, -150); //servo 5

delay(1000);

// servo 7 9 12 move from ground 
PWM.setPWM(6, 0, 150); //servo 7
PWM.setPWM(8, 0, 150); //servo 9
PWM.setPWM(11, 0, 150); //servo 12

delay(1000);

// servo 8 10 11 move forward 
PWM.setPWM(7, 150, 150); //servo 8
PWM.setPWM(9, 150, 150); //servo 10
PWM.setPWM(10, 150, 150); //servo 11

delay(1000);

// servo 7 9 12 return to the ground 
PWM.setPWM(6, 0, -150); //servo 7
PWM.setPWM(8, 0, -150); //servo 9
PWM.setPWM(11, 0, -150); //servo 12




}
