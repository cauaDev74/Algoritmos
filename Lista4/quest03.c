#include <stdio.h>
#include <stdlib.h>

int main(){
    int codigoProduto;

    printf("SELECIONE O PRODUTO\n\n\n");

    printf("Código dos produtos: \n\n");

    printf("Produto 1 -> 1001\n");
    printf("Produto 2 -> 1324\n");
    printf("Produto 3 -> 6548\n");
    printf("Produto 4 -> 987\n");
    printf("Produto 5 -> 7623\n\n");

    printf("Insira codigo: ");
    scanf("%d", &codigoProduto);
    
    switch (codigoProduto)
    {
    case 1001:
        printf("Produto 1:\n\n");
        printf("Unit price: R$5,32 \n");
        break;
    case 1324:
        printf("Produto 2:\n\n");
        printf("Unit price: R$6,45 \n");
        break;
    case 6548:
        printf("Produto 3:\n\n");
        printf("Unit price: R$2,37");
        break;
    case 987:
        printf("Produto 4:\n\n");
        printf("Unit price: R$5,32 \n");
        break;
    case 7623:
        printf("Produto 5:\n\n");
        printf("Unit price: R$6,45 \n");
        break;
    default:
        printf("Product not found.\n");
        break;
    }

    system("pause");
    return 0;
}