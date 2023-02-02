#include "pico/stdlib.h"
#include "hardware/pwm.h"

class Ultrasonic{
    public:
        unsigned int trigger;
        unsigned int echo;

        void init(const int tri, const int ech){
            this->trigger = tri;
            this->echo = ech;
            gpio_init(trigger);
            gpio_init(echo);
            gpio_set_dir(trigger, GPIO_OUT);
            gpio_set_dir(echo, GPIO_IN);


        }
        float getdistance(){
            float signalon = 0;

            gpio_put(trigger,true);
            sleep_us(10);
            gpio_put(trigger,false);

            while (gpio_get(echo) == 0){
            }
            while (gpio_get(echo) == 1){
                signalon++;
                sleep_us(1);
            }

            return signalon/29/4;

        }

};