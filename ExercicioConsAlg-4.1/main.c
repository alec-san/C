#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
    4.7.1 Fa�a um programa que leia dois n�meros e mostre qual o maior dos dois.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    printf("Insira um n�mero qualquer. ");
    scanf("%d", &n1);

    printf("\nInsira um n�mero qualquer. ");
    scanf("%d", &n2);

    if(n1 > n2 )
        printf("\nO maior n�mero �: %d", n1);
    else
        printf("\nO maior n�mero �: %d", n2);

    return 0;
}
