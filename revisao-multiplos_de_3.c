#include <stdio.h>
//Calcule a soma dos múltiplos de 3 ou 5 até um valor N digitado.
int main(){
int soma=0;
int tam;
printf("Digite quantos multiplos de 3: ");
scanf("%d", &tam);
for(int cont=1; cont<=tam; cont++){
    if(cont%3==0){
        soma++;
    }
}
printf("\nTemos %d de múltiplos de 3\n", soma);
    return 0;
}