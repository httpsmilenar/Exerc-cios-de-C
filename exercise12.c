// Faça um programa que leia 100 números inteiros e mostre-os na ordem inversa em que foram lidos.

#include <stdio.h>

int main () {
    int vet[100], posicao;

    for(posicao = 0; posicao <100; posicao++)
{
    scanf("%d", &vet[posicao]);
}
    for(posicao = 99; posicao >= 0; posicao--)
{
    printf("%d \n", vet[posicao]);
}
return 0;
}