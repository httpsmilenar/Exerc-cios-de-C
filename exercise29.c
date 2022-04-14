// Faça um algoritmo que leia dados e armazene em uma matriz 3x3 de números inteiros. Em seguida, mostre os elementos que sejam iguais ao maior número armazenado na matriz.

#include <stdio.h>

int main()
{
    int mat[3][3], lin, col, higher = 0, contequal = 0;
    printf("\nenter a value for the metrix elements: \n\n"); 
    
    for(lin = 0; lin < 3; lin++)
    for(col = 0; col < 3; col++)

    {
        printf("element[%d][%d] = ", lin, col);
        scanf ("%d", &mat[lin][col]);
        
        if (mat[lin][col] > higher)
        {
            higher = mat[lin][col];
            contequal = 1;
        }
        
        else
        if(mat[lin][col] == higher)
        contequal ++;

    }
    printf("\n higher: %d ", higher);
    printf("\n occurrences of the greatest: %d ",contequal);

    return 0;
}