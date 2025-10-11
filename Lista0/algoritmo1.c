#include <stdio.h>
#include <stdlib.h>

int main(){
    int anoatual, anodenascimento, idade;

    printf("Insira o ano atual: \n");
    scanf("%d", &anoatual);
    printf("Insira seu ano de nascimento: \n");
    scanf("%d", &anodenascimento);

    idade = anoatual - anodenascimento;

    printf("Idade: %d\n", idade);

    return 0;
}