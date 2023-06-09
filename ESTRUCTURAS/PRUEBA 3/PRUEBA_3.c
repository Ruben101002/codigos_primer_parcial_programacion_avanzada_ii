#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main()
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

    return 0;
}