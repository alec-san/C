#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Fa�a um programa que mostre todos os n�meros inteiros de 1 a 5.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("Programa que imprime na tela n�meros inteiros de 1 a 5!\n\n");

    int i;
    for(i=1; i<6 ; i++)
    {
       printf("%d ", i);
    }
    return 0;
}
