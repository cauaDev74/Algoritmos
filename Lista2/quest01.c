#include <stdio.h>
#include <stdlib.h>

int main(){
    float n1, n2, n3, n4;
    float p1 = 1,p2 = 2,p3 = 3,p4 = 4;
    float media;

    printf("Insira a nota: ");
    scanf("%f", &n1);
    printf("Insira a nota: ");
    scanf("%f", &n2);
    printf("Insira a nota: ");
    scanf("%f", &n3);
    printf("Insira a nota: ");
    scanf("%f", &n4);
    
    media = ((n1*p1)+(n2*p2)+(n3*p3)+(n4*p4)) / (p1+p2+p3+p4);

    printf("A media das notas eh: %.1f\n", media);
}