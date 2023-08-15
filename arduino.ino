#include<Stepper.h>
const int spr = 4;
Stepper stepper (spr,8,9,10,11);
const int button = 13;
void setup(){
    stepper.setSpeed(20);
    pinMode(button,INPUT);
    pinMode(A0,INPUT);
}
void loop(){
    int speed = analogRead(A0)/10;
    stepper.setSpeed(speed);
    if(digitalRead(button)==1){
        stepper.step(1);
        delay(100);
    }
    else{
        stepper.step(-1);
        delay(100);
    }
}
