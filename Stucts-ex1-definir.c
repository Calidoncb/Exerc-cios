#include <stdio.h>
typedef struct{
    char titulo[100];
    char autor[50];
    int anoPublicacao;
} livro_t;
int main(void){
  livro_t borg;
  printf("digite o nome do livro: ");
  scanf(" %s", borg.titulo);
  printf("\nautor: ");
  scanf(" %s", borg.autor);
  printf("\nano de publicação: ");
  scanf("%d", borg.anoPublicacao);

  //printf("\ntitulo: %s, autor: %s, ano de publicação: %d\n", borg.titulo, borg.autor, borg.anoPublicacao);
  printf("fodasse");

    return 0;
}