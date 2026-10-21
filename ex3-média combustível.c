/******************************************************************************

Escrever um algoritmo para determinar o consumo médio de um automóvel sendo fornecida a distância total
percorrida pelo automóvel e o total de combustível gasto.
*******************************************************************************/
#include <stdio.h>

int main()
{
  float dist;
  float comb;
  float media;
  
  printf("Digite a distância total percorrida pelo automóvel: ");
  scanf("%f", &dist);
  printf("\nDigite o total de combustíver gasto pelo automóvel: ");
  scanf("%f", &comb);
  
  media = dist/comb;
  printf("\n o consumo médio de combustível do automóvel é: %.2f", media);
  return 0;
}