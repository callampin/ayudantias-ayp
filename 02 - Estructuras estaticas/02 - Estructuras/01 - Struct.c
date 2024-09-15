#include <stdio.h>

// Definición de la estructura
struct Persona {
    char nombre[50];
    int edad;
    float altura;
};

int main() {
    struct Persona persona1 = {"Chris", 24, 1.73}; // Inicialización de estructura
    printf("Nombre: %s\n", persona1.nombre);
    printf("Edad: %d\n", persona1.edad);
    printf("Altura: %.2f metros\n", persona1.altura);
    
    getchar();
    return 0;
}


