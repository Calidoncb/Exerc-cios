#include <stdio.h>
#include <stdlib.h>
#define MAX 12
typedef struct{
    char nome[50];
    int vitorias;
    int derrotas;
    float pontos;
}times_t;
//--------------------------------------------------------------------------------------------------------//


//--------------------------------------------------------------------------------------------------------//
times_t registro(){
    times_t registrado;
    printf("Digite o nome do seu time: \n");
    scanf(" %s", registrado.nome);
    printf("Digite total de vitorias: \n");
    scanf("%d", &registrado.vitorias);
    printf("Digite o total de derrotas: \n");
    scanf("%d", &registrado.derrotas);
    printf("Digite sua pontuacao: \n");
    scanf("%f", &registrado.pontos);
    return registrado;
}

//Afonso Frederico Exner de Macedo
//08:54 (há 1 minuto)
//para mim

times_t modifica(times_t mod){
int opi;
printf("Digite o que deseja modificar: \n");
printf("(1) - nome do time: \n");
printf("(2) - total de vitorias: \n");
printf("(3) - total de derrotas: \n");
printf("(4) - pontuação: \n");
scanf("%d", &opi);
switch(opi){
case 1:
    printf("escreva o novo nome do time \n");
    scanf(" %s", mod.nome);
    printf("modificacao realizada \n");
    break;
case 2:
    printf("digite o novo total de vitorias \n");
    scanf("%d", &mod.vitorias);
    printf("modificacao realizad \n");
    break;
case 3:
    printf("digite o novo toptal de derrotas \n");
    scanf("%d", &mod.derrotas);
    printf("modificacao realizada \n");
    break;
case 4:
    printf("digite a nova pontuacao \n");
    scanf("%f", &mod.pontos);
    printf("modificacao realizada \n");
    break;
}
return mod;

}

times_t leitura(){
times_t ler[MAX];
FILE *arquivo;
arquivo = fopen("registro_competidores.txt", "r");
for(int i=0; i<MAX; i++){
fscanf(arquivo, "%s %d %d %f", ler[i].nome, ler[i].vitorias, ler[i].derrotas, ler[i].pontos);
printf("%s %d %d %f", ler[i].nome, &ler[i].vitorias, &ler[i].derrotas, &ler[i].pontos);
}

fclose(arquivo);
return ler[];
}
int main(){
    FILE *arquivo;
   int opcao;
   int cont=0;
   times_t times[MAX];
   times[]=leitura();
   do{
    printf("Bem vindo ao menu da competição tal!\n");
    printf("Temos as seguintes opções: \n");
    printf("(1) - registra o time: \n ");
    printf("(2) - modifica os valores do time: \n");
    printf("(3) - salva os arquivos \n ");
    printf("(-1) - finaliza o programa \n");
    scanf("%d", &opcao);
    switch(opcao){
     case 1:
     times[cont] = registro();
     printf("%s %d %d %f", times[cont].nome, times[cont].vitorias, times[cont].derrotas, times[cont].pontos);
     //arquivo = fopen("registro_competidores.txt", "a");
     //fprintf(arquivo, "%s %d %d %.2f\n", times[cont].nome, times[cont].vitorias, times[cont].derrotas, times[cont].pontos);
     //fclose(arquivo);
     cont = cont+1;
      break;
     case 2:
         ;
         int num;
        printf("Digite o número do time: ");
        scanf("%d", &num);
        times[num] = modifica(times[num]);
        break;
        case 3:
        ;
        arquivo = fopen("registro_competidores.txt", "a+");
        for(int i=0; i<MAX;i++){
        fprintf(arquivo, "%s %d %d %.2f\n", times[i].nome, times[i].vitorias, times[i].derrotas, times[i].pontos);
        };
        fclose(arquivo);
    }
}while(opcao!=-1);

    return 0;
}

