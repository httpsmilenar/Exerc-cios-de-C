// Desenvolva um programa que leia 3 notas de 40 alunos, calcule e mostre a média aritmética e a situação de aprovação de cada aluno. Lembre-se que apenas a média igual ou acima de 7 aprova o aluno.

#include <stdio.h>

int main() {
    float note1, note2, note3, average;
    int countstud;
    for (countstud = 1; countstud <= 40; countstud++)
{
    printf("enter the student's grade 1: ");
    scanf("%f", &note1);

    printf("enter the student's grade 2: ");
    scanf("%f", &note2);

    printf("enter thw student's grade 3: ");
    scanf("%f", &note3);

    average = (note1 + note2 + note3)/3;

    if (average >= 7)
    printf("APPROVED with average %.2f \n\n", average);

    else
    printf("FAILED with average %.2f \n\n", average);
}
return 0;
}