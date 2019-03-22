

#pragma once
#include <Arduino.h>


typedef struct{
    int pin_suono;
    int soglia_suono;
    int suono_value;
    int detect_sound;
}Suono;

void Suono_init(Suono * s);

void Suono_handle(Suono * s);

int Suono_getDetectSound(Suono * s);