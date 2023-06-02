#include <stdio.h>
void main ()
{
    int matA[5][5], matS[5][5], x, i, j;

    printf("Informe os valores da matriz.\n");
    for (i = 0; i < 5; i++){
        for(j = 0; j< 5; j++){
            scanf("%d", &matA[i][j]);
        }
    }

    printf("\nInforme um numero inteiro: ");
    scanf("%d", &x);

    for (i = 0; i < 5; i++){
        for(j = 0; j< 5; j++){
                matS[i][j] = matA[i][j] + x;
        }
    }

    printf("\nO resultado da multipicacao dos valores da matriz pelo valor x e: ");
    for (i = 0; i < 5; i++){
        for(j = 0; j< 5; j++){
                printf("%d ", matS[i][j]);
        }
    }


}
