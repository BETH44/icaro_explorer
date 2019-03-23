

#include "explorer_bumper.h"

/**
 * Inizializza i pin accedendo alla struttura
 * per comunicare alla piattaforma di Arduino se 
 * si tratta di variabili di INPUT o OUTPUT
 * 
 * Successivamente imposta BumperA_value = lettura DIGITALE del pin_bumperA...
 * Ripete il passaggio per il BumperB
 * */
void Bumper_init(Bumper * b){
    pinMode(b->pin_bumperA, OUTPUT);
    pinMode(b->pin_bumperB, OUTPUT);

    b->BumperA_value = digitalRead(b->pin_bumperA);
    b->BumperB_value = digitalRead(b->pin_bumperB);
}


/**
 * La seguente funzione si occupa di fare questi controlli:
 * se BumperA_value = 0 -> detect_wall = 1, altrimenti detect_wall = 0
 * se BumperB_value = 0 -> detect_wall = 1, altrimenti detect_wall = 0
 * */
void Bumper_handle(Bumper * b){
    if(b->BumperA_value == 0){
        b->detect_wall = 1;
    }
    else {
        b->detect_wall = 0;
    }
    if(b->BumperB_value == 0){
        b->detect_wall = 1;
    }
    else {
        b->detect_wall = 0;
    }
}

/**
 * Restituisce il valore di BumperA_value
 */
int Bumper_valueA(Bumper * b){
    return b->BumperA_value;
}

/**
 * Restituisce il valore di BumperB_value
 */
int Bumper_valueB(Bumper * b){
    return b->BumperB_value;
}

/**
 * Restituisce il valore di detect_wall
 */
int Bumper_detectWall(Bumper * b){
    return b->detect_wall;
}