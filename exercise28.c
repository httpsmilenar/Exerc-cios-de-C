// Faça um algoritmo que leia uma matriz 4x4 de números inteiros. Gere uma segunda matriz, na qual as linhas são as colunas da matriz 1, e as colunas são as linhas da matriz 1.

#include <stdio.h>

int main()
{
    int mato[4][4], matg[4][4], lin, col;
    printf("\n enter the original matrix \n");

    for(lin = 0; lin < 4; lin++)
    for(col = 0; col < 4; col++)
    
    {
        scanf("%d", &mato[lin][col]);
        matg[col][lin] = mato[lin][col];
        
    }
    printf("\n generated matrix \n");
    
    for(lin = 0 ;lin < 4; lin ++)
    
    {
        for(col = 0; col < 4; col++)
        
        printf("%d ", matg[lin][col]);
        printf("\n");
    }
    return 0;
}
