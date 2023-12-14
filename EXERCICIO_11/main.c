#include <stdio.h>
#include <stdlib.h>

// Disciplina  : Logica de Programacao
// Descrição   : O percentual de voto Brancos, Nulos e validos.

int main()
{
    int total_eleitores, branco, nulo, valido;
    float pBranco, pNulo, pValido;

    printf("Insira o Total de Eleitores: ");
    scanf("%i", &total_eleitores);
    printf("\n");

    printf("Insira o Numero de Votos em Brancos: ");
    scanf("%i", &branco);
    printf("\n");

    printf("Insira o Numero de Votos em Nulo: ");
    scanf("%i", &nulo);
    printf("\n");

    printf("Insira o Numero de Votos Validos: ");
    scanf("%i", &valido);
    printf("\n");

    pBranco = (100*branco) / total_eleitores;
    pNulo = (100*nulo) / total_eleitores;
    pValido = (100*valido) / total_eleitores;

    printf("O Percentual de Branco: %2.2f\n", pBranco);
    printf("O Percentual de Nulo: %2.2f\n", pNulo);
    printf("O Percentual de Validos: %2.2f\n", pValido);

    return 0;
}
