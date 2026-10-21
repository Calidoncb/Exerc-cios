#include <stdio.h>
#include <stdlib.h>
int main()
{
    int dia;

    printf("digite o número do dia da semana: ");
    scanf("%d", &dia);

    if(dia == 1){
        printf("domingo");

    }else if(dia == 2 ){
    printf("segunda");
    }else if(dia == 3){
    printf("terça");
    }else if(dia == 4){
    printf("quarta");
    }else if(dia == 5){
    printf("quinta");
    }else if(dia == 6){
    printf("sexta");
    }else if(dia == 7){
    printf("sábado");
    }else {
    printf("não está no escopo da semana");
    }
    return 0;
}
