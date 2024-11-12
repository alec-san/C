#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    4.4 Faça um programa que leia quatro números(opção, n1, n2 e n3) e que mostre o seguinte: n1
    se opção for igual a 2; o n2 se opção for igual a 3; e n3 se opção for
    igual a 4. Os únicos valores possíveis para a variável opção são 2, 3 e 4.
*/


int main()
{
    setlocale(LC_ALL, "Portuguese");
    int opcao, n1, n2, n3;

    printf("\nDigite um número qualquer: ");
    scanf("%d", &n1);

    printf("\nDigite um número qualquer: ");
    scanf("%d", &n2);

    printf("\nDigite um número qualquer: ");
    scanf("%d", &n3);

    printf("\nDigite um número entre 2 a 4: ");
    scanf("%d", &opcao);

    switch(opcao)
    {
        case 2: printf("\n n1: %d", n1);
        break;
        case 3: printf("\n n2: %d", n2);
        break;
        case 4: printf("\n n3: %d", n3);
        break;

        default : printf("\n Opção inválida! ");
    }
    return 0;
}
