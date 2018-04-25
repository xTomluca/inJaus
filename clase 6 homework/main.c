#include <stdio.h>
#include <stdlib.h>
#define SIZE_MAX 7

int sort_ordenarArrayEnteros(int *array, int cantidadEnteros, int flagOrden);

int main()
{
    int i;
    int array[SIZE_MAX] = {1,4,3,2,5,57,26};
    sort_ordenarArrayEnteros(array, SIZE_MAX, 0);
    if(sort_ordenarArrayEnteros(array, SIZE_MAX, 0) == 0)
    {
        for(i = 0; i < SIZE_MAX; i++)
        {
            printf("%d\n", array[i]);
        }
    }
    printf("\n\n");
    printf("\n\n");

    sort_ordenarArrayEnteros(array, SIZE_MAX, 1);
    if(sort_ordenarArrayEnteros(array, SIZE_MAX, 1) == 0)
    {
        for(i = 0; i < SIZE_MAX; i++)
        {
            printf("%d\n", array[i]);
        }
    }


    return 0;
}
int sort_ordenarArrayEnteros(int *array, int cantidadElementos, int flagOrden)
{
    int auxiliar;
    int i;
    int ordenado;
do
{
    ordenado = 0;
    for(i = 0; i < cantidadElementos-1; i++)
    {
        if ((array[i] < array[i+1] && flagOrden == 0 ) || (array[i] > array[i+1] && flagOrden == 1))
        {
            auxiliar = array[i];
            array[i] = array[i+1];
            array[i+1] = auxiliar;
            ordenado = 1;
        }
    }

}while(ordenado);


return ordenado;
}
