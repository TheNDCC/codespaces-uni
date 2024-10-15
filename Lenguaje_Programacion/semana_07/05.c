#include <stdio.h>
#include <stdlib.h>

void generarSerieFibonacci(int cantidad, int *serieFibonacci) {
    if (cantidad >= 1) {
        serieFibonacci[0] = 0; // Primer término
    }
    if (cantidad >= 2) {
        serieFibonacci[1] = 1; // Segundo término
    }

    for (int indice = 2; indice < cantidad; indice++) {
        serieFibonacci[indice] = serieFibonacci[indice - 1] + serieFibonacci[indice - 2];
    }
}

int main() {
    int cantidad;

    printf("¿Cuántos términos de la serie de Fibonacci desea calcular?\n");
    scanf("%d", &cantidad);

    if (cantidad <= 0) {
        printf("Por favor, ingrese un número positivo.\n");
        return 1;
    }

    int *serieFibonacci = (int*)malloc(cantidad * sizeof(int));
    if (serieFibonacci == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    generarSerieFibonacci(cantidad, serieFibonacci);

    printf("Los primeros %d términos de la serie de Fibonacci son:\n", cantidad);
    for (int indice = 0; indice < cantidad; indice++) {
        printf("%d ", serieFibonacci[indice]);
    }
    printf("\n");

    free(serieFibonacci);

    return 0;
}
