

#pragma once

typedef struct {
    int pin_dirA;
    int pin_dirB;
    int pin_pwmA;
    int pin_pwmB;
    int pwm_A;
    int pwm_B;
}Motori;


void Motori_init(Motori * p);

void Motori_handle(Motori *p, int dir_A, int dir_B, int pwm);