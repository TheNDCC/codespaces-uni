#include <stdio.h>
#include <string.h>

void cifradoCesar(const char *palabra, char *cifrada, int desplazamiento) {
    for (int i = 0; palabra[i] != '\0'; i++) {
        char letra = palabra[i];

        if (letra >= 'a' && letra <= 'z') {
            cifrada[i] = (letra - 'a' + desplazamiento) % 26 + 'a';
        } else if (letra >= 'A' && letra <= 'Z') {
            cifrada[i] = (letra - 'A' + desplazamiento) % 26 + 'A';
        } else {
            cifrada[i] = letra;
        }
    }
}

int main() {
    char palabra[100];
    char cifrada[100];
    int desplazamiento = 3; // Desplazamiento del cifrado

    printf("Ingrese una palabra:\n");
    scanf("%99s", palabra);

    cifradoCesar(palabra, cifrada, desplazamiento);

    cifrada[strlen(palabra)] = '\0';

    printf("Palabra original: %s\n", palabra);
    printf("Palabra cifrada: %s\n", cifrada);

    return 0;
}