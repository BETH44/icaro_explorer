

#include "explorer_globals.h"
#include <Arduino.h>


Motori motori = {
  pin_dirA : 12,
  pin_dirB : 13,
  pin_pwmA : 3,
  pin_pwmB : 11, 
  pwm_A : 255,
  pwm_B : 255,
  dir_a : 0, 
  dir_b : 0
};

Bumper bumper = {
  pin_bumperA : 7,
  pin_bumperB : 8,
  BumperA_value : 0,
  BumperB_value : 0, 
  detect_wall : 0
};

Luci luci[NUM_SENSOR_LIGHT] = {
  {
    pin_luce: 0,
    light_value : 0,
    soglia_luce : 0,
    detect_light : 0,
  },
  {
    pin_luce: 0,
    light_value : 0,
    soglia_luce : 0,
    detect_light : 0,
  },
  {
    pin_luce: 0,
    light_value : 0,
    soglia_luce : 0,
    detect_light : 0,
  },
  {
    pin_luce: 0,
    light_value : 0,
    soglia_luce : 0,
    detect_light : 0,
  },
  {
    pin_luce: 0,
    light_value : 0,
    soglia_luce : 0,
    detect_light : 0
  }
};

Gas gas = {
    pin_gas : 0,
    Gas_value : 0,
    Gas_soglia : 0,
    detect_gas : 0
};

Suono suono = {
  pin_suono : 0,
  soglia_suono : 0,
  suono_value : 0,
  detect_sound : 0
};
