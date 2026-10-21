#include <stdio.h>
/*A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) prestações sem juros. Faça um algoritmo
que receba um valor total de uma compra e mostre o valor das prestações.  */
int main(){
float compra=0,prestacao=5,valor;
printf("Digite o valor da compra: ");
scanf("%f",&compra);
valor = compra/prestacao;
printf("\nO valor de cada prestação é = %.2f\n",valor);
    return 0;
}