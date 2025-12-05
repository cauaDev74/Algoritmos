#include <stdio.h>
#include <stdlib.h>

int main(){
    int code;
    int c1 = 0, c2 = 0, c3 = 0, c4 = 0;
    int branco = 0;
    int nulo = 0;
    int totalVotos;
    float percentNull;
    float percentWhite;

    do{

        printf("-------SELECIONE O CANDIDATO-------\n\n");
        printf("1 - Ze do Pagode.\n");
        printf("2 - Serginho Sacana.\n");
        printf("3 - Elton Jon\n");
        printf("4 - Wendel Lagartixa.\n");
        printf("5 - Nulo\n");
        printf("6 - Branco\n");
        printf("0 - Sair\n\n");
    
        printf("Escolha: ");
        scanf("%d", &code);
    
        switch (code)
        {
        case 1:
            c1++;
            break;
        case 2:
            c2++;
            break;
        case 3:
            c3++;
            break;
        case 4:
            c4++;
            break;
        case 5:
            nulo++;
            break;
        case 6:
            branco++;
            break;
        default:
            nulo++;
            break;
        }
    }while(code != 0);

    totalVotos = c1 + c2 + c3 + c4 + nulo + branco;
    
    printf("Total de votos: %d\n", totalVotos);

    percentNull = ((float) nulo/totalVotos) * 100;

    printf("Percentual de votos Nulos: %.1f%%\n", percentNull);

    percentWhite = ((float) branco/totalVotos) * 100;

    printf("Percentual de votos Brancos: %.1f%%\n", percentWhite);
    


    return 0;
}