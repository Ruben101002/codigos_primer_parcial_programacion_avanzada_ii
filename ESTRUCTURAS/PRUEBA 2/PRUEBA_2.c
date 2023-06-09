#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define nveces 4

void lectura();
void sensor(float *arregloPresiones);


int main ()
{
    void lectura();
    float presiones[nveces];
    sensor(presiones);
    printf("Arreglo de presiones: \n\n");
    for (int i = 0 ; i < nveces ; i++)
    {
        printf("%d Presion --> %.1f PSI ", i+1, presiones[i]);
    
if (presiones[i] < 37.0)
        {
            printf("--> CARRO CHICO\n");
        }
        else if (presiones[i] < 45.0)
        {
            printf("--> CARRO MEDIANO\n");
        }
            else
            {
                printf("--> CARRO GRANDE\n");
            }
    }
}

void sensor(float *arregloPresiones)
{
    srand(time(NULL));
    for (int i = 0 ; i < nveces ; i++)
    {
        arregloPresiones[i] = (float)rand()/RAND_MAX*(50-20)+20;
    }
}

void lectura()
{
    int x;
    int eleccion[x];
    printf("Elija la funcionalidad deseada:\n");
    printf("Opcion a) Autos Chicos presione 1\n Opcion b) Autos Medianos presione 2\n Opcion c) Autos Grandes presione 3\n");
    scanf("%i",&eleccion[x]);
    if (eleccion[x]==1)
    {
        printf("Presion recomendada para coche pequeño de 30 a 32 PSI");
    }
        else if (eleccion[x]==2)
        {
            printf("Presion recomendada para coche mediano de 32 a 35 PSI");    
        }
            else if (eleccion[x]==3)
            {
                printf("Presion recomendada para coche mediano de 35 a 45 PSI");
            }
                else
                {
                    printf("Error, tiene que intentarlo de nuevo con otra opcion");
                    scanf("%i",&eleccion[x]);    
                } 
}
