#include <stdio.h>
#define TAMANO_ARREGLO 5

int main ()
{
    int v[10];
    int i, *p;

    for (i=0; i<10; i++) v[i] = 1;

    for (i=0; i<10; i++) printf ("\n%d", v[i]);

    p = v;

    for (i=0; i<10; i++) printf ("\n%d", *p++);

    for (i=0; i<10; i++) printf ("\n%p", &*p++);

    /* Tras cada p++ el puntero señala a la siguiente posición en v */
    return 0;
}