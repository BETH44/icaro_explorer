
#pragma once 
#include <Arduino.h>


typedef struct{
    int pin_gas;
    int Gas_value;
    int Gas_soglia;
    int detect_gas;
}Gas;

void Gas_init(Gas * g);
void Gas_handle(Gas * g);
int Gas_value(Gas * g);
int Gas_detectGas(Gas * g);