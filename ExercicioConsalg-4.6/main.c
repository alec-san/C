#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    4.6 Fa�a um porgrama que leia um n�mero n, some todos os n�meros inteiros entre 1 e n, e
    mostre o resultado obtido.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int n, soma;
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    soma = 0;

    int i;
    for(i=1; i <= n ; i++)
    {
       soma = soma + i;
    }
    printf("A soma de 1 a %d �: %d\n", n, soma);
    return 0;
}
