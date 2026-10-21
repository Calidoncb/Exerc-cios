#include <stdio.h>
int main(){
char nome[20];
int idade;
float altura;

printf("digite nome: ");
scanf(" %s", nome);
printf("idade: ");
scanf("%d", &idade);
printf("altura: ");
scanf("%f", &altura);
printf("\nNome: %s, idade: %d, altura: %.2f", nome, idade, altura);
    return 0;
}