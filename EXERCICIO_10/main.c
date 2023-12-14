#include <stdio.h>
#include <stdlib.h>

// Disciplina  : Logica de Programacao
// Descrição   : Calcular sua idade em dias

int main()
{
    printf("Calcular sua idade em dias \n\n");

    char nome[50];
    int anos, meses, dias;

    printf("Qual seu nome:");
    scanf("%s", &nome);
    printf("\n");

    printf("Qual sua idade:");
    scanf("%i", &anos);
    printf("\n");

    printf("Quantos meses após seu aniversario:");
    scanf("%i", &meses);
    printf("\n");

    printf("Quantos dias apos seu aniversario:");
    scanf("%i", &dias);
    printf("\n");

    dias = dias + (anos*365) + (meses*30);
    printf("%s sua idade em dias eh: %i dias \n\n", nome, dias);

    return 0;
}
