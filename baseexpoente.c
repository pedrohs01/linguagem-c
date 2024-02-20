#include<stdio.h>

int main(){
    int bas, exp, i, b;
    printf("Digite um número:\n");
    scanf("%d",&bas);

    printf("Digite o expoente:\n");
    scanf("%d",&exp);

    b=bas;
    for(i = 1 ; i < exp ; i++){
        // bas *= b;
        bas = bas * b;
    } 

    printf("%d\n",bas);

    return 0;
}