#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*
    4.7.1 Faça um programa que leia dois números e mostre qual o maior dos dois.

*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n1, n2;
    printf("Insira um número qualquer. ");
    scanf("%d", &n1);

    printf("\nInsira um número qualquer. ");
    scanf("%d", &n2);

    if(n1 > n2 )
        printf("\nO maior número é: %d", n1);
    else
        printf("\nO maior número é: %d", n2);

    return 0;
}
