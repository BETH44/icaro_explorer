

#include <Arduino.h>
#include "__icaro_bumper.h"

Bumper::Bumper(uint8_t pin){
    pin_misura=pin;
    detect_wall=0;
    inverti=0;
    _misura=0;
}

Bumper::Bumper(uint8_t pin, uint8_t inv){
    pin_misura=pin;
    detect_wall=0;
    inverti=inv;
    _misura=0;
}

void Bumper::leggi(void){
    _misura=digitalRead(pin_misura);
    if(_misura == HIGH){
        detect_wall = 1;
    }
}

uint8_t Bumper::misura(){
    return detect_wall;
}

uint8_t Bumper::stato(){
    if(inverti){
        return !detect_wall;
        return detect_wall;
    }
}