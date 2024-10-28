#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
    Faça um porgra que leia três números e mostre-os em ordem decrescente.
*/

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int n1, n2, n3, primeiro, segundo, terceiro;

    printf("Insira um número qualquer.: ");
    scanf("%d", &n1);

    printf("\nInsira um número qualquer.: ");
    scanf("%d", &n2);

    printf("\nInsira um número qualquer.: ");
    scanf("%d", &n3);

    if(n1 > n2 && n2){
        primeiro = n1;
        segundo = n2;
    }
    else
    {
        primeiro = n2;
        segundo = n1;
    }
    if (n3 > primeiro)
    {
       terceiro = segundo;
       segundo = primeiro;
       primeiro = n3;
    }
    else
    {
        if(n3 > segundo)
        {
            terceiro = segundo;
            segundo = n3;

        }
        else
            terceiro = n3;
    }
    printf("\n%d %d %d", primeiro, segundo, terceiro);

    return 0;
}
