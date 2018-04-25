#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ii;
    int auxDos = 4;
    int factorialB;
    int resultado = 1;
    for (ii = 1 ; ii <= auxDos; ii++)
    {
        resultado = resultado * (ii);
    }

    printf("%d", resultado);
}
