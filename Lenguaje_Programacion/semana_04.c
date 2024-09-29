#include <stdio.h>
#include <string.h>

int main(void){
    char palabra[20];

    do{
        scanf("%c,palabra");

        if (!feof(stdin)){
            printf("\n%s",palabra);
        }
    }while(!feof(stdin));
}