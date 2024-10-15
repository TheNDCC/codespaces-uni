#include <stdio.h>

void calcularLongitud(const char *cadena, int *longitud) {
    *longitud = 0;
    while (cadena[*longitud] != '\0') {
        (*longitud)++;
    }
}

int main() {
    char cadena[100];
    int longitud;

    printf("Ingrese una cadena de caracteres:\n");
    scanf("%99s", cadena); // Leer la cadena (hasta 99 caracteres)

    calcularLongitud(cadena, &longitud);

    printf("La longitud de la cadena es: %d\n", longitud);

    return 0;
}