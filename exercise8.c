// Desenvolva um programa que leia uma sequência de números inteiros terminada em zero e mostre cada número lido (exceto o zero).

#include <stdio.h>
#include <stdlib.h>

int number;
int main() {
    printf("enter a number: ");
    scanf("%d", &number);
    while(number != 0)
{
    printf("the number read was = %d\n\n ", number);
    printf("enter a number: ");
    scanf("%d", &number);
}
return 0;
}