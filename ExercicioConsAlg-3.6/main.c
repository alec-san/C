#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
    3.6 Fa�a um programa que leia um n�mero N, o primeiro termo A1 e a
    raz�o R de uma Progress�o Geom�trica, calcule e mostre o N-�simo termo.
*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    double an, n, a1, r;

    printf("Insira um n�mero:");
    scanf("%lf ", &n);

    printf("\nInsira o Primeiro n�mero de P.G.: ");
    scanf("%lf ", &a1);

    printf("\nInsira a Raz�o desta P.G.: ");
    scanf("%lf ", &r);

    an =  a1 * (pow (r ,(n-1)));
    printf("O N-�simo �: %2.f", an);

    return 0;
}
