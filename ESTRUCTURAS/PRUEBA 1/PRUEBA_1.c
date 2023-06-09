#include <stdio.h>
#include <string.h>

struct Persona {
    char nombre[21]; // 20 caracteres + 1 para el carácter nulo '\0'
    int edad;
    char sexo;
};

int main() {
    struct Persona persona1;
    
    // Asignar valores a los elementos de la estructura
    strcpy(persona1.nombre, "Juan");
    persona1.edad = 30;
    persona1.sexo = 'M';
    
    // Imprimir los valores de la estructura
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Sexo: %c\n", persona1.sexo);
    
    return 0;
}

