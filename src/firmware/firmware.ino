
#include "explorer_motori.h"
#include "explorer_bumper.h"
#include "explorer_light.h"
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

Luci luci = {
  pin_luceA : 0,
  pin_luceB : 0,
  pin_luceC : 0,
  pin_luceD : 0,
  pin_luceE : 0,
  lightA_value : 0,
  lightB_value : 0,
  lightC_value : 0,
  lightD_value : 0,
  lightE_value : 0,
  soglia_A : 0,
  soglia_B : 0,
  soglia_C : 0,
  soglia_D : 0,
  soglia_E : 0,
  detect_light : 0
};

void setup() {
}

void loop() {
}
