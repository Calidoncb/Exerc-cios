#include <stdio.h>
/*Ler dois valores para as variáveis A e B, e efetuar as trocas dos valores de forma que a variável A passe a possuir o
valor da variável B e a variável B passe a possuir o valor da variável A. Apresentar os valores trocados.*/
int main(){
int num=0, num2=0,aux=0;
printf("Digite o valor das variáveis num e num2: ");
scanf(" %d %d", &num, &num2);
aux = num;
num = num2;
num2 = aux;
printf("\nA variavel num = %d ,\ne a variavel num2 = %d\n", num,num2);
    return 0;
}