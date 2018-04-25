#include <stdio.h>
#include <stdlib.h>
#define SIZE_ARRAY 5
int main()
{
    int i, j, temporal, lista[SIZE_ARRAY];
    for(i=0; i < SIZE_ARRAY; i++)
    {
        printf("INGRESE NUMERO ACOMODAR");
        scanf("%d", &lista[i]);
    }
    ///-----------DE MENOR A MAYOR---------///
    for(i=0; i < SIZE_ARRAY; i++)
    {
        temporal = lista[i];
        j = i-1;
        while(j>=0 && temporal < lista[j])
        {
            lista[j+1] = lista[j];
            j--;
        }
        lista[j+1] = temporal;
    }
    for(i=0; i < SIZE_ARRAY; i++)
    {
        printf("NUMERO ACOMODADO %d\n", lista[i]);
    }

    return 0;
}
