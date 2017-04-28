#include <stdio.h>
#include <stdlib.h>
int suma (void);
int main()
{   int resultado;
    resultado = suma();
    printf(" el resultado es %d", resultado);
    return 0;
}

int suma (void)
{

    int num1;
    int num2;
    int result;
    printf("ingrese el 1er num");
    scanf("%d", & num1);
printf("ingrese el 2do num");
    scanf("%d", & num2);
    result = num1 + num2;
    return result;
}
