#include "includes/Servo.cpp"

const int servo_pin = 15;


//Servo Initilization

Servo serv;

serv.init(servo_pin);

//Servo position ranges from 400-2400
while (true){
    serv.position(400);
    sleep_ms(500);
    serv.position(600);
    sleep_ms(500);
}
