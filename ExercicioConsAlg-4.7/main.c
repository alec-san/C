#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    4.7 Fa�a um programa que leia as vari�veis ao, limite e r e mostre os valores
    menores que limite  gerados pela progress�o aritm�tica que tem por valor inicial 'ao' e raz�o r.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int ao, limite, r, termo;
    printf("\nDigite o valor do limite: ");
    scanf("%d", &limite);

    printf("\nDigite o valor da raz�o: ");
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
