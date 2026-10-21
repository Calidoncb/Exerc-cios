#include <stdio.h>
int main(){
    char x[] = "sabedoria";
    char y[] = "ignorante";
    int diferente = 0;
    for(int i = 0; i<3; i++){
        if(x[i]!=y[i]){
           diferente = 1;
           break;
        }
        
        
    }
    if(diferente){
        printf("vetores diferentes");
    }else{
        printf("vetores iguais");
    }
    return 0;
}