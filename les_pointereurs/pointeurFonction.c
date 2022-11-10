#include <stdio.h>
#include <stdlib.h>

void tripleNombre(int *nombre); 

int main(int argc, char *argv[]){


    int age = 4; 
    tripleNombre(&age); 

    printf("%d\n", age); 

    int nombre = 0;
    int *p = &nombre;


    printf("Veullez saisir une nombre : \n");
    scanf("%d", p);
    
    printf("Vous avez saisi : %d\n", nombre); 


    return 0;
}


void tripleNombre(int *nombre){
    *nombre  *= 3; 
}
