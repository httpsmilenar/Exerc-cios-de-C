// Faça um programa que leia a nota de 20 alunos da turma e mostre as que são iguais ou superiores à média da turma.

#include <stdio.h>

int main()
{
    float vet[20], sum = 0, average; int position;
    for(position = 0; position < 20; position++)
{
    scanf("%f", &vet[position]);
    sum = sum + vet[position];
}
    average = sum/20;
    printf("numbers greater than average %.2f \n", average);
    for(position = 0; position < 20; position++)
{
    if(vet[position] >= average)
    printf("%.2f \n", vet[position]);
}
return 0;
}