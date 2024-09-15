#include <stdio.h>

int suma(int arr[], int n) {
    if (n == 0) return 0; // Caso base
    return arr[n - 1] + suma(arr, n - 1); // Caso recursivo
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    printf("La suma de los elementos del arreglo es: %d\n", suma(arr, n));
    
    getchar();
    return 0;
}
