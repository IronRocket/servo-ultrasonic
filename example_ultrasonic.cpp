#include "includes/Ultrasonic.cpp"
const int trigger_pin = 0;
const int echo_pin = 1;


//Ultrasonic Initilization
Ultrasonic sensor;

sensor.init(trigger_pin,echo_pin);


while (true){
    printf("%d in",sensor.getdistance());
}