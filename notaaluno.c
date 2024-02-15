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