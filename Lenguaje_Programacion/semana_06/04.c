#include <stdio.h>

int main() {
    char cadena[100];  
    char *ptr;         
    int longitud = 0;

    printf("Introduce una cadena de caracteres: \n");
    fgets(cadena, sizeof(cadena), stdin);

    for (ptr = cadena; *ptr != '\0' && *ptr != '\n'; ptr++) {
        longitud++;
    }

    printf("Cadena al revés: \n");
    for (ptr = cadena + longitud - 1; ptr >= cadena; ptr--) {
        printf("%c", *ptr);
    }
    printf("\n");

    return 0;
}
