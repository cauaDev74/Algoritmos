#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o dividendo: ");
    scanf("%d", &a);

    printf("Digite o divisor: ");
    scanf("%d", &b);

    if (b == 0) {
        printf("Erro: Divisão por zero não é permitida.\n");
        return 1;
    }

    if (a % b == 0) {
        printf("%d é divisível por %d.\n", a, b);
    } else {
        printf("%d não é divisível por %d.\n", a, b);
    }

    return 0;
}
