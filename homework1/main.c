#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int suma(int max,int min);
char cont;
int numero;
float promedio;
float acumulador;
int max = INT_MIN;
int min = INT_MAX;
int iteraciones = 5;
int sumaTotal;


int main()
{
    do{
        for(int contador = 0; contador < iteraciones; contador++)
        {
            printf("Ingrese numero a promediar: ");
            scanf("%d", &numero);
            acumulador = acumulador + numero;
            if(max < numero)
            {
                max = numero;
            }
            if(min > numero)
            {
                min = numero;
            }

        }
        promedio = acumulador / iteraciones;
        sumaTotal = suma(min, max);

        printf("El promedio total es:%.2f ", promedio);
        printf("\nEl numero mas chico ingresado es: %d", min);
        printf("\nEl numero mas grande ingresado es: %d", max);
        printf("\n\nLa suma de el min y max es: %d", sumaTotal);
        printf("\n\nIngrese la letra s, si desea continuar operando  ");
        fflush(stdin);
        scanf("%c", &cont);
       }while(cont =='s');
       return 0;
}
        int suma(int min, int max)
        {
            sumaTotal = min + max;
            return sumaTotal;
        }
