// Desenvolva um programa que leia uma sequência de letras (a... z) terminada em ponto (.) e que mostre quantas vezes cada vogal (a, e, i, o, u) apareceu na lista.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;

    int conta = 0, conte = 0, conti = 0, conto = 0, contu = 0;

    printf("type a capital letter (A..Z) for each line and press ENTER: \n");
    scanf("%c", &letter);

    while(letter != '.')

    {
        switch(letter)

        {
            case 'a':
            conta ++ ; break;

            case 'e':
            conte ++ ; break;

            case 'i':
            conti ++ ; break;

            case 'o':
            conto ++ ; break;

            case 'u':
            contu ++ ; break;
        }

        scanf("%c", &letter);
        
     }
    printf("total of a = %d \n", conta);
    printf("total of e = %d \n", conte);
    printf("total of i = %d \n", conti);
    printf("total of o = %d \n", conto);
    printf("total of u = %d \n", contu);

    return 0;

}