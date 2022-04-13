// Faça um programa que leia 3 notas de um aluno, calcule e exiba a média aritmética dessas notas.

#include <stdio.h>
int main () {

    float note1, note2, note3, average;

    printf(" note 1 = ");
    scanf("%f", &note1);

    printf(" note 2 = ");
    scanf("%f", &note2);

    printf(" note 3 = ");
    scanf("%f", &note3);

    average = (note1 + note2 + note3)/3;

    printf("average\n, %f", average);

return 0;
}