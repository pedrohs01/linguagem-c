#include<stdio.h>
#include<stdlib.h>

int main(){
    int *array;
    int tamanho = 5;

    array = (int *)malloc(tamanho * sizeof(int));

    if(array == NULL){
        printf("erro na alocação de memoria\n");
       return 1;
    }

    for(int i = 0 ; i < tamanho ; i++){
        array[i] = i + 1;
    }

    printf("exibindo os dados do array\n");
    for(int j = 0 ; j < tamanho ; j++){
        printf("%d -", array[j]);
    }
    free(array);
    return 0;
}