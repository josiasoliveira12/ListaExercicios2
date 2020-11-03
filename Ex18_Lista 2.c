#include <stdio.h>
#include <stdlib.h>
#include "bibliotecaMatriz.h"

int main()
{
    int mat[100][100], linhas, cols, x, cont=0,i ,j;
    printf("Dimencao da matriz:");
    scanf("%d%d", &linhas, &cols);
    geraMatriz(mat, linhas, cols);
    mostraMatriz(mat, linhas, cols);
    printf("Valor de x:");
    scanf("%d", &x);
    for(i=0;i<linhas;i++)
        for(j=0;j<cols;j++)
            if(mat[i][j] == x)
                cont++;
    printf("\nO valor %d existe %d vez(es) na matriz:\n", x, cont);
    return 0;
}

















