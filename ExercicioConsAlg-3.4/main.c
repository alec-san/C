#include <stdio.h>
#include <stdlib.h>

/*
    Faça um programa que calcule a expressão x = (y * 2) + z + 1; se x for maior que 10,
    faça y e x iguais zero, senão faça y igual a z. Considere y = 8 e z =2;
*/


int main()
{
    int y = ;
    int z = 2;

    double x = (y * 2) + z + 1;

    if( x > 10 ){
        y = 0;
        z = 0;
    }else
        y = z;

    printf(" y = %d \n z = %d", y, z);
    return 0;
}
