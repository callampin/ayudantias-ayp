#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;

    // Ejemplo 1: Comparacion simple
    if (a > b) {
        printf("a es mayor que b\n");
    } else {
        printf("a no es mayor que b\n");
    }

    // Ejemplo 2: Igualdad
    if (a == 10) {
        printf("a es igual a 10\n");
    } else {
        printf("a no es igual a 10\n");
    }

    // Ejemplo 3: Comparacion con una constante
    if (b < 30) {
        printf("b es menor que 30\n");
    } else {
        printf("b no es menor que 30\n");
    }

    // Ejemplo 4: Verificacion de paridad
    if (a % 2 == 0) {
        printf("a es un numero par\n");
    } else {
        printf("a es un numero impar\n");
    }

    // Ejemplo 5: Verificacion de negatividad
    int c = -5;
    if (c < 0) {
        printf("c es un numero negativo\n");
    } else {
        printf("c no es un numero negativo\n");
    }

    getchar();
    return 0;
}