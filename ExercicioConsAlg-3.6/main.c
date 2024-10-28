#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
    3.6 Faça um programa que leia um número N, o primeiro termo A1 e a
    razão R de uma Progressão Geométrica, calcule e mostre o N-ésimo termo.
*/


int main()
{
    setlocale(LC_ALL, "Portuguese");

    double an, n, a1, r;

    printf("Insira um número:");
    scanf("%lf ", &n);

    printf("\nInsira o Primeiro número de P.G.: ");
    scanf("%lf ", &a1);

    printf("\nInsira a Razão desta P.G.: ");
    scanf("%lf ", &r);

    an =  a1 * (pow (r ,(n-1)));
    printf("O N-ésimo é: %2.f", an);

    return 0;
}
