#include <stdio.h>
/*Faça um algoritmo que receba um número e mostre uma mensagem caso este número seja maior que 10. */
int main()
{
int num;
printf("Digite um número: ");
scanf("%d",&num);
if(num>10){
    printf("\nesse número é maior que 10\n");
}
    return 0;
}