#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    char nombre1[]="Mi nombre es chelin";
    char nombre2[]="Mi nombre es Tutoriales";
    printf("%s\n", nombre1);
    printf("%s\n", nombre2);
    printf("Copio lo q tiene nombre1 arriba de nombre2\n");
    strcpy(nombre2,nombre1);
    printf("%s\n",nombre2);

    int largo;
    largo = strlen(nombre1);
    printf("Longitud de nombre1: %d\n",largo);

    int i;
    i = strcmp(nombre1,nombre2);
    printf("i : %d\n",i);

    

    return 0;
}