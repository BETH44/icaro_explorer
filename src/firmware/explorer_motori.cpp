

#include "explorer_motori.h"

#include "Arduino.h"


void Motori_init(Motori * p){
    pinMode(p->pin_dirA, OUTPUT);
    pinMode(p->pin_dirB, OUTPUT);
    pinMode(p->pin_pwmA, OUTPUT);
    pinMode(p->pin_pwmB, OUTPUT);
}

void Motori_setSpeed(Motori * p, int dir_a, int dir_b){
    p->dir_a = dir_a;
    p->dir_b = dir_b;
    if(p->dir_a == 1){
        digitalWrite(p->pin_dirA, HIGH);
    }
    else{
        digitalWrite(p->pin_dirA, LOW);
    }
    if(p->dir_b == 1){
        digitalWrite(p->pin_dirB, HIGH);
    }
    else{
        digitalWrite(p->pin_dirB, LOW);
    }
}


void Motori_handle(Motori *p){
    digitalWrite(p->pin_dirA, p->dir_a);
    digitalWrite(p->pin_dirB, p->dir_b);
    analogWrite(p->pin_pwmA, p->pwm_A);
    analogWrite(p->pin_pwmB, p->pwm_B);
}