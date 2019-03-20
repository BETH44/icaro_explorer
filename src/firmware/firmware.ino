
#include "explorer_motori.h"
#include "explorer_bumper.h"
#include "explorer_light.h"
#include "explorer_params.h"
#include <Arduino.h>

Motori motori = {
  pin_dirA : 12,
  pin_dirB : 13,
  pin_pwmA : 3,
  pin_pwmB : 11, 
  pwm_A : 255,
  pwm_B : 255
};

Bumper bumper = {
  pin_bumperA : 0,
  pin_bumperB : 0,
  BumperA_value : 0,
  BumperB_value : 0, 
  detect_wall : 0
};

Luci luci[NUM_SENSOR_LIGHT] = {
  {
    pin_luce: 0,
    light_value : 0,
    soglia : 0,
    detect_light : 0,
  },
  {
    pin_luce: 0,
    light_value : 0,
    soglia : 0,
    detect_light : 0,
  },
  {
    pin_luce: 0,
    light_value : 0,
    soglia : 0,
    detect_light : 0,
  },
  {
    pin_luce: 0,
    light_value : 0,
    soglia : 0,
    detect_light : 0,
  },
  {
    pin_luce: 0,
    light_value : 0,
    soglia : 0,
    detect_light : 0
  }
};

void setup() {
}

void loop() {
}
