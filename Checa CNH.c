#include <stdio.h>
/* O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor e dos
impostos (aplicados, primeiro os impostos sobre o custo de fábrica, e depois a percentagem do distribuidor sobre
o resultado). Supondo que a percentagem do distribuidor seja de 28% e os impostos 45%. Escrever um algoritmo
que leia o custo de fábrica de um carro e informe o custo ao consumidor do mesmo.*/
int main()
{
  float fabrica, dist=0.28, impostos=0.45, res1;
  printf("Digite o custo de fábrica do carro: ");
  scanf("%f",&fabrica);
  dist = dist*fabrica;
res1 = fabrica+dist;
impostos = impostos*res1;
res1= res1+impostos;
printf("\nO custo do consumidor para o carro é de: %.2f\n",res1);

    
    return 0;
}