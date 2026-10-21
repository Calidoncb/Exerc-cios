#include <stdio.h>
/* Escrever um algoritmo que leia o nome e as três notas obtidas por um aluno durante o semestre. Calcular a sua
média (aritmética), informar o nome e sua menção aprovado (media >= 7), Reprovado (media ≤ 5) e Recuperação
(5 > média < 7)  */
int main()
{
float nota1, nota2, nota3,media;
char nome[20];
printf("digite seu nome: ");
scanf(" %s", nome);
printf("\ndigite 3 notas (de 0 a 10 pontos): ");
scanf("%f %f %f",&nota1,&nota2,&nota3);
media = (nota1+nota2+nota3)/3;
if(media >=7){
    printf("\n%s está aprovado\n",nome);
}else if(media>5 && media<7){
    printf("\n%s está de recuperação\n",nome);
}else{
    printf("\n%s está reprovado\n", nome);
}
return 0;
}