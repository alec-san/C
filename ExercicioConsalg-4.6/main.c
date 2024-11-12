#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    4.6 Faça um porgrama que leia um número n, some todos os números inteiros entre 1 e n, e
    mostre o resultado obtido.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, soma;
    printf("Digite um número: ");
    scanf("%d", &n);
    soma = 0;

    int i;
    for(i=1; i <= n ; i++)
    {
       soma = soma + i;
    }
    printf("A soma de 1 a %d é: %d\n", n, soma);
    return 0;
}
