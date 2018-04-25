#include <stdio.h>
#include <stdlib.h>
#define ITERACIONES 5

int getInt(char *mensaje, char *mensajeError, int maximo, int minimo, int iteraciones, int *resultado[ITERACIONES]);

int main()
{
    int contador = 0;
    int resultado[ITERACIONES];
    getInt("Ingrese un numero: ", "El valor ingresado no es valido", -37676, 37676, ITERACIONES, &resultado);


    for(contador; contador < ITERACIONES; contador++)
    {
        printf("%d", resultado[ITERACIONES]);
    }
    return 0;
}
int getInt(char *mensaje, char *mensajeError, int maximo, int minimo, int iteraciones, int *resultado[])
{
    int contador = 0;
    int auxiliar;
    for(contador; contador < ITERACIONES; contador++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &auxiliar);
        *resultado = auxiliar;

    }
    return auxiliar;
}
