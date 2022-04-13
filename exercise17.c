// Desenvolva um programa que leia o salário de 10 funcionários de uma empresa, calcule e mostre o maior salário e a média salarial da empresa.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int cont;
    float salary, average, sum, higher;
    higher = 0; sum = 0;

    for(cont = 1; cont <= 10; cont ++)
    {
        printf("enter employee salary: ");
        scanf("%f", &salary);
        sum = sum + salary;
        if(salary > higher)
        {
            higher = salary;
        }
    }
    average = sum / 5;
    printf("the company's highest salary is = %.2f \n", higher);
    printf("the company's average salary is = %.2f \n", average);

    return 0;
}