//
// Created by Simone Romanello on 2019-11-18.
//
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <string.h>

char *GetWord(){

    char* words[5];
    words[0] = "leonid";
    words[1] = "rododendro";
    words[2] = "saccoccia";
    words[3] = "macaron";
    words[4] = "strettina";

    srand(time(NULL));

    int randomNumber = rand() % 5;

    char *selected = *(words + randomNumber);

    return selected;
}
