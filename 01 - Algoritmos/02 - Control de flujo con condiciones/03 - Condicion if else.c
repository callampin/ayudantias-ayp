#include <stdio.h>

int main() {
    int edad;

    printf("Ingresa tu edad: ");
    scanf("%d", &edad);

    if (edad < 0) {
        printf("La edad no puede ser negativa.\n");
    } else if (edad < 18) {
        printf("Eres menor de edad.\n");
    } else if (edad < 60) {
        printf("Eres mayor de edad.\n");
    } else {
        printf("Eres un adulto mayor.\n");
    }
    
    getchar();
    getchar();
    return 0;
}