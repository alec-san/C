#include <stdio.h>
#include <stdlib.h>

// Disciplina  : Logica de Programacao
// Descri��o   : Calcule o per�metro de um Ret�ngulo

int main()
{
    printf("Calculo de Perimetro de um Retangulo\n\n\n");
    int b, h, p;

    printf("Digite a Base do Retangulo:");
    scanf("%d", &b);
    printf("\n");

    printf("Digite a Altura do Retangulo:");
    scanf("%d", &h);
    printf("\n");

    p = 2*b + 2*h;
    printf("Perimetro: %d \n", p);

    return 0;
}
