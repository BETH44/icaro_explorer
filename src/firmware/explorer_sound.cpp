


#include "explorer_sound.h"



void Suono_init(Suono * s){
    pinMode(s->pin_suono, INPUT);

    s->suono_value = analogRead(s->pin_suono);
}

void Suono_handle(Suono * s){
    if(s->suono_value > s->soglia_suono){
        Serial.println("ho il suono");
        s->detect_sound = 1;
    }
    else{
        s->detect_sound = 0;
    }
}

int Suono_getDetectSound(Suono * s){
    return s->detect_sound;
}