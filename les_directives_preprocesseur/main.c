#include <stdlib.h>
#include <stdio.h>
#include "fichier.h"

#define majeur(age) if (age >= 18){\
                        printf("Vous etes majeur\n"); \
                    } else {\
                        printf("Vous n'etes pas majeur\n");\
                    }\



int main(int argc, char *argv[])
{
    
 
    int s = somme(5, 7); 

    printf("La somme de 5 et 7 avec ajout de 5 est de %d\n", s);
    majeur(12)
    majeur(21)
    majeur(32)
    majeur(0)

    return 0; 

}