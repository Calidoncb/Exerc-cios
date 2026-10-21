#include <stdio.h>
#include <stdlib.h>
/*Faça um algoritmo que receba a idade de 75
 pessoas e mostre mensagem informando “maior de idade” e “menor
de idade” para cada pessoa. Considere maior de idade aquela pessoa com
idade maior ou igual a 18 anos. 

*/
int main()
{
   int idade;
   for(int cont=0;cont<3;cont++){
    printf("\nDigite sua idade: ");
    scanf("%d",&idade);
    if(idade>=18){
        printf("\nmaior de idade\n");
    }else{
        printf("\nmenor de idade");
    }
   }
   
    return 0;
}
