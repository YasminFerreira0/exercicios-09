#include <stdio.h>
void main()
{
    int matA[5][5], soma, i, j;

    printf("Informe os valores da matriz.\n");
    for (i = 0; i < 5; i++){
        for(j = 0; j< 5; j++){
            scanf("%d", &matA[i][j]);
        }
    }

    soma = 0;
    for(i=0; i<5; i++){
        for (j=i; j<5; j++){
            if (j == i ){
                soma = soma + matA[i][i];
            }
        }
    }

    printf("A soma e: %d", soma);

}
