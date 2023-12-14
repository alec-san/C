#include <stdio.h>
#include <stdlib.h>

// Disciplina  : Logica de Programacao
// Descrição   : Reajuste de Salario

int main()
{
    float salario, reajuste, novoSal;

    printf("Digite o Salario:");
    scanf("%f", &salario);
    printf("\n");

    printf("Qual o valor de Reajuste:");
    scanf("%f", &reajuste);
    printf("\n");

    novoSal = salario + ((reajuste*salario)/100);
    printf("O Salario reajustado eh: %.2f", novoSal);

    return 0;
}
