#include <stdio.h>

void ordenarAscendente(int *arr, int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    printf("¿Cuántos números deseas ingresar? \n");
    scanf("%d", &n);

    int arr[n]; 

    printf("Introduce los números enteros:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    ordenarAscendente(arr, n);

    printf("Números en orden ascendente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
