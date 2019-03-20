

#pragma once
#include <Arduino.h>

typedef struct{
    int pin_luceA;
    int pin_luceB;
    int pin_luceC;
    int pin_luceD;
    int pin_luceE;
    int lightA_value;
    int lightB_value;
    int lightC_value;
    int lightD_value;
    int lightE_value;
    int soglia_A;
    int soglia_B;
    int soglia_C;
    int soglia_D;
    int soglia_E;
    int detect_light;
}Luci;

void Luci_init(Luci * l);
void Luci_handle(Luci * l);
int Luci_sogliaA(Luci * l);
int Luci_sogliaB(Luci * l);
int Luci_sogliaC(Luci * l);
int Luci_sogliaD(Luci * l);
int Luci_sogliaE(Luci * l);