#include <stdio.h>
#include <stdlib.h>

float suma (float acumulador, float numero);
float resta (float acumulador, float numero);
float multiplicacion (float acumulador, float numero);
float division (float acumulador, float numero);

float acumulador = 0;
float numero;
float totalSuma;
float totalResta;
float totalDivision;
float totalMultiplicacion;
float totalOperacion;
char signo;
int flag = 1;
char continuarOperando;

int main()
{
    do
    {
        printf("Ingrese numero: \n");
        scanf("%f", &numero);

        /*if (flag)
            {
                acumulador = numero;
                flag = 0;
            }
            */

        printf("\nIngrese operador : + - * /\n");
        fflush(stdin);
        scanf("%c", &signo);
        while (!(signo == '+' || signo == '-' || signo == '/' || signo == '*'))
        {
            printf("\nReingrese un operador valido : + - * /\n");
            fflush(stdin);
            scanf("%c", &signo);
        }
        switch(signo)
        {
            case '+':
                totalSuma = suma(acumulador,numero);
                break;
            case '-':
                totalResta = resta(acumulador,numero);
                break;
            case '*':
                totalMultiplicacion = multiplicacion(acumulador,numero);
                break;
            case '/':
                totalDivision = division(acumulador,numero);
                break;
        }
    printf("Desea seguir operando? s para continuar");
    fflush(stdin);
    scanf("%c", &continuarOperando);
    }while(continuarOperando == 's');
    totalOperacion = totalSuma + totalResta + totalMultiplicacion + totalDivision;
    printf ("El resultado de la operacion es : %.2f", totalOperacion);

    return 0;
}

float suma(float acumulador, float numero)
{
    totalSuma = acumulador + numero;
    return totalSuma;
}
float resta(float acumulador, float numero)
{
    totalResta = acumulador - numero;
    return totalResta;
}
float multiplicacion(float acumulador, float numero)
{
    totalDivision = acumulador * numero;
    return totalMultiplicacion;
}
float division(float acumulador, float numero)
{
    totalDivision = acumulador / numero;
    return totalDivision;
}
