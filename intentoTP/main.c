#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "funciones.h"

int main()
{
    char seguirOperando='s';
    int opcionUsuario=0;
    float numUno = 0;
    float numDos = 0;
    float suma = 0;
    float resta = 0;
    float division = 0;
    float multiplicacion = 1;
    long factorialA = 1;
    long factorialB = 1;
    int resultadoSuma = 1;
    int resultadoResta = 1;
    int resultadoOperandoUno = 1;
    int resultadoOperandoDos = 1;
    int resultadoDivision = 1;
    int resultadoMultiplicacion = 1;
    int resultadoFactorial = -10;
    int totalFunciones = 1;


    while(seguirOperando=='s')
    {
        if(totalFunciones == -1)
        {
            if(resultadoOperandoUno == 1 && resultadoOperandoDos == 0)
            {
                printf("\nERROR, DEBE INGRESAR EL PRIMER OPERANDO PARA REALIZAR TODAS LAS FUNCIONES\n");
            }
            if(resultadoOperandoUno == 0 && resultadoOperandoDos == 1)
            {
                printf("\nERROR, DEBE INGRESAR EL SEGUNDO OPERANDO PARA REALIZAR TODAS LAS FUNCIONES\n");
            }
            if(resultadoOperandoUno == 1 && resultadoOperandoDos == 1)
            {
                printf("\nERROR, DEBE INGRESAR (A) PRIMER OPERANDO Y (B) SEGUNDO OPERANDO\n");
            }
        }

        if(resultadoOperandoUno == 0)

        {
            printf("1- Ingresar 1er operando (A=%.2f)\n", numUno);
        }
        else
        {
            printf("1- Ingresar 1er operando (A=x)\n");
        }

        if(resultadoOperandoDos == 0)
        {
            printf("2- Ingresar 2do operando (B=%.2f)\n", numDos);
        }
        else
        {
            printf("2- Ingresar 2do operando (B=x)\n");
        }
        if(resultadoSuma == 0 || totalFunciones == 0)
        {
            printf("3- Calcular la suma (A+B)| EL RESULTADO ES : %.2f\n", suma);
        }
        else
        {
            printf("3- Calcular la suma (A+B)\n");
        }
        if(resultadoResta == 0 || totalFunciones == 0)
        {
            printf("4- Calcular la resta (A-B)| EL RESULTADO ES : %.2f\n", resta);
        }
        else
        {
            printf("4- Calcular la resta (A-B)\n");
        }
        if(resultadoDivision == 0 || totalFunciones == 0)
        {
            printf("5- Calcular la division (A/B) | EL RESULTADO ES : %.2f\n", division);
        }
        else
        {
            printf("5- Calcular la division (A/B)\n");
        }
        if(resultadoMultiplicacion == 0 || totalFunciones == 0)
        {
            printf("6- Calcular la multiplicacion (A*B) | EL RESULTADO ES : %.2f\n", multiplicacion);
        }
        else
        {
            printf("6- Calcular la multiplicacion (A*B)\n");
        }
        switch(resultadoFactorial)
        {
            case -6:
                printf("7- Calcular el factorial (A!) | NO HA INGRESADO NINGUN OPERANDO (A y B)\n");
                break;
            case -5:
                printf("7- Calcular el factorial (A!) | OPERANDO DE FACTORIAL (B) < 0 = INVALIDO\n");
                break;
            case -4:
                printf("7- Calcular el factorial (A!) | OPERANDO DE FACTORIAL (A) < 0 = INVALIDO\n");
                break;
            case -3:
                printf("7- Calcular el factorial (A!) | OPERANDO DE FACTORIAL (A) < 0 = INVALIDO | OPERANDO DE FACTORIAL (B) < 0 = INVALIDO \n");
                break;
            case -2:
                printf("7- Calcular el factorial (A!) | OPERANDO DE FACTORIAL (A) < 0 = INVALIDO | FACTORIAL DE (B) %ld = %ld\n", (long)numDos, factorialB);
                break;
            case -1:
                printf("7- Calcular el factorial (A!) | FACTORIAL DE (A) %ld = %ld | OPERANDO DE FACTORIAL (B) < 0 = INVALIDO\n", (long)numUno, factorialA);
                break;
            case 0:
                printf("7- Calcular el factorial (A!) | FACTORIAL DE (A) %ld = %ld // FACTORIAL DE (B) %ld = %ld\n", (long)numUno , factorialA, (long)numDos, factorialB);
                break;
            case 1:
                printf("7- Calcular el factorial (A!) | FACTORIAL DE (A) %ld = %ld\n", (long)numUno, factorialA);
                break;
            case 2:
                printf("7- Calcular el factorial (A!) | FACTORIAL DE (B) %ld = %ld\n", (long)numDos, factorialB);
                break;
            default:
                printf("7. Calcular el factorial (A!)\n");
                break;
        }
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        fflush(stdin);
        scanf("%d",&opcionUsuario);
        while(!(opcionUsuario < 10 && opcionUsuario > 0))
        {
            printf("\nValor ingresado invalidado, intentelo nuevamente \n");
            fflush(stdin);
            scanf("%d",&opcionUsuario);
        }
            switch(opcionUsuario)
            {
                case 1:
                    resultadoSuma = 1;
                    resultadoResta = 1;
                    resultadoMultiplicacion = 1;
                    resultadoDivision = 1;
                    resultadoFactorial = 10;
                    resultadoOperandoUno = getNumUno(&numUno, "1- Ingresar 1er operando (A=x)\n", "\nVALOR INVALIDO! Reingresar 1er operando (A=x) ");
                    break;
                case 2:
                    resultadoSuma = 1;
                    resultadoResta = 1;
                    resultadoMultiplicacion = 1;
                    resultadoDivision = 1;
                    resultadoFactorial = 10;
                    resultadoOperandoDos = getNumDos(&numDos, "2- Ingresar 2do operando (B=x)\n", "\nVALOR INVALIDO! Reingresar 2do operando (A=x) ");

                    break;
                case 3:
                    resultadoSuma= getSuma(&suma, numUno, numDos, resultadoOperandoUno, resultadoOperandoDos, totalFunciones, "\nERROR, DEBE INGRESAR PRIMER OPERANDO (A) (Op 1) \n\n", "\nERROR, DEBE INGRESAR SEGUNDO OPERANDO (B) (OP 2) \n\n", "\nNO HA INGRESADO NINGUN OPERANDO (A y B) \n\n");
                    break;
                case 4:
                    resultadoResta= getResta(&resta, numUno, numDos, resultadoOperandoUno, resultadoOperandoDos, totalFunciones, "\nERROR, DEBE INGRESAR PRIMER OPERANDO (A) (Op 1) \n\n", "\nERROR, DEBE INGRESAR SEGUNDO OPERANDO (B) (OP 2) \n\n", "\nNO HA INGRESADO NINGUN OPERANDO (A y B) \n\n");
                    break;
                case 5:
                    resultadoDivision = getDivision(&division, numUno, numDos, resultadoOperandoUno, resultadoOperandoDos, totalFunciones, "\nERROR, DEBE INGRESAR PRIMER OPERANDO (A) (Op 1) \n\n", "\nERROR, DEBE INGRESAR SEGUNDO OPERANDO (B) (OP 2) \n\n", "\nNO HA INGRESADO NINGUN OPERANDO (A y B) \n\n", "\nDIVIDIR POR 0 NO ES VALIDO\n\n");
                    break;
                case 6:
                    resultadoMultiplicacion = getMultiplicacion(&multiplicacion, numUno, numDos, resultadoOperandoUno, resultadoOperandoDos, totalFunciones, "\nERROR, DEBE INGRESAR PRIMER OPERANDO (A) (Op 1) \n\n", "\nERROR, DEBE INGRESAR SEGUNDO OPERANDO (B) (OP 2) \n\n", "\nNO HA INGRESADO NINGUN OPERANDO (A y B) \n\n");
                    break;
                case 7:
                    resultadoFactorial = getFactorial(&factorialA, &factorialB, (long)numUno, (long)numDos, resultadoOperandoUno, resultadoOperandoDos);
                    break;
                case 8:
                    resultadoSuma= getSuma(&suma, numUno, numDos, resultadoOperandoUno, resultadoOperandoDos, totalFunciones, "\nERROR, DEBE INGRESAR PRIMER OPERANDO (A) (Op 1) \n\n", "\nERROR, DEBE INGRESAR SEGUNDO OPERANDO (B) (OP 2) \n\n", "\nNO HA INGRESADO NINGUN OPERANDO (A y B) \n\n");
                    resultadoResta= getResta(&resta, numUno, numDos, resultadoOperandoUno, resultadoOperandoDos, totalFunciones, "\nERROR, DEBE INGRESAR PRIMER OPERANDO (A) (Op 1) \n\n", "\nERROR, DEBE INGRESAR SEGUNDO OPERANDO (B) (OP 2) \n\n", "\nNO HA INGRESADO NINGUN OPERANDO (A y B) \n\n");
                    resultadoDivision = getDivision(&division, numUno, numDos, resultadoOperandoUno, resultadoOperandoDos, totalFunciones, "\nERROR, DEBE INGRESAR PRIMER OPERANDO (A) (Op 1) \n\n", "\nERROR, DEBE INGRESAR SEGUNDO OPERANDO (B) (OP 2) \n\n", "\nNO HA INGRESADO NINGUN OPERANDO (A y B) \n\n", "\nDIVIDIR POR 0 NO ES VALIDO\n\n");
                    resultadoMultiplicacion = getMultiplicacion(&multiplicacion, numUno, numDos, resultadoOperandoUno, resultadoOperandoDos, totalFunciones, "\nERROR, DEBE INGRESAR PRIMER OPERANDO (A) (Op 1) \n\n", "\nERROR, DEBE INGRESAR SEGUNDO OPERANDO (B) (OP 2) \n\n", "\nNO HA INGRESADO NINGUN OPERANDO (A y B) \n\n");
                    totalFunciones = getTotalFunciones(resultadoSuma, resultadoResta, resultadoDivision, resultadoMultiplicacion, resultadoFactorial);
                    resultadoFactorial = getFactorial(&factorialA, &factorialB, (long)numUno, (long)numDos, resultadoOperandoUno, resultadoOperandoDos);
                    if(totalFunciones == -1)
                        {
                            //resultadoOperandoUno = 1;
                            //resultadoOperandoDos = 1;
                            resultadoSuma = 1;
                            resultadoResta = 1;
                            resultadoDivision = 1;
                            resultadoFactorial = 10;
                            resultadoMultiplicacion = 1;
                        }
                    break;
                case 9:
                    seguirOperando = 'n';
                    break;
            }
    }


    return 0;

    }
