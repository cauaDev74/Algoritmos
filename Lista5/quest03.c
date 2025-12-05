#include <stdio.h>
#include <stdlib.h>

int main(){
    int pessoa[15];
    int fh1 = 0;
    int fh2 = 0;
    int fh3 = 0;
    int fh4 = 0;
    int fh5 = 0;

    for(int i = 0; i < 15; i++){
        printf("Insira a idade: ");
        scanf("%d", &pessoa[i]);

        switch (pessoa[i])
        {
        case 1 ... 15:
            fh1++;
            break;
        case 16 ... 30:
            fh2++;
            break;
        case 31 ... 45:
            fh3++;
            break;
        case 46 ... 60:
            fh4++;
            break;
        default:
            if(pessoa[i] <= 0){
                printf("Idade invalida tente novamente.\n");
            }else if(pessoa[i] >= 61){
                fh5++;
            }
            break;

        }
    }




        printf("Pessoas por faixa etaria: \n\n\n");
    printf("Pessoas de 1 a 15 anos: %d Percentual: %.1f%% \n",fh1,((float) fh1/15) * 100);
    printf("Pessoas de 16 a 30 anos: %d Percentual: %.1f%%\n", fh2,((float) fh2/15) * 100);
    printf("Pessoas de 31 a 45 anos: %d Percentual: %.1f%%\n", fh3,((float) fh3/15) * 100);
    printf("Pessoas de 46 a 60 anos: %d Percentual: %.1f%%\n", fh4,((float) fh4/15) * 100);
    printf("Pessoas de mais de 61 anos: %d Percentual: %.1f%%\n\n", fh5,((float) fh5/15) * 100);

    system("pause");
    return 0;
}