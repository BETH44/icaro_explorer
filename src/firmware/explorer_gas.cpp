

#include "explorer_gas.h"

void Gas_init(Gas * g){
    pinMode(g->pin_gas, INPUT);
    g->Gas_value = analogRead(g->pin_gas);
}

void Gas_handle(Gas * g){
    if(g->Gas_value > g->Gas_soglia){
        g->detect_gas = 1;
    }
}

int Gas_value(Gas * g){
    return g->Gas_value;
}

int Gas_detectGas(Gas * g){
    return g->detect_gas;
}