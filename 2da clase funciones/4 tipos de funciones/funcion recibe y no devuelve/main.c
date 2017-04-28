#include <stdio.h>
#include <stdlib.h>
int suma (int , int);
int main()
{   int num1;
    int num2;
    printf("ingrese el 1er num");
    scanf("%d", & num1);
printf("ingrese el 2do num");
    scanf("%d", & num2);
    suma(num1, num2);

    return 0;
}

int suma (int x , int y)
{
    int result;

    result = x + y;
    printf("el resultado es :%d", result);
    return result;
}
