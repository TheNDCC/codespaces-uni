#include <stdio.h>

int main() {
    char cadena[100];  // Arreglo para la cadena
    char *ptr = cadena;  // Puntero para recorrer la cadena
    int longitud = 0;

    // Leer la cadena desde el teclado
    printf("Introduce una cadena de caracteres: \n");
    fgets(cadena, sizeof(cadena), stdin);  // Leer la cadena con fgets

    // Contar la longitud de la cadena usando el puntero
    while (*ptr != '\0' && *ptr != '\n') {
        longitud++;
        ptr++;  // Avanzar el puntero
    }

    // Mostrar la longitud
    printf("La longitud de la cadena es: %d\n", longitud);

    return 0;
}
