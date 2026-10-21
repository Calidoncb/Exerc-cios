#include <stdio.h>
/*Faça um algoritmo que receba o preço de custo de um produto e mostre o valor de venda. Sabe-se que o preço
de custo receberá um acréscimo de acordo com um percentual informado pelo usuário. */
int main(){
float custo=0,acrecimo=0,venda=0;
printf("Digite o preço de fabricação do produto: ");
scanf("%f", &custo);
printf("\nDigite o acrecimo de custo de venda do produto (em porcentagem): ");
scanf("%f",&acrecimo);
acrecimo = acrecimo/100;
venda = custo + custo*acrecimo;
printf("\nO valor de venda do produto é = %.2f\n",venda);
    return 0;
}