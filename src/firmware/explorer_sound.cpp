


#include "explorer_sound.h"


/**
 * Questa funzione va a comunicare alla piattaforma di arduino che pin_suono 
 * è una variabile di INPUT
 * 
 * Successivamente imposta suono_value = lettura ANALOGICA di pin_suono
 */
void Suono_init(Suono * s){
    pinMode(s->pin_suono, INPUT);

    s->suono_value = analogRead(s->pin_suono);
}

/**
 * Questa funzione esegue i seguenti controlli:
 * Se suono_value > soglia_suono allora detect_sound = 1, altrimenti = 0
 */
void Suono_handle(Suono * s){
    if(s->suono_value > s->soglia_suono){
        Serial.println("ho il suono");
        s->detect_sound = 1;
    }
    else{
        s->detect_sound = 0;
    }
}

/**
 * Restituisce il valore di detect_sound
 */
int Suono_getDetectSound(Suono * s){
    return s->detect_sound;
}