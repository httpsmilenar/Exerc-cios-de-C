// Qual é o valor armazenado na variável CH após a execução destas linhas?
// int a = 1;
// char ch = 'A';
// ch = ch + a;

#include <stdio.h>

void main() {
    int a = 1;
    char ch = 'A';
    ch = ch + a;
    printf("%c", ch);
}