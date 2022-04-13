//  Melhore o EXERCISE20, leia uma sequência de letras, terminada na letra (”z”), e mostre quantas vezes cada vogal (a, e, i, o, u) apareceu.

#include <stdio.h>

int main()
{
    int vet[5] = {0, 0, 0, 0, 0}, position;
    char letter;
    scanf("%c", &letter);

    while(letter != 'z')
    {
        switch(letter)
        {
            case 'a':
            vet[0]++ ;
            break;

            case 'e':
            vet[1]++ ;
            break;

            case 'i':
            vet[2]++ ;
            break;

            case 'o':
            vet[3] ++ ;
            break;

            case 'u':
            vet[4] ++ ;
            break;
        }
        scanf("%c", &letter);
    }

    printf("total of a = %d \n", vet[0]);
    printf("total of e = %d \n", vet[1]);
    printf("total of i = %d \n", vet[2]);
    printf("total of o = %d \n", vet[3]);
    printf("total of u = %d \n", vet[4]);
    
    for(position = 0; position < 5; position ++)
return 0;
}