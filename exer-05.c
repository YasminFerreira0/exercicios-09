#include <stdio.h>
void main()
{
    int matA[5][5], somaA, somaB, i, j;

    somaB = 0;
    somaA = 0;


    printf("Informe os valores da matriz.\n");
    for (i = 0; i < 5; i++){
        for(j = 0; j< 5; j++){
            scanf("%d", &matA[i][j]);
        }
    }

    for(i=0; i<5; i++){
        for (j=i; j<5; j++){
            if (j == i ){
                somaA = somaA + matA[i][i];
            }
        }
    }

    for(i=0; i<5; i++){
        for (j=5; j<0; j--){
            if(j )
            somaB = somaB + matA[i][j];

        }
    }

    printf("%d", somaA);
    printf("%d", somaB);
}


