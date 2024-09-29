#include <stdio.h>
#include <string.h>

char main(void){
    char palabra[20];

    do{
        scanf("%s,palabra");

        if (!feof(stdin)){
            printf("\n%s",palabra);
        }
    }while(!feof(stdin));
}