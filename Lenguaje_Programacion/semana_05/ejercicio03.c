#include<stdio.h>
#include<conio.h>

void main(void)
{
   char *ciudades[]={"MANAGUA","ESTELI","LEON","MASAYA"};
   char **p,*q;
   clrscr();
   p=ciudades;
   p++;
   q=ciudades[2];
   q++;
   printf("%s %s \n",ciudades[2],*p++);
   printf("%c %c %c\n",ciudades[3][4],*q,**p);
   getch();
}
