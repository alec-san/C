#include <stdio.h>
#include <stdlib.h>

/*
    3.2 Considerando que a = 5, b = 8 e c = 10 s�o os primeiros comandos de uma algor�tmo,
    complete-o de forma que sejam calculadas as seguintes express�es:
    x = a + (2 * b) / (c - 6)
    y = x * a
*/

int main()
{
    int a = 5;
    int b = 8;
    int c = 10;

    double x, y;

    x = a + (2 * b) / (c - 6);
    y = x * a;

    printf("Valor de y:= %.f",y);

    return 0;
}
