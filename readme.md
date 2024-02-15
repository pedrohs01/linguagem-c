# Estudo da linguagem C
## Neste repositorio será e publicado arquivos escritos em C

<img src="https://giovanidacruz.com.br/wp-content/uploads/2022/11/C-programming-1024x530-1.jpg" height="150" width="300">

### Abaixo é apresentado os arquivos deste repositorio

#### hello.c

```c
#include <stdio.h>
int main(){
    printf("hello,Word\n");
    return 0;
}
```
#### primeiro.c

```c
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
```

#### operacoes.c

```c
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
```
#### desconto_produto.c

```c
#include <stdio.h>

int main(){
    float preco;
    float percentual;
    float resultado;
    float vdesc;

    printf ("Digite o preço do produto: \n");
    scanf("%f",&preco);

    printf ("Digite o desconto do produto: \n");
    scanf("%f",&percentual);

    resultado = preco - (preco * ( percentual / 100));

    vdesc = preco - resultado;

    printf("O preço final do produto com desconto de %2.2f é %2.2f\n",vdesc,resultado);
    return 0;
}
```


