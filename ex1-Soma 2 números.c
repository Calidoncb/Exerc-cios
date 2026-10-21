/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int n1,n2;
  int soma;
  printf("Digite 2 números: ");
  scanf("%d %d", &n1, &n2);
  soma = n1+n2;
  
  printf("\n a soma desses valores é %d ",soma);
  return 0;
}