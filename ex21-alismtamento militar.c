#include <stdio.h>
#include <stdlib.h>
/*
 * 21. Escrever um algoritmo que leia os dados de �N� pessoas (nome, sexo, idade e sa�de)
 e informe se est� apta ou n�o para cumprir o servi�o militar obrigat�rio. Informe os totais.*
 */
int main() {
    int n_pessoas, qnt_aptos = 0, qnt_naptos = 0;
    char nome[20], sexo, saude;
    int idade;

    printf("entre com a quantidade de pessoas:");
    scanf("%d", &n_pessoas);

    for(int cont=0;cont<n_pessoas; cont++) {
        printf("entre com o nome:");
        scanf(" %s", nome);
        printf("entre com o sexo (m/f):");
        scanf(" %c", &sexo);
        printf("entre com a idade:");
        scanf("%d", &idade);
        printf("saude (b - Bom, r - Ruim):");
        scanf(" %c", &saude);

        if ((idade >= 18) && (saude == 'b') && (sexo == 'm')) {
            printf("%s esta' apta ao servico militar.\n", nome);
            qnt_aptos++;
        }
        else {
            printf("%s nao apta ao servico militar.\n", nome);
        }


    }

    qnt_naptos = n_pessoas - qnt_aptos;

    printf("Totais:\nAptos:%d\nNao Aptos:%d\n", qnt_aptos, qnt_naptos);

    return 0;
}
