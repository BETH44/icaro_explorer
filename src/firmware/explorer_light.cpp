

#include "explorer_light.h"
#include "explorer_params.h"

/**
 * Questa funzione cominica alla piattaforma di arduino 
 * che sono variabili di INPUT i pin_luce
 * 
 * Successivamente imposta light_value = lettura ANALOGICA del pin_luce
 */
void Luci_init(Luci * l){
        pinMode(l->pin_luce, INPUT);
        l->light_value = analogRead(l->pin_luce);
}

/**
 * Questa funzione fa i seguenti controlli:
 * Se light_value > soglia imposta detect_light = 1
 */
void Luci_handle(Luci * l){
        if(l->light_value > l->soglia){
            l->detect_light = 1;
    }
}

/**
 * Restituisce il valore di light_value
 */
int Luci_value(Luci * l){
    return l->light_value;
}

/**
 * Restituisce il valore di detect_light
 */
int Luci_detectLight(Luci * l){
    return l->detect_light;
}