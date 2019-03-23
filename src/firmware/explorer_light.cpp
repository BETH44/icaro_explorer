

#include "explorer_light.h"
#include "explorer_params.h"

/**
 * Questa funzione deve PER OGNI SENSORE cominucare alla piattaforma di arduino 
 * che sono variabili di INPUT
 * 
 * Successivamente impostare light_value = lettura ANALOGICA del pin_luce
 */
void Luci_init(Luci * l){
        pinMode(l->pin_luce, INPUT);
        l->light_value = analogRead(l->pin_luce);
}

/**
 * Questa funzione deve fare i seguenti controlli:
 * Se light_value > soglia impostare detect_light = 1
 */
void Luci_handle(Luci * l){
        if(l->light_value > l->soglia){
            l->detect_light = 1;
    }
}

/**
 * Deve restituire il valore di light_value
 */
int Luci_value(Luci * l){
    return l->light_value;
}

/**
 * Deve restituire il valore di detect_light
 */
int Luci_detectLight(Luci * l){
    return l->detect_light;
}