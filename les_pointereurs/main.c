#include <stdlib.h>
#include <stdio.h>


int main(int argc, char *argv[])
{
    
 
    int x = 0; 

    printf("X=%d\n", x);

    int *p = NULL; 
    p = &x;

    printf("Valeur sur la quelle pinte p=%d\n", *p); 

    *p = 44; 

    printf("X=%d\n", x); 

    printf("Valeur sur la quelle pointe p=%d", *p); 
    //printf("%p\n", p);

    return 0;
}