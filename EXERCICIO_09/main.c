#include <stdio.h>
#include <stdlib.h>

// Disciplina  : Logica de Programacao
// Descri��o   : Calcule a �rea de um Tri�ngulo

int main()
{
    printf("Calculo de Area de um Tri�ngulo\n\n");

    int b, h;
    float a;

    printf("Digite a Base:");
    scanf("%i", &b);
    printf("\n");

    printf("Digite a altura:");
    scanf("%i", &h);
    printf("\n");

    a = b*h / 2;
    printf("Area: %2.2f \n", a);

    return 0;
}
