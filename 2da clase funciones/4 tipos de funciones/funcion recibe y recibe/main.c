#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
//funcion recibe y devuelve//
int main()
{   int num1;
    int num2;
    int resultado;
    printf("ingrese el 1er num");
    scanf("%d", & num1);
    printf("ingrese el 2do num");
    scanf("%d", & num2);
    resultado = suma(num1, num2);
    printf(" el resultado es %d", resultado);
    return 0;
}

