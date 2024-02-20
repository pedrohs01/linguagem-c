#include <stdio.h>
 
int main() {
    int c1[10] = {10,5,68,8,47,12,54,13,62,11};
    int c2[15] = {11,5,62,112,84,76,12,55,59,85,13,0,14,19,18};
    int tamanho1 = sizeof(c1) / sizeof(c1[0]);
    int tamanho2 = sizeof(c2) / sizeof(c2[0]);
 
    printf("Números iguais nas duas coleções:\n");
 
    for (int i = 0; i < tamanho1; i++) {
        for (int j = 0; j < tamanho2; j++) {
            if (c1[i] == c2[j]) {
                printf("%d\n", c1[i]);
                break; // Para evitar imprimir o mesmo número duas vezes
            }
        }
    }
 
    return 0;
}