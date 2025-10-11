#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, B, C;
    A=30;
    B=20;
    C=A+B;
    printf("%d\n",C);
    B=10;
    printf("%d %d\n",B,C);
    C=A+B;
    printf("%d %d %d\n",A,B,C);
}