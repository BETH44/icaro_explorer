
#pragma once 
#include <Arduino.h>


typedef struct{
    int pin_gas; //pin gas
    int Gas_value;  //valore gas letto
    int Gas_soglia; //soglia gas
    int detect_gas; //valore rilevato Gas
}Gas;

void Gas_init(Gas * g);
void Gas_handle(Gas * g);
int Gas_value(Gas * g);
int Gas_detectGas(Gas * g);