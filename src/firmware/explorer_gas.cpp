

#include "explorer_gas.h"

/**
 * Questa funzione deve comunicare alla piattaforma di Arduino 
 * se pin_gas è un pin di INPUT o OUTPUT
 * 
 * Successivamente deve impostare Gas_value = lettura ANALOGICA del pin_gas
 */
void Gas_init(Gas * g){
    pinMode(g->pin_gas, INPUT);
    g->Gas_value = analogRead(g->pin_gas);
}


/**
 * Questa funzione deve effettuare i seguenti controlli:
 * Se Gas_value > Gas_soglia impostare detect_gas = 1, altrimenti = 0
 */
void Gas_handle(Gas * g){
    if(g->Gas_value > g->Gas_soglia){
        g->detect_gas = 1;
    }
    else{
        g->detect_gas = 0;
    }
}

/**
 * Deve restituire il valore di Gas_value
 */
int Gas_value(Gas * g){
    return g->Gas_value;
}

/**
 * Deve restituire il valore di detect_gas
 */
int Gas_detectGas(Gas * g){
    return g->detect_gas;
}