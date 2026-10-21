#include <stdio.h>
void minmax(int num1, int num2, int num3, int *menor, int *maior){
int max = num1;
if(num2>max){
    (*maior)=num2;
}if(num3>max){
    (*maior)=num3;
}
int min = num1;
if(num2<min){
    min = num2;
}if(num3<min){
    min = num3;
} 
(*menor) = min;



    /*if(num1>num2 && num1>num3){
    (*maior) = num1;
}else if(num2>num1 && num2>num3){
    (*maior) = num2;
}else if(num3>num1 && num3>num2){
    (*maior) = num3;
}
if(num1<num2 && num1<num3){
    (*menor) = num1;
}else if(num2<num1 && num2<num3){
    (*menor) = num2;
}else if(num3<num1 && num3<num2){
    (*menor) =  num3;
}*/
}
int main(){
int n1, n2, n3, menor, maior;
printf("digite 3 valores: ");
scanf("%d %d %d", &n1, &n2, &n3);
minmax(n1, n2, n3, &menor, &maior);
printf("\no maior número é %d, e o menor é %d", maior, menor);
    return 0;
}