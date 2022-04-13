// Desenvolva um programa que leia uma sequência de números, podendo terminar com o número 0 ou 9. Para cada número lido (diferente de 0 ou 9), mostre seu sucessor caso o número seja par, ou seu antecessor se o número for ímpar.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number;
    do
    {
        printf("enter a number: ");
        scanf("%d", &number);

        if(number != 0 && number != 9)
        
        {
            if(number % 2 == 0)
            printf("successor = %d\n\n", number + 1);

            else
            printf("predecessor = %d\n\n", number - 1);
        }
    }

    while(number != 0 && number != 9);

    return 0;
}