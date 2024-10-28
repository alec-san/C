#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    4.7.2 faça um programa que leia dois números e indique se são iguais ou,
    diferentes, mostre o maior e o menor(nesta seqüência).
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    printf("Insira um número qualquer.: ");
    scanf("%d", &n1);

    printf("\nInsira um número qualquer.: ");
    scanf("%d", &n2);

    if(n1 == n2)
        printf("\nOs números são iguais!\n ");
    else
    {
        if(n1 > n2)
            printf("\nOs números são diferentes! %d %d\n", n1, n2);
        else
            printf("\nOs números são diferentes! %d %d\n", n2, n1);
    }

    return 0;
}
