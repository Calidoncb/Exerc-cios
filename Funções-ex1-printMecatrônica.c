#include <stdio.h>
#include <stdlib.h>
void caracteres(char c){
 for(int i=0; i<10;i++){
    printf("%c",c);
 }
 printf("\n");
}
void mecatronica(void){
    printf("Mecatrônica\n");
}
int main(){
   
    caracteres('=');
    mecatronica();
    caracteres('#');
    return 0;
}
