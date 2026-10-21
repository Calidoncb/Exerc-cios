#include <stdio.h>
/*Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo e o total de vendas efetuadas por ele
no mês (em dinheiro). Sabendo que este vendedor ganha 15% de comissão sobre suas vendas efetuadas, informar
o seu nome, o salário fixo e salário no final do mês*/
int main(){
char nome[20];
float salariofixo=0, comicao=0, salarioreal=0;
printf("digite seu nome: ");
scanf(" %s", nome);
printf("digite seu salário:");
scanf("%f",&salariofixo);
printf("digite o total de vendas efetuadas: ");
scanf("%f",&comicao);
comicao = comicao*0.15;
salarioreal = salarioreal + comicao;
printf("\nO salário fixo de %s é de %.2f Reais,\n já o salário real é de %.2f\n",nome,salariofixo, salarioreal);
    
    return 0;
}