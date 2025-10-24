#include <stdio.h>
#include <stdlib.h>

int main(){
    float n[4];
    int i;
    float p1 = 1,p2 = 2,p3 = 3,p4 = 4;
    float media;

    for(i = 0; i<4;i++){
        printf("Insira a nota: ");
    scanf("%f", &n[i]);
    }
    
    
    media = ((n[0]*p1)+(n[1]*p2)+(n[2]*p3)+(n[3]*p4)) / (p1+p2+p3+p4);

    printf("A media das notas eh: %.1f\n", media);
}