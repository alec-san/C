#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    4.7.2 fa�a um programa que leia dois n�meros e indique se s�o iguais ou,
    diferentes, mostre o maior e o menor(nesta seq��ncia).
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2;

    printf("Insira um n�mero qualquer.: ");
    scanf("%d", &n1);

    printf("\nInsira um n�mero qualquer.: ");
    scanf("%d", &n2);

    if(n1 == n2)
        printf("\nOs n�meros s�o iguais!\n ");
    else
    {
        if(n1 > n2)
            printf("\nOs n�meros s�o diferentes! %d %d\n", n1, n2);
        else
            printf("\nOs n�meros s�o diferentes! %d %d\n", n2, n1);
    }

    return 0;
}
