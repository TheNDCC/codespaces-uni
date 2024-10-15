#include <stdio.h>

int main() {
    int n, i, mayor, menor;

    printf("¿Cuántos números deseas ingresar? ");
    scanf("%d", &n);

    int arr[n];

    printf("Introduce los números enteros:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    mayor = menor = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
        }
        if (arr[i] < menor) {
            menor = arr[i];
        }
    }

    printf("El número mayor es: %d\n", mayor);
    printf("El número menor es: %d\n", menor);

    return 0;
}
