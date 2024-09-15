#include <stdio.h>

int main() {
    int num1, num2, suma, resta, multiplicacion, division, modulo;

    printf("Ingrese el primer numero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo numero: ");
    scanf("%d", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;
    division = num1 / num2;
    modulo = num1 % num2;

    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicacion: %d\n", multiplicacion);
    printf("Division: %d\n", division);
    printf("Modulo: %d\n", modulo);

    getchar();
    getchar();
    return 0;
}