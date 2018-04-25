#include <stdio.h>
#include <stdlib.h>
#define MAXIMO 4

int main()
{
    int i, j, temporal, lista[MAXIMO];
    for(i=0;i<MAXIMO;i++)
    {
        printf("Ingrese numeros que desee ordenar : ");
        scanf("%d", &lista[i]);
    }





    /*for(i=0;i<MAXIMO;i++)
    {
        printf("Ingrese valores para la lista y se acomodaran ");
        scanf("%d",&lista[i]);

    }*/

    for(i=0;i<MAXIMO;i++)
    {
        printf("%d\n",lista[i]);
    }

    return 0;
}
