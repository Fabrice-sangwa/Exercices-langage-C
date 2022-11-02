#include <stdlib.h>
#include <stdio.h>
#include <string.h>


int main(int argc, char *argv[]){


    char maChaine[] = "Salut"; 
    char *phrase = "Salut je vais bien"; 
    
    printf("%s\n", maChaine); 
    printf("%s\n", phrase); 


    printf("La taille de la chaine Bonjour = %d\n", strlen("Bonjour")); 

    char chaine1[255] = " James"; 
    char chaine2[] = "Salut"; 

     

    printf("Chaine 1 = %s\n", chaine1); 
    printf("Chaine 2 = %s\n", chaine2); 

    printf("--------------------\n"); 

    strcat(chaine2, chaine1);

    printf("Chaine 2 = %s\n", chaine2);

    printf("--------------------\n"); 

    

    return 0; 
    
}