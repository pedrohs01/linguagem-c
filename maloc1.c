#include<stdio.h>
#include<stdlib.h>

int main(){

    int *ptr_int;
    ptr_int = (int *)malloc(sizeof(int));

    printf("endereço reservado %p\n",ptr_int);

    if(ptr_int==NULL){
        printf("erro ao tentar alocar memoria\n");
        return 1;//para a excução do programa

    }

    printf("digite um numero: \n");
    scanf("%d",ptr_int);

    printf("o valo digitado  %d e ele está em %p\n",*ptr_int,ptr_int);
    free(ptr_int);
    return 0;

}