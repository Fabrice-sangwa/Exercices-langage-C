#include <stdlib.h>
#include <stdio.h>

int incremente();
 
int main(int argc, char *argv[]){
    
    //Déclartion d'un tableau 
    int tableau[6];

    //Affectation des valeurs 

    tableau[0] = 12; 
    tableau[1] = -3;
    tableau[2] = 12;
    tableau[3] = 0;
    tableau[4] = -32;
    tableau[5] = 1;

    for (int i = 0; i<6; i++){
        printf("L'element: %d\n", tableau[i]); 

    }

    printf("Jell\n"); 
   
    //Affichage du premier élément du tableau
    printf("%d\n", *tableau); 

    // Aficher l'adresse du tableau 
    printf("%d\n", tableau); 

    //Afficher la valeur du deuxième élément du tableau 
    printf("%d\n", *(tableau + 1)); 


    //Création d'un tableau dynamique
    char tableau1[] = {'A', 'B', 'D'};
    printf("%c\n", *tableau1); 

    //Parcours d'un tableau 

    




    return 0;
}