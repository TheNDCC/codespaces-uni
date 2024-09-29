#include <stdio.h>
#include <string.h>

int main(voind){
    char palabra[20];

    do{
        scanf("%s,palabra");

        if (!feof(stdin)){
            printf("\n%s",palabra);
        }
    }while(!feof(stdin));
}