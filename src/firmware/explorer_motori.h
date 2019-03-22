

#pragma once
#include <Arduino.h>


typedef struct {
    int pin_dirA;
    int pin_dirB;
    int pin_pwmA;
    int pin_pwmB;
    uint8_t pwm_A;
    uint8_t pwm_B;
    int dir_a;
    int dir_b;
}Motori;


void Motori_init(Motori * p);

void Motori_setSpeed(Motori * p, int dir_a, int dir_b);

void Motori_handle(Motori * p);
