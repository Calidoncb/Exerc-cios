#include <stdio.h>
#define TAM 6
int main(){
    float temp[TAM], max, min, soma=0;
    for(int i=0; i<TAM; i++){
        printf("Digite a temperatura %d:\n", i+1);
        scanf("%f", &temp[i]);
    }
    max = temp[0];
    min = temp[0];
    for(int i=1; i<TAM; i++){
        if(temp[i]>max){
            max = temp[i];
        }
        if(temp[i]<min){
            min = temp[i];
        }
    }
    for(int i=0; i<TAM; i++){
     soma = soma + temp[i];
    }
    printf("a temp máxima é %.2f, a mínima é %.2f, e a media é %.2f", max, min, soma/TAM);
    return 0;
}