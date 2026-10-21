#include <stdio.h>
//Conte quantos números primos existem entre 1 e 100.
#define TAM 100
int main(){
int cont=0;
for(int i=0; i<TAM; i++){
    if(i%i/2==0){
        cont++;
    }
}
printf("Existem %d números primos entre 1 e 100\n", cont);
    return 0;
}