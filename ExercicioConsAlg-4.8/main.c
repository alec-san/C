#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Fa�a um programa que leia um n�mero n, calcule seu fatorial e mostre o
    resultado obtido.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, i;
    double fat;

    printf("Digite um n�mero: ");
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
