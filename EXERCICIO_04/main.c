#include <stdio.h>
#include <stdlib.h>

// Disciplina   : Linguagem e Lógica de Programação

int main()
{
    int a, b, c;

    a = 4;
    b = a + 1;
    a = b + 1;
    b = a + 1;
    printf("a: %d \n", a);

    a = b + 1;
    printf("a: %d, b: %d \n", a, b);

    return 0;
}
