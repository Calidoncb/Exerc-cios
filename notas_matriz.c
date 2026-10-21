#include <stdio.h>
#include <string.h>
#define TAM 3
int main(){
float notas[TAM][TAM];
float cont, media;
for(int lin=0;lin<TAM; lin++){
    for(int col=0; col<TAM; col++){
        printf("Digite a nota da %d disciplina: \n", lin+1);
        scanf("%f", &notas[lin][col]);
    }
}
for(int lin=0; lin<TAM; lin++){
    for(int col=0; col<TAM; col++){
        printf("%.1f", notas[lin][col]);
        printf(" ");
    }
    printf("\n");
}
for(int lin=0; lin<TAM; lin++){
    for(int col=0; col<TAM; col++){
    cont = cont + notas[col][lin];
    }
    media = cont/TAM;
    printf("\nA média das notas da disciplina %d é %.1f", lin, media);
    media=0;
}
    return 0;
}