

#include "explorer_light.h"
#include "explorer_params.h"

void Luci_init(Luci * l){
    for(int i=0;i<NUM_SENSOR_LIGHT;++i){
        pinMode(l->pin_luce, INPUT);
        l->light_value = analogRead(l->pin_luce);
    }
}

void Luci_handle(Luci * l){
    for(int i=0;i<NUM_SENSOR_LIGHT;++i){
        if(l->light_value > l->soglia){
            l->detect_light = 1;
        }
    }
}

int Luci_value(Luci * l){
    return l->light_value;
}

int Luci_detectLight(Luci * l){
    return l->detect_light;
}