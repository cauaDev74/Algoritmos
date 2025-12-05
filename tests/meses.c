#include <stdio.h>
#include <stdlib.h>

int main(){
    int mes;

    printf("Selecione o mes:\n\n\n");

    printf("1 - Janeiro\n");

    printf("2 - Fevereiro\n");

    printf("3 - Março\n");

    printf("4 - Abril\n");

    printf("5 - Maio\n");

    printf("6 -  Junho\n");

    printf("7 - Julho\n");

    printf("8 - Agosto\n");

    printf("9 - Setembro\n");

    printf("10 - Outubro\n");

    printf("11 - Novembro\n");

    printf("12 - Dezembro\n");

    scanf("%d", &mes);

    switch (mes)
    {
    case 1:
        printf("Ano Novo\n");
        break;
    case 2:
        printf("Carnaval\n");
        break;
    case 3:
        printf("N tem\n");
        break;
    case 4:
        printf("Tiradentes e Pascoa\n");
        break;
    case 5:
        printf("Dia do trabalho\n");
        break;
    case 6:
        printf("Sao Joao e Corpus Christi\n");
        break;
    case 7:
        printf("N tem\n");
        break;
    case 8:
        printf("Dia dos pais\n");
        break;
    case 9:
        printf("Independencia do Brasil\n");
        break;
    case 10:
        printf("Aniversario do banco do Brasil\n");
        break;
    case 11:
        printf("Proclamacao da Republica\n");
        break;
    
    case 12:
        printf("Natal\n");
        break;
    
    default:
        break;
    }

}