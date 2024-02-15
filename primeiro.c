/*
Este programa pede ao usuario um numero qualquer e depois exibe o numero na tela
*/

#include <stdio.h> //estamos importando um bliblioteca para trabalhar com entrada e saida de dados

int main(){
    int idade; //declaraçao da variavel idade do tipo inteira
    printf("Digite a sua idade e tecle enter\n");
    scanf("%d",&idade); //para pegar o numero digitado pelu usser
                        //estamos usando o comando scanf e adicionando 
                        //o valor digitado ao endereço de memoria
                        //da variavel idade usamos o e-comercial para 
                        //refereciar o endereço de memoria da variavel
                        //idade
    printf("A idade digitada é %d\n endereço da variavel idade %x \n",idade, &idade);
    return 0;                    
}