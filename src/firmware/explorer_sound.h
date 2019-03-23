

#pragma once
#include <Arduino.h>


typedef struct{
    int pin_suono;  //pin sensore di suono 
    int soglia_suono; //soglia sensore di suono 
    int suono_value;  //valore letto sensore di suono
    int detect_sound;  //suono visto = 1, altrimenti = 0
}Suono;

/**
 * Questa funzione va a comunicare alla piattaforma di arduino che pin_suono 
 * è una variabile di INPUT
 * 
 * Successivamente imposta suono_value = lettura ANALOGICA di pin_suono
 */
void Suono_init(Suono * s);

/**
 * Questa funzione esegue i seguenti controlli:
 * Se suono_value > soglia_suono allora detect_sound = 1, altrimenti = 0
 */
void Suono_handle(Suono * s);

/**
 * Restituisce il valore di detect_sound
 */
int Suono_getDetectSound(Suono * s);