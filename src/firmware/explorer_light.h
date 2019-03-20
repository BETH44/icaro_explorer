

#pragma once
#include <Arduino.h>

typedef struct{
    int pin_luce;
    int light_value;
    uint8_t soglia;
    uint8_t detect_light;
}Luci;

void Luci_init(Luci * l);
void Luci_handle(Luci * l);
int Luci_value(Luci * l);
int Luci_detectLight(Luci * l);