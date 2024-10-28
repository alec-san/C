#include <stdio.h>
#include <stdlib.h>

/*
    3.1 Considerando um algoritmo iniciado pelos comandos a = 1, b = 2, c = 3, complete-o
    de modo que ao final do algoritmo o conteúdo de a seja 3, de b seja 1 e de c seja 2.
    Use apenas atribuições entre variáveis.
*/

int main()
{
    int a = 1;
    int b = 2;
    int c = 3;

    int d = c;
    c = b;
    b = a;
    a = d;

    printf(" a = %d \n b = %d \n c = %d ",a,b,c);

    return 0;
}
