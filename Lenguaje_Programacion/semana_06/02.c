#include <stdio.h>
#include <stdlib.h>

int main() {
    int N;
    printf("Introduce el tamaño de la matriz (NxN): \n");
    scanf("%d", &N);
    int *matriz = (int *)malloc(N * N * sizeof(int));
    printf("Introduce los elementos fuera de la diagonal principal:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (i == j) {
                *(matriz + i * N + j) = 1;
            } else {
                printf("Elemento [%d][%d]: \n", i + 1, j + 1);
                scanf("%d", (matriz + i * N + j));
            }
        }
    }
    printf("\nMatriz resultante:\n");
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d ", *(matriz + i * N + j));
        }
        printf("\n");
    }
    free(matriz);
    return 0;
}
