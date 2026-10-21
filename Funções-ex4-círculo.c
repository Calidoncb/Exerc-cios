#include <stdio.h>
/*
Escreva um programa em linguagem C, utilizando funções, que leia 5 valores que representam raios
de círculos. Para cada valor informado imprimir a área e seu perímetro.
*/
void areacirculo(float raio){
printf("\na área do círculo é: %.2f", 3.14*(raio*raio));
}
void compcirculo(float raio){
    printf("\no comprimento do círculo é: %.2f", 2*3.14*raio);
}
int main(){
    float raio, area, comp;
    for(int i=0; i<5; i++){
    printf("\nDigite os raios de 5 círculos: ");
    scanf("%f",&raio);
    areacirculo(raio);
    compcirculo(raio);
}
    return 0;
}