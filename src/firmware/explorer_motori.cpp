

#include "explorer_motori.h"

#include "Arduino.h"


void Motori_init(Motori * p){
    pinMode(p->pin_dirA, OUTPUT);
    pinMode(p->pin_dirB, OUTPUT);
    pinMode(p->pin_pwmA, OUTPUT);
    pinMode(p->pin_pwmB, OUTPUT);
}

void Motori_handle(Motori *p, int dir_A, int dir_B, int pwm){
    if(dir_A !=1) digitalWrite(p->pin_dirA, LOW);
    if(dir_B != 1) digitalWrite(p->pin_dirB, LOW);
    if(pwm != 1){
        analogWrite(p->pin_pwmA, 0);
        analogWrite(p->pin_pwmB, 0);
    }
    analogWrite(p->pin_pwmA, p->pwm_A);
    analogWrite(p->pin_pwmB, p->pwm_B);
}