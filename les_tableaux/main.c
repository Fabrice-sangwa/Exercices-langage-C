#include <stdlib.h>
#include <stdio.h>

int incremente();
 
int main(int argc, char *argv[]){
    
    int tableau[6];

    tableau[0] = 12; 
    tableau[1] = -3;
    tableau[2] = 12;
    tableau[3] = 0;
    tableau[4] = -32;
    tableau[5] = 1;
   
    //Affichage du premier élément du tableau
    printf("%d\n", *tableau); 

    // Aficher l'adresse du tableau 
    printf("%d\n", tableau); 

    //Afficher la valeur du deuxième élément du tableau 
    printf("%d\n", *(tableau + 1)); 






    return 0;
}