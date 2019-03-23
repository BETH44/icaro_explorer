
#pragma once 
#include <Arduino.h>


typedef struct{
    int pin_gas; //pin gas
    int Gas_value;  //valore gas letto
    int Gas_soglia; //soglia gas
    int detect_gas; //valore rilevato Gas
}Gas;


/**
 * Questa funzione omunica alla piattaforma di Arduino 
 * se pin_gas è un pin di INPUT o OUTPUT
 * 
 * Successivamente imposta Gas_value = lettura ANALOGICA del pin_gas
 */
void Gas_init(Gas * g);

/**
 * Questa funzione effettua i seguenti controlli:
 * Se Gas_value > Gas_soglia impostare detect_gas = 1, altrimenti = 0
 */
void Gas_handle(Gas * g);

/**
 * Restituisce il valore di Gas_value
 */
int Gas_value(Gas * g);

/**
 * Restituisce il valore di detect_gas
 */
int Gas_detectGas(Gas * g);