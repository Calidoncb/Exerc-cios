#include <stdio.h>
/* Escrever um algoritmo que leia dois valores inteiro distintos e informe qual é o maior. */
int main()
{
int num1, num2;

printf("Digite 2 números: ");
scanf("%d %d",&num1,&num2);
if(num1>num2){
    printf("\nnum1 é maior que num2\n");
}else if(num2>num1){
    printf("\nnum2 é maior que num1\n");
}else{
    printf("\nos dois são iguais\n");
}


    return 0;
}