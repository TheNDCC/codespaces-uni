#include <stdio.h>
#include <string.h>

void cifradoCesar(const char *mensaje, char *resultado, int clave) {
    for (int indice = 0; mensaje[indice] != '\0'; indice++) {
        char caracter = mensaje[indice];

        if (caracter >= 'a' && caracter <= 'z') {
            resultado[indice] = (caracter - 'a' + clave) % 26 + 'a';
        } else if (caracter >= 'A' && caracter <= 'Z') {
            resultado[indice] = (caracter - 'A' + clave) % 26 + 'A';
        } else {
            resultado[indice] = caracter;
        }
    }
}

int main() {
    char mensaje[100];
    char resultado[100];
    int clave = 3;

    printf("Ingrese un mensaje:\n");
    scanf("%99s", mensaje);

    cifradoCesar(mensaje, resultado, clave);

    resultado[strlen(mensaje)] = '\0';

    printf("Mensaje original: %s\n", mensaje);
    printf("Mensaje cifrado: %s\n", resultado);

    return 0;
}
