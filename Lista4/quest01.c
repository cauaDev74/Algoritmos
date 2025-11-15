#include <stdio.h>
#include <stdlib.h>

int main(){
    int selection;

    printf("++ Seasons ++\n\n");

    printf("1 - Spring\n");
    printf("2 - Summer\n");
    printf("3 - Fall\n");
    printf("4 - Winter\n\n");

    scanf("%d", &selection);

    switch (selection){
    case 1:
        printf("A primavera eh muito bonita\n");
        break;
    case 2:
        printf("Muito quente pqp!!\n");
        break;
    case 3:
        printf("Folhas caindo\n");
        break;
    case 4:
        printf("Frio pra garai\n");
        break;
    default:
        break;
    }

    system("pause");
    return 0;
}