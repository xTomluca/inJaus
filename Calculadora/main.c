#include <stdio.h>
#include <stdlib.h>

float numUno;
float numDos;
float resultado;
char continuar;
char operacion;

int main()
{
    do
    {
        printf("\nIngrese primer numero : \n");
        scanf("%f", &numUno);
        printf("\nIngrese operacion a deseada + - * / : \n");
        fflush(stdin);
        scanf("%c", &operacion);
        printf("\nIngrese segundo numero : \n");
        scanf("%f", &numDos);

        if (operacion == '+')
        {
            resultado = numUno + numDos;
        }
        if (operacion == '-')
        {
            resultado = numUno - numDos;
        }
        if (operacion == '*')
        {
            resultado = numUno * numDos;
        }
        if (operacion == '/')
        {
            resultado = numUno / numDos;
        }
        printf("\nEl resultado de la operacion realizada es: %.2f", resultado);
    printf("\nDesea seguir operando? Digite s para continuar : ");
    fflush(stdin);
    scanf("%c", &continuar);
    }while(continuar == 's');
    return 0;
}
