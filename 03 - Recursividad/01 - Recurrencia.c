#include <stdio.h>

/* la capacidad de una función para definirse en términos 
    de sí misma, permitiendo que un problema se resuelva 
    mediante la repetición de la misma operación en instancias 
    más pequeñas del mismo problema.
*/ 

#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2); // Definición recursiva
}

int main() {
    int n = 5;
    printf("Fibonacci de %d es: %d\n", n, fibonacci(n));
    
    getchar();
    return 0;
}

