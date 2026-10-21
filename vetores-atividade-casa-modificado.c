#include <stdio.h>
/*
Escreva um programa que leia um vetor de 8 números inteiros e exiba:
1. Todos os valores na ordem inversa da leitura.
2. Quantos valores são maiores que a média.

Desafio: Modifique o programa para que, ao invés de imprimir na ordem inversa diretamente, ele primeiro inverta o vetor em memória (trocando `v[0]` com `v[7]`, `v[1]` com `v[6]`, etc.) e depois o exiba na ordem normal.*/

#define TAM 5

int main(void) {
    int vetor[TAM];
    int soma = 0, cont_maiores=0;
    float media;
    int aux;

    for(int i=0; i<TAM; i++) {
        printf("entre com o valor %d:", i+1);
        scanf("%d", &vetor[i]);

        soma = soma + vetor[i];
    }

    media = (float)soma / TAM;

    for(int i=0; i<TAM; i++) {
        if (vetor[i] > media) {
            cont_maiores++;
        }
    }

    for(int i=0; i<(TAM/2); i++){
        aux = vetor[TAM-1-i];
        vetor[TAM-1-i]=vetor[i];
        vetor[i] = aux;

        }
        
    for(int i=TAM-1; i>=0; i--) {
        printf("vetor[%d] = %d\n", i, vetor[i]);
    }

    printf("quantidade de valores acima da media: %d\n", cont_maiores);


    return 0;
}