#include <stdlib.h>
#include <stdio.h>

void afficher_elements(char *tableau, int taille);
void afficher_elements2(char tableau[], int taille); 
 
int main(int argc, char *argv[]){
    
    int taille = 4; 

    char tableau[4] = {'A', 'B', 'C', 'D'}; 

    afficher_elements(tableau, taille); 
    afficher_elements2(tableau, taille); 

    return 0;  
}



void afficher_elements(char *tableau, int taille){

    for (int i = 0; i < taille; i++){
        
        printf("Element du tableau %c\n", tableau[i]); 
    }
}

void afficher_elements2(char tableau[], int taille){

    printf("--------------------\n");
    for (int i = taille - 1; i >= 0; i--){
         
        printf("L'element : %c\n", tableau[i]); 
    }

}
