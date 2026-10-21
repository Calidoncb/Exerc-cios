#include <stdio.h>
#define TAM 5
int main(){
    int nota[TAM], soma = 0;
    for(int i=0; i<TAM; i++){
        printf("Entre com a nota %d:\n", i+1);
        scanf("%d", &nota[i]);
    }
    for(int i=0; i<TAM; i++){
        soma = soma + nota[i];
    }
    printf("media = %.2f\n", (float)soma/TAM);
    return 0;
}