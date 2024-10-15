#include <stdio.h>
#include <stdlib.h>

void calcularFibonacci(int n, int *fibonacci) {
    if (n >= 1) {
        fibonacci[0] = 0; // Primer término
    }
    if (n >= 2) {
        fibonacci[1] = 1; // Segundo término
    }

    for (int i = 2; i < n; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }
}

int main() {
    int n;

    printf("¿Cuantos términos de la serie de Fibonacci desea calcular?\n");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Por favor, ingrese un número positivo.\n");
        return 1;
    }

    int *fibonacci = (int*)malloc(n * sizeof(int));
    if (fibonacci == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    calcularFibonacci(n, fibonacci);

    printf("Los primeros %d términos de la serie de Fibonacci son:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");

    free(fibonacci);

    return 0;
}