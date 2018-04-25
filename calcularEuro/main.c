#include <stdio.h>
#include <stdlib.h>
#define PESOSARG 24
int main()
{
    float valorEUR;
    float resultado;
    printf("Escribe cantidad de EUR: \n");
    fflush(stdin);
    scanf("%f", &valorEUR);
    resultado = valorEUR * PESOSARG;
    printf("El valor en pesos es: %f", resultado);
    return 0;
}
