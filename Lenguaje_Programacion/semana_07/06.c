#include <stdio.h>

void obtenerTamanio(const char *texto, int *tamanio) {
    *tamanio = 0;
    while (texto[*tamanio] != '\0') {
        (*tamanio)++;
    }
}

int main() {
    char texto[100];
    int tamanio;

    printf("Ingrese un texto:\n");
    scanf("%99s", texto); // Leer el texto (hasta 99 caracteres)

    obtenerTamanio(texto, &tamanio);

    printf("El tamaño del texto es: %d\n", tamanio);

    return 0;
}