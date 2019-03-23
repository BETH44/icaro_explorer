

#pragma once
#include <Arduino.h>


typedef struct{
    int pin_bumperA;  //pin Bumper A
    int pin_bumperB;  //pin Bumper B
    int BumperA_value; //valore Bumper A
    int BumperB_value; //valore Bumper B
    int detect_wall;  //valore muro trovao, se restituisce il valore = 1 ha trovato un muro
}Bumper;


void Bumper_init(Bumper * b);
void Bumper_handle(Bumper * b);
int Bumper_valueA(Bumper * b);
int Bumper_valueB(Bumper * b);
int Bumper_detectWall(Bumper * b);