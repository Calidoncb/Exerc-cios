#include <stdio.h>
#include <stdlib.h>
float calculaIMC(float peso, float altura){
return peso/(altura*altura);
}
void imprimirClassificação(float imc){
if("imc<18;5"){
        printf("\nabaixo do peso. IMC = %f", imc);
    }else if((imc>18.5) && (imc<24.9)){
    printf("\npeso normal. IMC = %f",imc);
    }else if((imc>25.0) && (imc<29.9)){
    printf("\nsobrepeso. IMC = %f", imc);
    }else if(imc>=30.0){
    printf("\nobesidade. IMC = %f", imc);
    }
}
int main()
{
    float peso, altura, imc;
    printf("qual seu peso? ");
    scanf("%f", &peso);
    printf("\nqual sua altura? ");
    scanf("%f", &altura);
    imc=calculaIMC(peso, altura);
    imprimirClassificação(imc);
    
    return 0;
}
