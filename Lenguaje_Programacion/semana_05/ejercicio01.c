#include <stdio.h>
int main(void)
{
    int a;
    int *p;
    a=5;
    p=&a;
    *p+=7;
    printf("\nEl valor final de a es: %d", a);  
    return 0;
}