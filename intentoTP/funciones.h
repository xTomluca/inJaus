#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <limits.h>


int getNumUno(float *numUno, char* mensaje, char* mensajeError);
int getNumDos(float *numDos, char* mensaje, char* mensajeError);
int getSuma(float *suma, float auxUno, float auxDos, int condicionOperandoUno, int condicionOperandoDos, int funciones, char* mensajeErrorA, char* mensajeErrorB, char* mensajeErrorAB);
int getResta(float *resta, float auxUno, float auxDos, int condicionOperandoUno, int condicionOperandoDos, int funciones, char* mensajeErrorA, char* mensajeErrorB, char* mensajeErrorAB);
int getDivision(float *division, float auxUno, float auxDos, int condicionOperandoUno, int condicionOperandoDos, int funciones, char* mensajeErrorA, char* mensajeErrorB, char* mensajeErrorAB, char* mensajeErrorCero);
int getMultiplicacion(float *multiplicacion, float auxUno, float auxDos, int condicionOperandoUno, int condicionOperandoDos, int funciones, char* mensajeErrorA, char* mensajeErrorB, char* mensajeErrorAB);
int getFactorial(long *resultadoFactorialA, long *resultadoFactorialB, long auxUno, long auxDos, int validacionOperandoUno, int validacionOperandoDos);
int getTotalFunciones(int validacionSuma, int validacionResta, int validacionDivision, int validacionMultiplicacion, int validacionFactorial);
int getNumUno(float *numUno, char* mensaje, char* mensajeError)
{
    int retorno = 1;
    float aux = 0;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%f", &aux);
    while (!(aux < LONG_LONG_MAX && aux > LONG_LONG_MIN))
    {
        printf("%s", mensajeError);
        scanf("%f", &aux);
    }
    *numUno = aux;
    retorno = 0;

    return retorno;
}

//-----PIDO EL SEGUNDO NUMERO-----//

int getNumDos(float *numDos, char* mensaje, char* mensajeError)
{
    int retorno = 1;
    float aux = 0;
    printf("%s", mensaje);
    fflush(stdin);
    scanf("%f", &aux);
    while (!(aux < LONG_LONG_MAX && aux > LONG_LONG_MIN))
    {
        printf("%s", mensajeError);
        scanf("%f", &aux);
    }
    *numDos = aux;
    retorno = 0;
    return retorno;
}
//------FUNCION SUMAR------//

int getSuma(float *suma, float auxUno, float auxDos, int condicionOperandoUno, int condicionOperandoDos, int funciones, char* mensajeErrorA, char* mensajeErrorB, char* mensajeErrorAB)
{
    int retorno= 1;
    if(condicionOperandoUno != 1 && condicionOperandoDos != -1)
    {
        *suma = auxUno + auxDos;
        retorno = 0;
    }
    else if(condicionOperandoUno == 1 && condicionOperandoDos != 1)
    {
        if(funciones==1)
        {

        }
        else
        {
            printf("%s", mensajeErrorA);
        }
    }
    else if(condicionOperandoUno != 1 && condicionOperandoDos == 1)
    {
        if(funciones==1)
        {

        }
        else
        {
        printf("%s", mensajeErrorB);
        }

    }
    else if(condicionOperandoUno == 1 && condicionOperandoDos == 1)
    {
        if(funciones==1)
        {

        }
        else
        {
        printf("%s", mensajeErrorAB);
        }
    }

    return retorno;
}
int getResta(float *resta, float auxUno, float auxDos, int condicionOperandoUno, int condicionOperandoDos, int funciones, char* mensajeErrorA, char* mensajeErrorB, char* mensajeErrorAB)
{
    int retorno= 1;
    if(condicionOperandoUno != 1 && condicionOperandoDos != 1)
    {
        *resta = auxUno - auxDos;
        retorno = 0;
    }
    else if(condicionOperandoUno == 1 && condicionOperandoDos != 1)
    {
        if(funciones==1)
        {

        }
        else
        {
        printf("%s", mensajeErrorA);
        }
    }
    else if(condicionOperandoUno != 1 && condicionOperandoDos == 1)
    {
        if(funciones==1)
        {

        }
        else
        {
        printf("%s", mensajeErrorB);
        }
    }
    else if(condicionOperandoUno == 1 && condicionOperandoDos == 1)
    {
        if(funciones==1)
        {

        }
        else
        {
        printf("%s", mensajeErrorAB);
        }
    }
    return retorno;
}
///-----FUNCION PARA DIVIDIR-----///
///YA AGREGUE FUNCIONES TOTALES///
int getDivision(float *division, float auxUno, float auxDos, int condicionOperandoUno, int condicionOperandoDos, int funciones, char* mensajeErrorA, char* mensajeErrorB, char* mensajeErrorAB, char* mensajeErrorCero)
{
    int retorno= 1;
    if(condicionOperandoUno != 1 && condicionOperandoDos != 1)
    {
        if(auxUno != 0 && auxDos !=0)
        {
            *division = auxUno / auxDos;
            retorno = 0;
        }
        else if(auxUno == 0 && auxDos !=0)
        {
            *division = auxUno / auxDos;
            retorno = 0;
        }
        else
        {
            printf("%s", mensajeErrorCero);
            retorno = -1;
        }

    }
    else if(condicionOperandoUno == 1 && condicionOperandoDos != 1)
    {
        if(funciones==1)
        {

        }
        else
        {
            printf("%s", mensajeErrorA);
        }
    }
    else if(condicionOperandoUno != 1 && condicionOperandoDos == 1)
    {
        if(funciones==1)
        {

        }
        else
        {
        printf("%s", mensajeErrorB);
        }
    }
    else if(condicionOperandoUno == 1 && condicionOperandoDos == 1)
    {
        if(funciones==1)
        {

        }
        else
        {
            printf("%s", mensajeErrorAB);
        }
    }
    return retorno;
}
//-----FUNCION PARA MULTIPLICAR-----///
/// YA AGREGUE FUNCIONES

