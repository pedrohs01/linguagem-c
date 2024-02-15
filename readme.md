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
#### notaaluno.c

```c
#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float notam;

    printf ("Digite a primeira nota do aluno: \n");
    scanf("%f",&nota1);

    printf ("Digite a segunda nota do aluno: \n");
    scanf("%f",&nota2);

    printf ("Digite a terceira nota do aluno: \n");
    scanf("%f",&nota3);

    printf ("Digite a quarta nota do aluno: \n");
    scanf("%f",&nota4);

    notam = (nota1 + nota2 + nota3 + nota4) / 4;


    printf("A nota media do aluno é %2.2f\n",notam);
    return 0;
}
```

#### desvio de fluxo: parimpar.c

```c
#include <stdio.h>

int main(){
    float nota1;
    float nota2;
    float nota3;
    float nota4;
    float notam;

    printf ("Digite a primeira nota do aluno: \n");
    scanf("%f",&nota1);

    printf ("Digite a segunda nota do aluno: \n");
    scanf("%f",&nota2);

    printf ("Digite a terceira nota do aluno: \n");
    scanf("%f",&nota3);

    printf ("Digite a quarta nota do aluno: \n");
    scanf("%f",&nota4);

    notam = (nota1 + nota2 + nota3 + nota4) / 4;


    printf("A nota media do aluno é %2.2f\n",notam);
    return 0;
}
```

#### Desvio de fluxo: media_aluno.c

```c
/*
Neste programa iremos calcular a nota média do 
aluno. Teremos a entrada de 4 notas, depois será
feito o cálculo da média, onde iremos somar as notas 
e depois dividir por 4 se o aluno tiver uma media,
acima ou igual a 7, então estará aprovado; caso o aluno de tenha
uma nota menor ou igual a 4, então o aluno estará aprovado;
caso contrário, estará em recuperação
*/

#include <stdio.h>

int main(){
    float n1,n2,n3,n4,md;
    printf("Digite a primeira nota: \n");
    scanf("%f",&n1);

    printf("Digite a segunda nota: \n");
    scanf("%f",&n2);

    printf("Digite a tercira nota: \n");
    scanf("%f",&n3);

    printf("Digite a quarta nota: \n");
    scanf("%f",&n4);

    md = (n1+n2+n3+n4) / 4;
     
    printf("A nota media do aluno é %2.2f \n",md);

    if(md >= 7){
        printf("Aprovado \n");
    }

    else if(md <= 4){
        printf("Reprovado \n");
    }

    else{
        printf("Recuperação \n");
    }
    return 0;
}
```
#### Desvio de fluxo: anobi.c

```c
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
```