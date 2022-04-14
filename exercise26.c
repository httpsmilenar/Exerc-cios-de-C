// Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. Na sequência, leia uma lista de 10 números inteiros e verifique se cada um deles está contido em alguma posição do vetor. Em caso positivo, mostre a posição do vetor em que ele se encontra.

#include <stdio.h>

int main()
{
    const int sizvet = 50, sizlist = 10;

    int vet[sizvet], position, posvet, found, number;

    printf("\n enter vector data \n");

    for(position = 0; position <= sizlist; position ++)

    {
        scanf("%d", &number);
        // checks if the number is in the vector
        posvet = 0;
        found = 0;

        while(posvet <= sizvet - 1 && found == 0)

        {
            if(found == 1)
            printf("found in position: %d", posvet);

            else
            prinf("did not find the number!");

            return 0;
        }
    }
}