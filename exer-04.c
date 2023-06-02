#include <stdio.h>
void main ()
{
    int matA[5][5], x, i, j;

    printf("Inofrme os valores da matriz: \n");
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
            scanf("%d", &matA[i][j]);
        }
    }

    printf("\nInforme um numero inteiro: ");
    scanf("%d", &x);


    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
                if (i==2){
                    matA[i][j] = matA[i][j] * x;
                }
        }
    }

    printf("\no resultado da matriz modificada e: \n");
    for (i=0; i<5; i++){
        for (j=0; j<5; j++){
                printf("%d ", matA[i][j]);
        }
    }
}
