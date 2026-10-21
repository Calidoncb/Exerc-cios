#include <stdio.h>
#include <stdlib.h>
//Código de Augusto Calidon Correa Beber e Afonso Frederico Exner de Macedo
int main()
{
    int secreto = 42, dif=0, num=0,cont=1;
    do{
    printf("Adivinhe o número secreto (entre 1 e 100)");
    scanf("%d",&num);
    dif = secreto-num;
    if(dif<0){
        dif = dif*-1;
    }
    printf("\nSua diferença para o número secreto é: %d\n", dif);
    if(num<secreto){
        printf("Muito baixo! Teste um número maior");
    }else if(num>secreto){
    printf("Muito alto! Tente um número menor");
    }else if(num == secreto){
    printf("Parabéns! Você acertou!");
    printf("\nVocê acertou em %d tentativa(s)",cont);
    }
    cont++;
    }while(num!=secreto);
    return 0;
}
