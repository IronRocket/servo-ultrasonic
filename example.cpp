#include "pico/stdlib.h"
#include "includes/Servo.cpp"
#include "includes/Ultrasonic.cpp"

//Servo Initilization

Servo serv;

serv.init(15);

while (true){
    serv.position(400);
    sleep_ms(500);
    serv.position(600);
    sleep_ms(500);
}


//Servo position ranges from 400-2400
