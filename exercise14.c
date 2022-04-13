// Melhore o exercício 10, leia 3 notas de um aluno, calcule e mostre a média aritmética e exiba se o aluno foi aprovado ou não (média igual ou acima de 7 aprova o aluno).

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

    printf("average = %.2f", average);

    if(average>=7)
    printf(", APPROVED student!\n");

    else
    printf(", FAILED student!\n");

return 0;

}