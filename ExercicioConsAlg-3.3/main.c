#include <stdio.h>
#include <stdlib.h>

/*
    3.3 Fa�a um programa que calcule a quantidade necess�ria de latas de tintas para
    pintar um parade de 5m de largura por 2m de altura. Considere que o consumo de tinta � de 3l por
    metro quadrado e a quantidade de tinta por lata � 2l.
*/

int main()
{
    float area = 5*2;
    float litros = area*3;
    float latas = litros / 2;

    printf("Quantidade necessaria eh: %2.f lata(s).", latas);

    return 0;
}
