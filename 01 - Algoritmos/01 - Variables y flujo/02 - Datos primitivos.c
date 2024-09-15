#include <stdio.h>

int main() {

    printf("\n****************** Uso de int ******************\n");
    int edad = 25;
    int anioActual = 2024;
    int anioNacimiento;

    anioNacimiento = anioActual - edad;

    printf("Edad: %d\n", edad);
    printf("Anio actual: %d\n", anioActual);
    printf("Anio de nacimiento estimado: %d\n", anioNacimiento);

    int num1 = 15;
    int num2 = 4;
    int suma = num1 + num2;
    int resta = num1 - num2;
    int multiplicacion = num1 * num2;
    int division = num1 / num2;

    printf("Suma: %d\n", suma);
    printf("Resta: %d\n", resta);
    printf("Multiplicacion: %d\n", multiplicacion);
    printf("Division: %d\n", division);

    printf("\n****************** Uso de float ******************\n");
    float numeroReal = 3.14;

    printf("El valor de la variable float es: %f\n", numeroReal);

    numeroReal = numeroReal + 1.0;

    printf("El valor de la variable float ahora es: %f\n", numeroReal);

    printf("\n****************** Uso de char ******************\n");

    char letra = 'A';
    printf("El valor de la variable char es: %c\n", letra);

    printf("\n****************** Fin del programa ******************\n");
    getchar();
    return 0;
}
