

#pragma once
#include <Arduino.h>


typedef struct{
    int pin_dirA;
    int pin_dirB;
    int pin_pwmA;
    int pin_pwmB;
    uint8_t pwm_A;
    uint8_t pwm_B;
    int dir_a;
    int dir_b;
}Motori;

/**
 * Questa funzione comunica alla piattaforma di Arduino che 
 * i pin dei motori sono variabili di OUTPUT
 */
void Motori_init(Motori * p);

/**
 * Questa funzione va ad impostare i valori di direzione per ogni motore 
 * Se dir_a = 1 la direzione è HIGH, altrimenti LOW
 * Se dir_b = 1 la direzione è HIGH, altrimenti LOW
 */
void Motori_setSpeed(Motori * p, int dir_a, int dir_b);

/**
 * Comunica alla piattaforma di Arduino i valori di velocità e direzione per 
 * ogni motore
 */
void Motori_handle(Motori * p);
