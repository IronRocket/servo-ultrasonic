# Purpose

This library consists of a two libraries that manages servos and another that manages ultrasonic sensors(HC-SR04).

# Example using Servo library

```cpp
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
```

# Example using Ultrasonic library

```cpp
#include "includes/Ultrasonic.cpp"
const int trigger_pin = 0;
const int echo_pin = 1;


//Ultrasonic Initilization
Ultrasonic sensor;

sensor.init(trigger_pin,echo_pin);


while (true){
    //printing the distance in inches
    printf("%d in",sensor.getdistance());
}

```

## License

[MIT](https://choosealicense.com/licenses/mit/)
