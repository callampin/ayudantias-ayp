#include <stdio.h>

// Las funciones de tipo "int" devuelven un valor de tipo entero
// y se utilizan para realizar cálculos y devolver
// un resultado mediante la instruccion "return".
int sumar(int a, int b) {
    return a + b;
}

int main() {
    // Declaramos una variable con el valor a sumar
    int resultado = sumar(5, 3); 
    printf("El resultado de la suma es: %d\n", resultado);

    // Tambien se puede entregar directamente el resultado
    printf("El resultado de la segunda suma es: %d\n", sumar(2, 4));

    getchar();
    return 0;
}