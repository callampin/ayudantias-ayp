#include <stdio.h>

int main() {
    int entero;
    float flotante;
    char caracter;

    printf("Ingrese un numero entero: ");
    scanf("%d", &entero);

    printf("Ingrese un numero flotante: ");
    scanf("%f", &flotante);

    printf("Ingrese un caracter: ");
    scanf(" %c", &caracter);

    printf("Los valores ingresados son:\n");
    printf("Entero: %d\n", entero);
    printf("Flotante: %.2f\n", flotante);
    printf("Caracter: %c\n", caracter);

    getchar();
    getchar();
    return 0;
}