#include <stdlib.h>
#include <stdio.h>

void parcourir(int *tableau, int taille); 
 
int main(int argc, char *argv[]){
    
    //Déclartion d'un tableau 
    int tableau[6];

    int taille = 6; 

    //Affectation des valeurs 

    tableau[0] = 12; 
    tableau[1] = -3;
    tableau[2] = 54;
    tableau[3] = 0;
    tableau[4] = -32;
    tableau[5] = 1;

    //par defaut le tableau est un un pointeur sur le premier élément 
    printf("%d\n", tableau); 

    //Afficher le premier élement du tableau 
    printf("%d\n", *tableau); 
    
    //Afficher le troisième élement du tableau
    printf("%d\n", *(tableau + 2)); 

    //Parcourir un tableau 
    parcourir(tableau, 6); 

    return 0;
}

void parcourir(int *tableau, int taille){

    int i; 

    printf("--------Le Tableau----------");
    for(i = 0; i<taille; i++){
        printf("%d\n", *(tableau + i)); 
    }
} 