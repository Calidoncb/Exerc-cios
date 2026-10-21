#include <stdio.h>
void minmax(int num1, int num2, int num3, int *menor, int *maior){
int max = num1;
if(num2>max){
    max=num2;
}if(num3>max){
    max=num3;
}(*maior) = max;
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
void somaMedia(int n1, int n2, int n3, int *soma, float *media){
(*soma)= n1+n2+n3;
(*media)= (float)(n1+n2+n3)/3;
}
int main(){
int n1, n2, n3, menor, maior, soma;
float media;
printf("digite 3 valores: ");
scanf("%d %d %d", &n1, &n2, &n3);
minmax(n1, n2, n3, &menor, &maior);
somaMedia(n1, n2, n3, &soma, &media);
printf("\no maior número é %d, e o menor é %d", maior, menor);
printf("\na soma dos 3 valores é %d, e a media entre eles é %f\n", soma, media);
    return 0;
}