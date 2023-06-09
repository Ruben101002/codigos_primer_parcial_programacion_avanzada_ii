#include <stdio.h>
#define TAMANO 2

int main ()
{
    char c;
    int x;
    int Arreglo[TAMANO];
    double y;
    printf("\nPractica 1 Ruben\n");
    printf("\nTamano en char:\n");
    printf("\n El tamano en bytes de una variable char es: %d\n", sizeof(c));
    printf("\n El tamano en bites de una variable char es: %d\n", sizeof(c)*8);
    printf("\n El tamano en nibbles de una variable char es: %d\n", sizeof(c)*2);

    printf("\nTamano en entero:\n");
    printf("\n El tamano en bytes de una variable int es: %d\n", sizeof(x));
    printf("\n El tamano en bites de una variable int es: %d\n", sizeof(x)*8);
    printf("\n El tamano en nibbles de una variable int es: %d\n", sizeof(x)*2);

    printf("\nTamano en doble:\n");
    printf("\n El tamano en bytes de una variable double es: %d\n", sizeof(y));
    printf("\n El tamano en bites de una variable double es: %d\n", sizeof(y)*8);
    printf("\n El tamano en nibbles de una variable double es: %d\n", sizeof(y)*2);

    printf("\nTamano en Arreglo:\n");
    printf("\n El tamano en bytes de una variable arreglo es: %d\n", sizeof(Arreglo[TAMANO]));
    printf("\n El tamano en bites de una variable arreglo es: %d\n", sizeof(Arreglo[TAMANO])*8);
    printf("\n El tamano en nibbles de una variable arreglo es: %d\n", sizeof(Arreglo[TAMANO])*2);


return 0;
}