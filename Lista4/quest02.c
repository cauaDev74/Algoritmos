#include <stdio.h>
#include <stdlib.h>

int main() {
    int insiraIdade;

    printf("Insira a idade para que seja classificado: ");
    scanf("%d", &insiraIdade);

    switch (insiraIdade)
    {
    case 5 ... 7:
        printf("Infantil A\n");
        break;
    case 8 ... 11:
        printf("Infantil B\n");
        break;
    case 12 ... 13:
        printf("Juvenil A\n");
        break;
    case 14 ... 17:
        printf("Juvenil B\n");
        break;
    case 18:
        printf("Adultos\n");
        break;
    default:
        if(insiraIdade < 5){
            printf("Não possui idade suficiente para participar.\n");
        }else if(insiraIdade > 18){
            printf("Adultos\n");
        }
        break;
    }
    system("pause");
    return 0;
}