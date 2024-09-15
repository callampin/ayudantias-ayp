#include <stdio.h>

int main() {
    int opcion;

    printf("Elija una opcion:\n");
    printf("1. Saludar\n");
    printf("2. Despedirse\n");
    printf("3. Agradecer\n");
    printf("4. Salir\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            printf("Hola!\n");
            break;
        case 2:
            printf("Adios!\n");
            break;
        case 3:
            printf("Gracias!\n");
            break;
        case 4:
            printf("Saliendo del programa...\n");
            break;
        default:
            printf("Opcion invalida\n");
            break;
    }

    getchar();
    getchar();
    return 0;
}