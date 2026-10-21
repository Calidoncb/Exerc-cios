#include <stdio.h>
/* Faça um algoritmo que receba um número e diga se este número está no intervalo entre 100 e 200.  */
int main()
{
int num;
printf("digita um número ae parça: ");
scanf("%d",&num);
if(num>100 && num<200){
    printf("\nesse número está entre 100 e 200\n");
}
return 0;
}