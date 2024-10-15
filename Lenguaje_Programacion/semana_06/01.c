#include <stdio.h>
#include <stdlib.h>

int main() {
    int filas, columnas;
    
    printf("Introduce el número de filas: \n");
    scanf("%d", &filas);
    printf("Introduce el número de columnas: \n");
    scanf("%d", &columnas);

    int *matriz = (int *)malloc(filas * columnas * sizeof(int)); 
    int *sumas = (int *)malloc(filas * sizeof(int));              

    // Leer los elementos de la matriz
    printf("Introduce los elementos de la matriz:\n");
    for (int i = 0; i < filas; i++) {
        sumas[i] = 0;  // Inicializar la suma de la fila
        for (int j = 0; j < columnas; j++) {
            scanf("%d", (matriz + i * columnas + j)); 
            sumas[i] += *(matriz + i * columnas + j);  
        }
    }

    printf("\nSuma de los elementos de cada fila:\n");
    for (int i = 0; i < filas; i++) {
        printf("Suma de la fila %d: %d\n", i + 1, sumas[i]);
    }

    free(matriz);
    free(sumas);

    return 0;
}