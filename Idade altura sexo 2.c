/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float altura;
    int idade;
    char sexo;
    printf("Qual sua altura? \n");
    scanf("%f", &altura);
    printf("Qual sua idade? \n");
    scanf("%d", &idade);
    printf("Qual seu sexo? \n");
    scanf(" %c", &sexo);
    
    printf("sua altura é: %.2fm, sua idade é: %d, seu sexo é: %c\n", altura, idade, sexo);
    
    return 0;
}