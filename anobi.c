#include <stdio.h>

int main(){
    int num;
    printf("Digite o ano: \n");
    scanf("%d",&num);

    if( num %  4 == 0){
        printf("Esse ano e bisexto \n");
    }
    else{
        printf("Esee ano nao e bisexto \n");
    }
    return 0;

    }