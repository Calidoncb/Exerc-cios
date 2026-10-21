#include <stdio.h>
#include <stdlib.h>
/*Escrever um algoritmo que leia o nome e o sexo de 56 pessoas e 
informe o nome dessa pessoa e se ela é homem
ou mulher. No final informe total de homens e de mulheres. 
*/
int main()
{
  int conth=0,contm=0;
  char nome[20],sexo;
   for(int i=0;i<2;i++){
    printf("\nDigite seu nome: ");
    scanf(" %s",nome);
    printf("\ndigite seu sexo: (h = homem, m = mulher) ");
    scanf(" %c",&sexo);
    if(sexo == 'h'){
        printf("\nSeu nome é %s e seu sexo é masculino", nome);
        conth++;
    }else if(sexo == 'm'){
        printf("\nSeu nome é %s e seu sexo é feminino", nome);
        contm++;
    }else{
        printf("\nletra inválida");
    }
   }
   printf("\no total de homens é %d, e o total de mulheres é %d", conth, contm);
    return 0;
}
