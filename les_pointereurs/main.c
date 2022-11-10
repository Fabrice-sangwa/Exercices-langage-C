#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[]){
    
 

    //on crée une variable 
    int age = 70;

    //on crée un pointeur que l'on initialise à NULL
    int *monPointeur = NULL; 

    //on associe l'adresse de la variable (age) au pointeur (monPointeur)
    monPointeur = &age;

    //onaffiche la valeur de la variable age 
    printf("Age = %d\n", age); 

    //on affiche l'adresse de la variable 
    printf("Adresse age = %p\n", &age); 

    //on affiche la valeur du pointeur monPointeur  
    printf("Adresse dans monPointeur = %p\n", monPointeur); 

    //on affiche la valeur du pointeur monPointeur  en decimal
    printf("Adresse  dans monPointeur decimal = %d\n", monPointeur); 


    //on affiche la valeur qui est sur l'adresse monPointeur
    printf("Valeur contenu dans monPointeur = %d\n", *monPointeur); 

    //Modifier la valeur de la variable age grâce au pointeur 
    *monPointeur = 19;

    //on affiche la valeur de la variable age
    printf("Adresse age = %d\n", age); 




    return 0;
}