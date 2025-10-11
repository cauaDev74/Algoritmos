#include <stdio.h>
#include <stdlib.h>

int Divisivel(a, b){
    int a, b;


    printf("Insira o dividendo: ");
    scanf("%d", &a);
    printf("Insira o divisor: ");
    scanf("%d", &b);

    if(b == 0){
        printf("N existe divisao por zero!!\n");
    }

    if(a % b == 0){
        printf("%d é divisivel por %d\n", a, b);
    } else{
        printf("%d não é divisivel por %d", a, b);
    }
    
    return 0;
}