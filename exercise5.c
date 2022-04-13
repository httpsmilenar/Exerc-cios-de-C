// Qual o valor armazenado na variável A após a execução dessas linhas?
// int a, b, c;
// a = b + c;
// b = 1;
// c = b + 1;

#include <stdio.h>

void main() {
    int a, b, c;
    a = b + c;
    b = 1;
    c = b + 1;
    printf("%d", a);
}