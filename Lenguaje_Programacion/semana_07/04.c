#include <stdio.h>

// Función para ordenar en orden ascendente
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

// Función para ordenar en orden descendente
void ordenarDescendente(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (arr[j] < arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Función para encontrar el mayor y menor número
void encontrarMayorMenor(int *arr, int n, int *mayor, int *menor) {
    *mayor = *menor = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > *mayor) {
            *mayor = arr[i];
        }
        if (arr[i] < *menor) {
            *menor = arr[i];
        }
    }
}

// Función para mostrar el menú
void mostrarMenu() {
    printf("\n--- Menú de Opciones ---\n");
    printf("1. Ordenar números en orden ascendente\n");
    printf("2. Ordenar números en orden descendente\n");
    printf("3. Encontrar el mayor y menor número\n");
    printf("4. Salir\n");
    printf("Elige una opción: \n");
}

int main() {
    int n, opcion, mayor, menor;

    printf("¿Cuántos números deseas ingresar? \n");
    scanf("%d", &n);

    int arr[n];
    printf("Introduce los números enteros:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    do {
        mostrarMenu();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                ordenarAscendente(arr, n);
                printf("Números en orden ascendente:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 2:
                ordenarDescendente(arr, n);
                printf("Números en orden descendente:\n");
                for (int i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                encontrarMayorMenor(arr, n, &mayor, &menor);
                printf("El número mayor es: %d\n", mayor);
                printf("El número menor es: %d\n", menor);
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Intenta nuevamente.\n");
                break;
        }
    } while (opcion != 4);

    return 0;
}
