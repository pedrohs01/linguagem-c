#include<stdio.h>

int main(){
    int valores[5] = {1,2,3,4,5};
    printf("exibindo o primeiro valor: %d\n",valores[0]);
    printf("exibindo o segundo valor: %d\n",valores[1]);
    int i;
    for( i = 0; i < 5; i++){
        printf("exibindo: %d\n",valores[i]);
    }
    return 0;
}