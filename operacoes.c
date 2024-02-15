#include<stdio.h>

int main(){
    int n1;
    int n2;
    int soma;
    int subtrair;
    int multiplicar;
    int dividir;

    printf("Digite um numero e tecle enter: \n");
    scanf("%d",&n1);

    printf("Digite outro numero e tecle enter: \n");
    scanf("%d",&n2);

    soma = n1 + n2;
    subtrair = n1 - n2;
    multiplicar = n1 * n2;
    dividir = n1 / n2;

    printf("O resultado da soma e %d \n",soma);
    printf("O resultado da subtração e %d \n",subtrair);
    printf("O resultado da multipicação e %d \n",multiplicar);    
    printf("O resultado da divisão e %d \n",dividir);

    return 0;
}