#include <stdio.h>
#include <stdlib.h>

// Disciplina  : Logica de Programacao
// Descrição   : Escrever o antecessor de um número

int main()
{
    int n, m;

    printf("Digite um Valor:");
    scanf("%i", &n);

    m = n - 1;
    printf("O antecessor de %i eh %i \n", n, m);

    return 0;
}
