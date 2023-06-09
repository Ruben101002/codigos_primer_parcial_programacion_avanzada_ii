#include <stdio.h>
int main () 
{
    int num = 10;
    float decimal = 20.5;
    char letter = 'a';

    printf("Direccion de la variable int: %p\n", &num);
    printf("Direccion de la variable floar: %p\n", &decimal);
    printf("Direccion de la variable char: %p\n", &letter);

    return 0;
    
}