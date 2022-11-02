#include <stdlib.h>
#include <stdio.h>


int sommeTableau(float tableau[], int tailleTableau); 
float moyenneTableau(float tableau[], int tailleTableau); 



int main(int argc, char *argv[]){

    
    int tailleTableau  = 5; 
    float tablleau [5] = {1, 7.6, 35, 13, 56}; 

    int somme = sommeTableau(tablleau, tailleTableau); 
    float moyenne = moyenneTableau(tablleau, tailleTableau);

    printf("La somme = %d\n", somme); 
    printf("La moyenne = %.2f", moyenne); 
    
    return 0; 
}


int sommeTableau(float tableau[], int tailleTableau){
    int somme = 0; 

    for (int i = 0; i < tailleTableau; i++){
        somme += tableau[i]; 
    }

    return somme; 
}


float moyenneTableau(float tableau[], int tailleTableau){

    float moyenne = sommeTableau(tableau, tailleTableau) / tailleTableau;
    return moyenne; 

}


