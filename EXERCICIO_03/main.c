#include <stdio.h>
#include <stdlib.h>

// Disciplina   : Linguagem e L�gica de Programa��o

int main()
{
    int a, b, c;
    a = 6;
    b = 7;
    c = a;
    b = c;
    a = b;

    printf("a: %d b: %d c: %d \n", a, b, c);
    return 0;
}
