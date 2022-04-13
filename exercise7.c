// Crie um programa onde o usuário possa entrar usando sua idade e inicial do nome. Em seguida, entre com os valores: 30 e H.

#include <stdio.h>

void main() {
    int age;
    char initial[1];
    
    printf("enter your age: ");
    scanf("%d", &age);

    printf("enter your initial name: ");
    scanf("\n %c", &initial[1]);

    printf("you are %d years old, and your name starts with %c\n", age, initial[1]);
}