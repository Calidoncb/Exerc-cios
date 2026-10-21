#include <stdio.h>
#include <string.h>
#define MAX 20
// Dupla: Augusto Calidon e Afonso Frederico
int main(){
int opcao;
char procurado[MAX];
int sumido;

char nomes[MAX][31];      // nomes[i] funciona como uma string comum
int idades[MAX];
float tempos[MAX][3];     // 3 tempos por atleta
int total = 0;            // quantos atletas estão cadastrados

do{
printf("Qual opção deseja escolher?\n");
printf("1 - Cadastrar atleta\n");
printf("2 - Listar atletas\n");
printf("3 - Buscar atleta por nome\n");
printf("4 - Estatísticas\n");
printf("0 - Sair\n");
scanf("%d", &opcao);
switch(opcao){
    case 1:
    printf("digite seu nome: ");
        scanf("%s", nomes[total]);
        printf("\nQual sua idade?");
        scanf("%d", &idades[total]);
        printf("\nDigite seus 3 tempos");
        scanf("%f", &tempos[total][1]);
        scanf("%f", &tempos[total][2]);
        scanf("%f", &tempos[total][3]);
    total++;

    break;
    case 2:
       if(total>0){
    for(int i=0; i<total; i++){
      printf("%s", nomes[i]);
      printf("%d", idades[i]);
     for(int x=0; x<4; x++) {
      printf("%f\n", tempos[i][x]);
      printf("\n");
     }
    }
  } else printf("nao ha atleta cadastrado");
  break;

    case 3:
    printf("Digite o nome de quem quer procurar: \n");
    scanf("%s", procurado);
    for(int cont=0; cont<total; cont++){
        if(strcmp(procurado, nomes[cont]) == 0){
            printf("\no nome do atleta: %s\n", nomes[cont]);
            printf("a idade do atleta: %d\n",idades[cont]);
            for(int i=0; i<3; i++){
            printf("o tempo %d do atleta: %.2f\n",i+1, tempos[cont][i]);
        }
        }else{
         sumido++;
        }
    if(sumido==total){
        printf("atleta não encontrado\n");
    }
}
}
}while(opcao != 0);
return 0;
}