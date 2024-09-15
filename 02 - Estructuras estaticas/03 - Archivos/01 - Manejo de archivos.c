
#include <stdio.h>

// El manejo de archivos en C permite leer y escribir 
// datos en el sistema de archivos. 
// Se usan funciones como fopen, fscanf, fprintf, y fclose.

int main() {
    FILE *archivo; // Puntero al archivo

    // Escribir en un archivo
    archivo = fopen("datos.txt", "w");
    if (archivo == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }
    fprintf(archivo, "Nombre: Juan\nEdad: 30\n"); // Escribe en el archivo
    fclose(archivo);

    // Leer desde un archivo
    archivo = fopen("datos.txt", "r");
    if (archivo == NULL) {
        printf("Error al abrir el archivo\n");
        return 1;
    }
    char linea[100];
    while (fgets(linea, 100, archivo) != NULL) {
        printf("%s", linea); // Imprime cada línea del archivo
    }
    fclose(archivo);

    return 0;
}



