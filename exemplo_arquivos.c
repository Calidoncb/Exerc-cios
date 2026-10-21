#include <stdio.h>

int main(void){
    FILE *arquivo;
    arquivo = fopen("dados.txt", "r");
     if(arquivo == NULL){
     printf("erro ae parça\n");
     return 1;
    }
    char linha[100];
    while(fgets(linha, 100, arquivo) != NULL){
        printf("%s", linha);
    }
    fprintf(arquivo, "Texto gravado no arquivo\n");
    fclose(arquivo);
    return 0;
}