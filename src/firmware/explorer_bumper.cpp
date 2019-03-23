

#include "explorer_bumper.h"

/**
 * Inizializzare i pin accedendo alla struttura
 * per comunicare alla piattaforma di Arduino se 
 * si tratta di variabili di INPUT o OUTPUT
 * 
 * Successivamente impostare BumperA_value = lettura DIGITALE del pin_bumperA...
 * Ripetere il passaggio per il BumperB
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
 * TUTTE LE VARIABILI SONO CONTENUTE NELLA STRUTTURA DI NOME "Bumper"
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
 * Deve restituire il valore di BumperA_value
 */
int Bumper_valueA(Bumper * b){
    return b->BumperA_value;
}

/**
 * Deve restituire il valore di BumperB_value
 */
int Bumper_valueB(Bumper * b){
    return b->BumperB_value;
}

/**
 * Deve restituire il valore di detect_wall
 */
int Bumper_detectWall(Bumper * b){
    return b->detect_wall;
}