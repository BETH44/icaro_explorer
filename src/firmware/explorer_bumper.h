

#pragma once
#include <Arduino.h>


typedef struct{
    int pin_bumperA;
    int pin_bumperB;
    int BumperA_value;
    int BumperB_value;
    int detect_wall;
}Bumper;


void Bumper_init(Bumper * b);
void Bumper_handle(Bumper * b);
int Bumper_valueA(Bumper * b);
int Bumper_valueB(Bumper * b);
int Bumper_detectWall(Bumper * b);