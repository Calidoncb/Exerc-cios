#include <stdio.h>
/*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A fórmula de conversão é:
F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius. */
int main(){
float celcius=0,far=0;
printf("Digite uma temperatura em graus Celcius: ");
scanf("%f", &celcius);

far=(9*celcius+160)/5;
printf("\nA temperatura em graus Fahrenheit é = %.1f\n", far);
    return 0;
}