#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char array1[15], array2[15];
    int numeroCaracteres;
    printf("Ingrese caracteres ");
    fgets(array1, 15, stdin); /// LIMITA CANTIDAD DE CARACTERES!!!
    printf("Ingresado : %s", array1);
    strcpy (array2, array1);
    printf("\n\nTexto copiado : %s", array2);
    numeroCaracteres = strlen(array1);
    printf("\n\nNumero de caracteres : %d", numeroCaracteres);
    printf("\n\nString convertido a enteros : %d", atoi(array1)+10);
    return 0;
}
