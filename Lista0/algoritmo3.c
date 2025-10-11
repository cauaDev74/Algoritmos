#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota1, nota2, media; 
    int peso1, peso2;

    printf("Insira sua nota 1: ");
    scanf("%f", &nota1);
    printf("Insira os peso 1: ");
    scanf("%d", &peso1);
    printf("Insira suas nota 2: ");
    scanf("%f", &nota2);
    printf("Insira os peso 2: ");
    scanf("%d", &peso2);


    media = (nota1 * peso1) + (nota2 * peso1) / (peso1 + peso2);

    printf("Media ponderada: %.1f", media);

    return 0;
}