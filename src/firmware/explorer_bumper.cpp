

#include "explorer_bumper.h"


void Bumper_init(Bumper * b){
    pinMode(b->pin_bumperA, OUTPUT);
    pinMode(b->pin_bumperB, OUTPUT);

    b->BumperA_value = digitalRead(b->pin_bumperA);
    b->BumperB_value = digitalRead(b->pin_bumperB);
}

void Bumper_handle(Bumper * b){
    if(b->BumperA_value == 1){
        b->detect_wall = 1;
    }
    else {
        b->detect_wall = 0;
    }
    if(b->BumperB_value == 1){
        b->detect_wall = 1;
    }
    else {
        b->detect_wall = 0;
    }
}


int Bumper_valueA(Bumper * b){
    return b->BumperA_value;
}

int Bumper_valueB(Bumper * b){
    return b->BumperB_value;
}