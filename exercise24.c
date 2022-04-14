// Faça um programa que leia 100 números inteiros e mostre-os na ordem inversa em que foram lidos.

#include <stdio.h>

int main() 
{
    int vet[100], position;

    for(position = 0; position < 100; position ++)

    {
        scanf("%d", &vet[position]);
    }

    for(position = 99; position >= 0; position --)

    {
        printf("%d \n", vet[position]);
    }
    return 0;
}