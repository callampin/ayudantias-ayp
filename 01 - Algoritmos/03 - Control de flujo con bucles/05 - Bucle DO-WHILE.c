#include <stdio.h>

int main() {
    int contador = 1;

    do {
        printf("Iteracion %d\n", contador);
        contador++;
    } while (contador <= 5);

    getchar();
    return 0;
}