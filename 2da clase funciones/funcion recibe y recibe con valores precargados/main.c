#include <stdio.h>
#include <stdlib.h>

//funcion recibe y devuelve datos precargados//
int suma (int , int);
int main()
{   int num1;
    int num2;
    int resultado;
    /*printf("ingrese el 1er num");
    scanf("%d", & num1);
    printf("ingrese el 2do num");
    scanf("%d", & num2);*/
    resultado = suma(5, 9);
    printf(" el resultado es %d", resultado);
    return 0;
}

int suma (int x , int y)
{
    int result;

    result = x + y;
    return result;
}
