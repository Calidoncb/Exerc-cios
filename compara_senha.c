#include <stdio.h>
#include <string.h>
#define TAM 50
int main(){
char secreto[TAM] = "mecatronica";
char senha[TAM];

printf("Digite a senha: ");
scanf(" %49s", senha);

if(strcmp(senha, secreto) == 0){
    printf("\npermitir acesso");
}else{
    printf("\nsai daqui porra");
}
    return 0;
}