int getMultiplicacion(float *multiplicacion, float auxUno, float auxDos, int condicionOperandoUno, int condicionOperandoDos, int funciones, char* mensajeErrorA, char* mensajeErrorB, char* mensajeErrorAB)
{
    int retorno= 1;
    if(condicionOperandoUno != 1 && condicionOperandoDos != 1)
    {
        *multiplicacion = auxUno * auxDos;
        retorno = 0;
    }

    else if(condicionOperandoUno == 1 && condicionOperandoDos != 1)
    {
        if(funciones==1)
        {

        }
        else
        {
            printf("%s", mensajeErrorA);
        }

    }
    else if(condicionOperandoUno != 1 && condicionOperandoDos == 1)
    {
        if(funciones==1)
        {

        }
        else
        {
        printf("%s", mensajeErrorB);
        }
    }
    else if(condicionOperandoUno == 1 && condicionOperandoDos == 1)
    {
        if(funciones==1)
        {

        }
        else
        {
        printf("%s", mensajeErrorAB);
        }
    }
    return retorno;
}
///---------------FACTORIAL---------------------///

int getFactorial(long *resultadoFactorialA, long *resultadoFactorialB, long auxUno, long auxDos, int validacionOperandoUno, int validacionOperandoDos)
{
    int retorno = 1;
    long i = 1;
    long ii = 1;
    long auxFactorialA = 1;
    long auxFactorialB = 1;

if(validacionOperandoUno == 0 && validacionOperandoDos == 0)
{
    if(auxUno > 0 && auxDos > 0)
    {
        for (i = 1 ; i <= auxUno; i++)
        {
            auxFactorialA = auxFactorialA * (i);
        }

        for (ii = 1 ; ii <= auxDos; ii++)
        {
            auxFactorialB = auxFactorialB * (ii);
        }
        *resultadoFactorialA = auxFactorialA;
        *resultadoFactorialB = auxFactorialB;
        retorno = 0;
    }
    else if(auxUno > 0 && auxDos <= 0)
    {
        for (i = 1 ; i <= auxUno; i++)
        {
            auxFactorialA = auxFactorialA * (i);
        }
        *resultadoFactorialA = auxFactorialA;
        retorno = -1;
    }
    else if(auxUno <= 0 && auxDos > 0)
    {
        for (ii = 1 ; ii <= auxDos; ii++)
        {
            auxFactorialB = auxFactorialB * (ii);
        }
        *resultadoFactorialB = auxFactorialB;
        retorno = -2;
    }
    else if(auxUno <= 0 && auxDos <= 0)
    {
        retorno = -3;
    }
}
else if (validacionOperandoUno == 0 && validacionOperandoDos == 1)
{
    if(auxUno > 0)
    {
        for (i = 1 ; i <= auxUno; i++)
        {
            auxFactorialA = auxFactorialA * (i);
        }
        *resultadoFactorialA = auxFactorialA;
        retorno = 1;
    }
    else
    {
        retorno = -4;
    }
}
else if (validacionOperandoUno == 1 && validacionOperandoDos == 0)
{
    if(auxDos > 0)
    {
        for (ii = 1 ; ii <= auxDos; ii++)
        {
            auxFactorialB = auxFactorialB * (ii);
        }
        *resultadoFactorialB = auxFactorialB;
        retorno =  2;
    }
    else
    {
        retorno = -5;
    }
}
else if (validacionOperandoUno == 1 && validacionOperandoDos == 1)
{

    printf("\nNO HA INGRESADO NINGUN OPERANDO (A y B)\n\n");
    retorno =  -6;
}
return retorno;
}
///------------------TOTAL FUNCIONES-----------------///

int getTotalFunciones(int validacionSuma, int validacionResta, int validacionDivision, int validacionMultiplicacion, int validacionFactorial)
{
    int retorno = -1;
    if(validacionSuma == 0 && validacionResta ==0 && validacionDivision == 0 && validacionMultiplicacion == 0 && validacionFactorial !=10)
    {
        retorno = 0;
    }
    return retorno;
}

#endif // FUNCIONES_H_INCLUDED
