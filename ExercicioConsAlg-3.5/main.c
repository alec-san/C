#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    3.5 Faça um programa que leia o primeiro termo de uma Progressão Aritmética
    (P.A.), sua razão, um número n e a seguir calcule e mostre o N-ésimo termo da P.A.
*/

int main()
{
    setlocale(LC_All, "Portuguese");

    int pr, n, r;
    double uTermo;

    printf("\nQual o primeiro termo da P.A.= ");
    scanf("%d", &pr);

    printf("\nQual é razão desta P.A.= ");
    scanf("%d", &r);

    printf("\nA quantidade de termos da P.A.= ");
    scanf("%d", &n);

    uTermo = pr + (r * (n-1));
    printf("\nO último termo da P.A.= %.f", uTermo);

    return 0;
}
