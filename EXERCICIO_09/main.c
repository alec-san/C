#include <stdio.h>
#include <stdlib.h>

// Disciplina  : Logica de Programacao
// Descrição   : Calcule a Área de um Triângulo

int main()
{
    printf("Calculo de Area de um Triângulo\n\n");

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
