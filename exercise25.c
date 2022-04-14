// Faça um algoritmo que leia 50 números inteiros e armazene-os em um vetor. Copie para um segundo vetor de 50 números inteiros cada elemento do primeiro, observando as seguintes regras:
// Se o número for par, preencha a mesma posição do segundo vetor com o número sucessor do contido na mesma posição do primeiro vetor.
// Se o número for ímpar, preencha a mesma posição do segundo vetor com o número antecessor do contido na mesma posição do primeiro vetor.
// Ao final, mostre o conteúdo dos dois vetores simultaneamente.

#include <stdio.h>

int main()
{
    const int sizvet = 50;
    
    int vet1[sizvet], vet2[sizvet], position;

    for(position = 0; position < sizvet; position ++)

    {
        scanf("%d", &vet1[position]);

        if(vet1[position] % 2 == 0)
        vet2[position] = vet1[position] + 1;

        else
        vet2[position] = vet1[position] + 1;
    }
    printf("elements of VET 1 and VET 2: ");

    for(position = 0; position < sizvet; position ++)

    {
        printf("%d ", vet1[position]);
        printf("%d ", vet2[position]);
    }
    return 0;
}