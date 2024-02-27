#include<stdio.h>
int main(){
    FILE *arquivo;
    char texto[1000];

    //abre o arquivo para escrita
    arquivo = fopen("exemplo.txt","w");

    if (arquivo == NULL){
        printf("erro ao abrir o arquivo.\n");
        return 1;
    }

    //escreve no arquivo
    fprintf(arquivo, "Se por te beijar tivesse que ir depois para o inferno, eu faria isso. Assim poderei me gabar aos demônios de ter estado no paraíso sem nunca entrar.");

    //fecha o arquivo
    fclose(arquivo);

    //abre o arquivo
    arquivo = fopen("exemplo.txt", "r");

    if (arquivo == NULL){
        printf("erro ao abrir o arquivo.\n");
        return 1;
    }

    //lê o conteúdo do arquivo e imprime na tela 
    fgets(texto, 100, arquivo);
    printf("conteúdo do arquivo: %s\n", texto);

    //fecha o arquivo
    fclose(arquivo);

    return 0;    

}