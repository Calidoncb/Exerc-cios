#include <stdio.h>

int main() {
    float n1,n2;
    float soma, sub, mult;
float div;
    printf("digite 2 números: ");
    scanf("%f %f",&n1,&n2);
soma= n1+n2;
sub=n1-n2;
mult=n1*n2;
div = n1/n2;
    printf("a soma dos dois nums, e eles operados em todas as operações básicas matemáticas é:\n soma: %.2f, subtração: %.2f, multiplicação: %.2f, divisão: %.2f\n",soma, sub, mult,div);
    return 0;
}
