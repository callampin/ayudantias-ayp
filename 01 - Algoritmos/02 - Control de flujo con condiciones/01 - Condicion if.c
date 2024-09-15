#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int c = 30;

    // Ejemplo 1: Condicion simple
    if (a < b) {
        printf("a es menor que b\n");
    }
    // Ejemplo 1.5: al ser falsa esta no se va a ejecutar
    if (a > b) {
        printf("Esto no saldra en consola\n");
    }

    // Ejemplo 2: Condicion con operador logico AND
    if (a < b && b < c) {
        printf("a es menor que b y b es menor que c\n");
    }

    // Ejemplo 3: Condicion con operador logico OR
    if (a > b || b < c) {
        printf("a es mayor que b o b es menor que c\n");
    }

    // Ejemplo 4: Condicion con igualdad
    if (b == 20) {
        printf("b es igual a 20\n");
    }

    // Ejemplo 5: Condicion con desigualdad
    if (c != 10) {
        printf("c no es igual a 10\n");
    }

    getchar();
    return 0;
}