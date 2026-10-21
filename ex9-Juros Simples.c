#include <stdio.h>
/*Faça um algoritmo que receba um valor que foi depositado e exiba o valor com rendimento após um mês.
Considere o juros da poupança fixado em 0,70% a. m.  */
int main(){
float valor1=0, juros=0.007,valor2=0;
printf("Escreva o valor que queres depoistar: ");
scanf("%f", &valor1);
valor2 = valor1 + valor1*juros;
printf("\nO dinheiro depositado com rendimento de 0.007 ao mês agora está com valor = %.2f\n",valor2);
    return 0;
}