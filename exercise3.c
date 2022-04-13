// Descubra qual é o valor da variável C após a execução das seguintes linhas:
// int a, b, c, d;
// a = 10;
// b = a + 1;
// c = b + 1;
// d = c + 1;
// a = b = c = d = 20;

#include <stdio.h>

void main() {
    int a, b, c, d;
    a = 10;
    b = a + 1;
    c = b + 1;
    d = c + 1;
    a = b = c = d = 20;
    printf("%d", c);
}