/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   char turno;
   int hora;
   float temp;
   printf("digite o turno: \n");
   scanf(" %c", &turno);
   printf("digite o horário de registro: \n");
   scanf("%d", &hora);
   printf("digite a temperatura: \n");
   scanf("%f", &temp);
   
   printf("o turno é:%c, o horário de registro é %dh, e a temperatura é %.2f°C ", turno, hora, temp);
   return 0;
}