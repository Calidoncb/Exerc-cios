#include <stdio.h>
int main(){
    char nome[50];
    int cont = 0;
    printf("digite seu nome: ");
    scanf(" %s", nome);

    for(int i=0; i<50; i++){
        if(nome[i]!='\0'){
        cont++;
        }else{
            break;
        }
    }
    printf("\nseu nome tem %d letras", cont);
    return 0;
}