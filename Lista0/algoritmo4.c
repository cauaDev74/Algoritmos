#include <stdio.h>
#include <stdlib.h>

int main(){
    int idadeA, idadeM, idadeD, idadeH, idadeMIN;

    printf("Insira sua Idade: ");
    scanf("%d", &idadeA);

    idadeM = idadeA * 12;
    idadeD = idadeA * 365;
    idadeH = idadeA * (365 * 24);
    idadeMIN = idadeA * ((365 * 24) * 60);


    printf("Idade em anos: %d\n", idadeA);
    printf("Idade em meses: %d\n", idadeM);
    printf("Idade em dias: %d\n", idadeD);
    printf("Idade em horas: %d\n", idadeH);
    printf("Idade em minutos: %d\n", idadeMIN);

    return 0;
}