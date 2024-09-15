#include <stdio.h>


// Las funciones de tipo "void" no devuelven ningún valor
// y se utilizan para agrupar instrucciones que se van a
// ejecutar en más de una ocasión.
void saludar() {
    printf("¡Hola!\n");
}


int main() {
    saludar(); // Llamamos a la función saludar

    getchar();
    return 0;
}