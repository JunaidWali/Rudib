#include "header.h"

int main (void){

    char name [30];
    
    printf("What is your name?\n");
    fgets(name, 30, stdin);
    strtok(name, "\n");

    printf("Hello, %s\n", name);

    return 0;
}