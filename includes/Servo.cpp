#include "pico/stdlib.h"
#include "hardware/pwm.h"

class Servo{
    public:
        unsigned short int servo_pin;
        int frequency;
        int duty;

        void init(int servo_pin_){
            this->servo_pin = servo_pin_;
            this->frequency = 39062;
            gpio_set_function(servo_pin,GPIO_FUNC_PWM);
            pwm_config config = pwm_get_default_config();
            pwm_config_set_clkdiv(&config, 64.f);
            pwm_config_set_wrap(&config, frequency);


            pwm_init(pwm_gpio_to_slice_num(servo_pin),&config,true);


            position(400);

        }


        void position(int duty_){
            this->duty = duty_;
            pwm_set_gpio_level(servo_pin,(duty/20000.f)*frequency);
        }

};