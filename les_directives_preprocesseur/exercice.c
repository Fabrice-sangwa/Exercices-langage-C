#include <stdlib.h>
#include <stdio.h>
//Création d'une macro simple
#define SALUT()  printf("Salut toi\n"); 
//Faire une macro sur plusieurs lignes
#define ECRIRE() printf("Salut\n"); \
                 printf("Tu vas bien\n");\
                 printf("oui, et toi ?\n");\


int main(){


    SALUT()
    ECRIRE()

    return 0; 
}


