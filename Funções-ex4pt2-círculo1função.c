#include <stdio.h>
#define PI 3.14

void calccirculo(float raio, float *area, float *comp){
(*area)= PI*(raio*raio);
(*comp) = 2*PI*raio;
}
int main(){
    float raio, area, comp;
    for(int i=0; i<5; i++){
    printf("\nDigite os raios de 5 círculos: ");
    scanf("%f",&raio);
    calccirculo(raio, &area, &comp);
    printf("\na área é %.2f, e o comprimento é: %.2f",area, comp);
    
}
    return 0;
}