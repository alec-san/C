#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    3.5 Fa�a um programa que leia o primeiro termo de uma Progress�o Aritm�tica
    (P.A.), sua raz�o, um n�mero n e a seguir calcule e mostre o N-�simo termo da P.A.
*/

int main()
{
    setlocale(LC_All, "Portuguese");

    int pr, n, r;
    double uTermo;

    printf("\nQual o primeiro termo da P.A.= ");
    scanf("%d", &pr);

    printf("\nQual � raz�o desta P.A.= ");
    scanf("%d", &r);

    printf("\nA quantidade de termos da P.A.= ");
    scanf("%d", &n);

    uTermo = pr + (r * (n-1));
    printf("\nO �ltimo termo da P.A.= %.f", uTermo);

    return 0;
}
