#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Faça um programa que leia um número n, calcule seu fatorial e mostre o
    resultado obtido.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, i;
    double fat;

    printf("Digite um número: ");
    scanf("%d", &n);

    printf("\nO Fatorial de %d:", n);

    fat = 1;
    for(i=1; i <= n; i++){
        fat = fat * i;
        printf(" %d", i);
    }
    printf(" = %2.f \n\n", fat);
    return 0;
}
