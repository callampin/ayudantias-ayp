#include <stdio.h>

/*  La recursividad con tipos elementales es cuando se usa recursión
    en funciones que manipulan datos simples, como enteros o caracteres. 
    Este tipo de recursión es fundamental en muchos algoritmos como el 
    cálculo de factoriales o la búsqueda binaria.*/

int factorial(int n) {
    if (n == 0) return 1; // Caso base
    return n * factorial(n - 1); // Caso recursivo
}

int main() {
    int numero = 5;
    printf("El factorial de %d es: %d\n", numero, factorial(numero));
    
    getchar();
    return 0;
}
