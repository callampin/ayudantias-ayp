#include <stdio.h>

int main() {
    int contador = 1;

    while (contador <= 10) {
        printf("Contador: [%d] \n", contador);
        contador++;
    }

    getchar();
    return 0;
}