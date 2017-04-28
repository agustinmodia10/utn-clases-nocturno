#include <stdio.h>
#include <stdlib.h>
#define pf printf
#define ff fflush(stdin)
#define n nombres[ope1]
#define num numeros[ope1]
#define l letras[ope1]
int main()
{

    int tam = 0;
    int ope1 = 0;
    int indice = 0;




    pf("cuantos clientes va a ingresar?");
    ff;
    scanf("%d", & tam);

    int numeros [tam];
   char letras [tam];
   char nombres [tam] [100];



for ( ope1=0 ; ope1<tam; ope1++)
{

    pf("Ingrese el nombre del cliente: ");
    ff;
    gets(n);


    pf("ingrese un numero");
    ff;
    scanf("%d", & num);

    pf("ingrese letra");
    ff;
    scanf("%c", & l);


}



    return 0;
}


void mostrararray (int x [], int tam)

{
}



