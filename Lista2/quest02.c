#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,h;
    printf("Insira cateto A: ");
    scanf("%d", &a);
    printf("Insira cateto B: ");
    scanf("%d", &b);

    h = (a*a)+(b*b);
    printf("Hipotenusa: %d\n", h);
} 