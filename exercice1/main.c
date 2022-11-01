#include <stdlib.h>
#include <stdio.h>

int incremente();
 
int main(int argc, char *argv[])
{
    printf("%d\n", incremente());
    printf("%d\n", incremente());
    printf("%d\n", incremente());
    printf("%d\n", incremente());
 
    return 0;
}
 
int incremente()
{
    static int nombre = 4;
    
    nombre++;
    return nombre;
}
