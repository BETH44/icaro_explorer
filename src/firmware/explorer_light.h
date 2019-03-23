

#pragma once
#include <Arduino.h>

typedef struct{
    int pin_luce;  //pin luce
    int light_value; //valore letto luce
    int soglia_luce; //soglia sensore luce
    int detect_light;  //luce vista se ritorna = 1
}Luci;


/**
 * Questa funzione cominica alla piattaforma di arduino 
 * che sono variabili di INPUT i pin_luce
 * 
 * Successivamente imposta light_value = lettura ANALOGICA del pin_luce
 */
void Luci_init(Luci * l);

/**
 * Questa funzione fa i seguenti controlli:
 * Se light_value > soglia imposta detect_light = 1
 */
void Luci_handle(Luci * l);

/**
 * Restituisce il valore di light_value
 */
int Luci_value(Luci * l);

/**
 * Restituisce il valore di detect_light
 */
int Luci_detectLight(Luci * l);