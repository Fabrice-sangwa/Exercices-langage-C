#include <stdlib.h>
#include <stdio.h>

void inverser(int *nb1, int *nb2); 


int main(int argc, char *argv[]){


    int x = 3, y = 5; 
    
   inverser(&x, &y); 

    return 0; 
}


void inverser(int *nb1, int *nb2){

    printf("Nb1 = %d et Nb2 = %d\n", *nb1, *nb2); 
    int temp = *nb1;
    *nb1 = *nb2;
    *nb2 = temp; 
    printf("Nb1 = %d et Nb2 = %d", *nb1, *nb2); 
}