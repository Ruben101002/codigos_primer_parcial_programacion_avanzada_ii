#include <stdio.h>
int main () 
{
    int Dato = 5;
    int *PtrDato;

    PtrDato = &Dato;
    printf("Direccion de Dato: %p\n",&Dato);
    printf("Dato: %d\n",Dato);
    printf("PtrDato: %p\n",PtrDato);

    return 0;
}