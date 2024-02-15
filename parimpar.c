#include <stdio.h>

int main(){
    int num;
    printf("Digite um numero: \n");
    scanf("%d",&num);

    if( num % 2 == 0){
        printf("Esse numero e par \n");
    }
    else{
        printf("Este numero e impar \n");
    }
    return 0;
}