#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*Objetivo: Paso de apuntador de una funcion principal, el apuntador apunta a un arreglo*/

#define NUM_NEUMATICOS 4
/*Función que simula la lectura de datos del sensor de preión de neumáticos*/

void leerPresionNeumaticos(int * arregloPresiones)
{
    int i;
    srand(time(NULL)); //inicializa la semilla aleatoria
    for(i=0; i<NUM_NEUMATICOS; i++)
    {
        arregloPresiones[i]=rand() % 50 + 20; //genera aleatorio empezando en 20 hasta el 70
    }//fin del ciclo for
}//fin de la funcion

int main ()
{
    int presionesNeumaticos[NUM_NEUMATICOS];
    int i;
    leerPresionNeumaticos(presionesNeumaticos);

    printf("PRACTICA 2_RUBEN\n");
    printf("PRESIONES DE LOS NEUMATICOS\n");
    for(i=0; i<NUM_NEUMATICOS; i++)
    {
        printf("NEUMATICO %d: %d PSI\n",i+1,presionesNeumaticos[i]);
    }
 return 0;
}
