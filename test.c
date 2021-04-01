#include "header.h"

int main (void){

    char name [30];
    
    printf("What is your name?\n");
    fgets(name, 30, stdin);
    strtok(name, "\n");

    printf("Hi there, %s\n", name);

    return 0;
}