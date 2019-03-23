

#pragma once
#include <Arduino.h>


typedef struct{
    int pin_bumperA;  //pin Bumper A
    int pin_bumperB;  //pin Bumper B
    int BumperA_value; //valore Bumper A
    int BumperB_value; //valore Bumper B
    int detect_wall;  //valore muro trovato, se restituisce il valore = 1 ha trovato un muro
}Bumper;

/**
 * Inizializza i pin accedendo alla struttura
 * per comunicare alla piattaforma di Arduino se 
 * si tratta di variabili di INPUT o OUTPUT
 * 
 * Successivamente imposta BumperA_value = lettura DIGITALE del pin_bumperA...
 * Ripete il passaggio per il BumperB
 * */
void Bumper_init(Bumper * b);

/**
 * La seguente funzione si occupa di fare questi controlli:
 * se BumperA_value = 0 -> detect_wall = 1, altrimenti detect_wall = 0
 * se BumperB_value = 0 -> detect_wall = 1, altrimenti detect_wall = 0
 * */
void Bumper_handle(Bumper * b);

/**
 * Restituisce il valore di BumperA_value
 */
int Bumper_valueA(Bumper * b);

/**
 * Restituisce il valore di BumperB_value
 */
int Bumper_valueB(Bumper * b);

/**
 * Restituisce il valore di detect_wall
 */
int Bumper_detectWall(Bumper * b);