

#include "explorer_light.h"


void Luci_init(Luci * l){
    pinMode(l->pin_luceA, INPUT);
    pinMode(l->pin_luceB, INPUT);
    pinMode(l->pin_luceC, INPUT);
    pinMode(l->pin_luceD, INPUT);
    pinMode(l->pin_luceE, INPUT);

    l->lightA_value = analogRead(l->pin_luceA);
    l->lightB_value = analogRead(l->pin_luceB);
    l->lightC_value = analogRead(l->pin_luceC);
    l->lightD_value = analogRead(l->pin_luceD);
    l->lightE_value = analogRead(l->pin_luceE);
}

void Luci_handle(Luci * l){
    if(l->lightA_value > l->soglia_A){
        l->detect_light = 1;
    }
    else {
        l->detect_light = 0;
    }
    if(l->lightB_value > l->soglia_B){
        l->detect_light = 1;
    }
    else {
        l->detect_light = 0;
    }
    if(l->lightC_value > l->soglia_C){
        l->detect_light = 1;
    }
    else {
        l->detect_light = 0;
    }
    if(l->lightD_value > l->soglia_D){
        l->detect_light = 1;
    }
    else {
        l->detect_light = 0;
    }
    if(l->lightD_value > l->soglia_D){
        l->detect_light = 1;
    }
    else {
        l->detect_light = 0;
    }
}

int Luci_sogliaA(Luci * l){
    return l->lightA_value;
}

int Luci_sogliaB(Luci * l){
    return l->lightB_value;
}

int Luci_sogliaC(Luci * l){
    return l->lightC_value;
}

int Luci_sogliaD(Luci * l){
    return l->lightD_value;
}

int Luci_sogliaE(Luci * l){
    return l->lightE_value;
}