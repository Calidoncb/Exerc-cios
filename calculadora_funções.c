#include <stdlib.h>
#include <stdio.h>
float soma(float num1, float num2){
float aux=0;
aux = num1+num2;
return aux;

}
float sub(float num1, float num2){
float aux=0;
aux = num1-num2;
return aux;
}
float mult(float num1, float num2){
float aux=0;
aux = num1*num2;
return aux;
}
float divi(float num1, float num2){
float aux=0;
aux = num1/num2;
if(aux != 0){
    return aux;
}else{
return 0;
}
}
int main() {
    float num1, num2, resultado;
    int opcao;

    printf("Escolha a operacao:\n");
    printf("1 - Soma\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("Digite dois numeros: ");
    scanf("%f %f", &num1, &num2);

    switch (opcao) {
        case 1:
            resultado = soma(num1,num2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 2:
            resultado = sub(num1,num2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 3:
            resultado = mult(num1,num2);
            printf("Resultado: %.2f\n", resultado);
            break;

        case 4:
           resultado = divi(num1,num2);
            if (resultado != 0) {
                printf("Resultado: %.2f\n", resultado);
            } else {
                printf("Erro: divisao por zero!\n");
            }
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}


