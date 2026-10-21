#include <stdio.h>
/*Escrever um algoritmo que leia o nome de um aluno e as notas das três provas que ele obteve no semestre. No
final informar o nome do aluno e a sua média (aritmética). */
int main(){
char nome[20];
float nota1,nota2,nota3,media;
printf("digite seu nome: ");
scanf(" %s", nome);
printf("\nDigite as notas das 3 provas: ");
scanf("%f, %f, %f", nota1,nota2,nota3);

media = (nota1 + nota2 + nota3)/3;
printf("\nO aluno %s teve média de %.1f nas 3 provas\n", nome, media);
    
    return 0;
}