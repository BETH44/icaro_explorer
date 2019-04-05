
#pragma once
#include <stdint.h>

struct Bumper {
    uint8_t pin_bumper;
    uint8_t detect_wall;
    uint8_t _misura;
    uint8_t inverti;


    Bumper(uint8_t pin);
    Bumper(uint8_t pin, uint8_t inv);
    void leggi(void);
    uint8_t misura(void);
    uint8_t stato(void);
};