#include <stdio.h>
#include <string.h>

int main(void){
    char nombre1[]="Mi nombre es chelin";
    char nombre2[]="Mi nombre es Tutoriales";
    printf("%s\n", nombre1);
    printf("%s\n", nombre2);
    printf("Copio lo q tiene nombre1 arriba de nombre2\n");
    strcpy(nombre2,nombre1);
    printf("%s\n",nombre2);


    return 0;
}