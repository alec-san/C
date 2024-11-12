#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    4.7 Faça um programa que leia as variáveis ao, limite e r e mostre os valores
    menores que limite  gerados pela progressão aritmética que tem por valor inicial 'ao' e razão r.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ao, limite, r, termo;
    printf("\nDigite o valor do limite: ");
    scanf("%d", &limite);

    printf("\nDigite o valor da razão: ");
    scanf("%d", &r);

    printf("\nDigite o valor do termo: ");
    scanf("%d", &ao);

    termo = ao;
    while(termo <= limite)
    {
        printf("\nValor do termo: %d", termo);
        termo = termo + r;
    }

    return 0;
}
