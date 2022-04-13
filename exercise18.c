// Desenvolva um programa que leia, inicialmente, a porcentagem de reajuste dos salários dos funcionários de uma empresa. Na sequência, deve ler o salário de cada um dos 50 funcionários, calcular e mostrar o novo salário reajustado, aplicando a porcentagem de ajuste sobre os respectivos salários atuais. Ao final, o maior salário reajustado da empresa deve ser apresentado na tela.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salreadper, salary, salread, highersal;
    int cont;

    highersal = 0;
    printf("salary readjustment percentual: ");
    scanf("%f", &salreadper);

    for(cont = 1; cont <= 50; cont ++);
    {
        printf("report employee salary: ");
        scanf("\n %f", &salary);

        salread = salary + (salary * salreadper / 100);

        if(salread > highersal)
         highersal = salread;
    }
    printf("the highest readjusted salary is: %.2f\n", highersal);

    return 0;
}