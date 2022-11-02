#include <stdlib.h>
#include <stdio.h>


int sommeTableau(float tableau[], int tailleTableau); 
double moyenneTableau(float tableau[], int tailleTableau); 



int main(int argc, char *argv[]){

    
    int tailleTableau  = 5; 
    float tableau [5] = {1, 7.6, 35, 13, 56}; 

    int somme = sommeTableau(tableau, tailleTableau); 
    double moyenne = moyenneTableau(tableau, tailleTableau);

    printf("La somme = %d\n", somme); 
    printf("La moyenne = %.1f", moyenne); 
    
    return 0; 
}


int sommeTableau(float tableau[], int tailleTableau){
    int somme = 0; 

    for (int i = 0; i < tailleTableau; i++){
        somme += tableau[i]; 
    }

    return somme; 
}


double moyenneTableau(float tableau[], int tailleTableau){
    return (double)sommeTableau(tableau, tailleTableau) / tailleTableau;
; 

}


