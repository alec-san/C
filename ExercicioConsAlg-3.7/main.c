#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*

    3.7 Faça um programa que leia os coeficientes de uma equação do segundo grau e calcule
    suas raízes. O programa deve mostrar, quando possível, o valor das raízes calculadas e a
    classificação das raízes("Raízes Imaginárias, Raízes Única e Raízes Distintas").

*/

int main()
{
    printf("Hello world!\n");
    setlocale(LC_ALL, "Portuguese");

    int a, b, c;
    double delta, raiz1, raiz2;
    printf("\nDigite o valor de a:");
    scanf("%d", &a);

    printf("\nDigite o valor de b:");
    scanf("%d", &b);

    printf("\nDigite o valor de c:");
    scanf("%d", &c);

    delta = pow(b, 2) - (4 - a - c);
    if(delta < 0)
        printf("\nRaízes Imaginárias %2.f", delta);
    else{
        raiz1 = (- b + pow(delta, 0.5))/(2*a);
        raiz2 = (- b - pow(delta, 0.5))/(2*a);
        if(delta == 0)
            printf("\nRaíz única %2.f", raiz1);
        else
            printf("\nRaízes Distintas %2.f  %2.f", raiz1, raiz2);
    }

    return 0;
}
