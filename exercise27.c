// Faça um algoritmo que leia números inteiros e armazene-os na matriz 4x4. Porém, na diagonal principal, não armazene o número lido, e sim um 0 (zero). Na diagonal principal, os elementos têm linha = colona: [0][0], [1][1], [2][2], [3][3].

#include <stdio.h>

int main()
{
    int mat[4][4], lin, col;
    printf("\n enter a value for the array elements: \n");
    
    for(lin = 0; lin < 4; lin ++)
    for(col = 0; col < 4; col ++)

    if(lin == col)

    {
        printf("element [%d][%d] = 0 \n", lin, col);
        mat[lin][col] = 0;
    }
    else
    {
        printf("element [%d][%d] = ", lin, col);
        scanf("%d", &mat [lin][col]);
    }
    printf("\narray elements listing\n");
    
    for(lin = 0; lin < 4; lin ++)
    for(col = 0; col < 4; col ++)

    printf("\nelement[%d][%d] = %d", lin, col, mat[lin][col]);

    return 0;
    
}