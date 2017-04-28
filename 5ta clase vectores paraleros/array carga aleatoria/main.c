#include <stdio.h>
#include <stdlib.h>


void mostrararray( int [], int);
int validarminymax( int  , int , int );
#define tam 5

int main()
{
    int numeros [tam]={};
    int ope1 = 0;
    int valor;
    int indice;
    int auxint;

for ( ope1=0 ; ope1<tam; ope1++)
{
    printf("ingrese un numero");
scanf("%d", & valor);

printf("ingrese indice");
scanf("%d", & auxint);
while (validarminymax(auxint, tam-1,0)==0)
{
    printf("error ingrese valor entre 0 y 4");
    scanf("%d", & auxint);

}
indice=auxint;
numeros[indice]+=valor;

}



  printf("los numeros son:\n");
  printf("indice0\tindice1\tindice2\tindice3\tindice4\t\n");


mostrararray(numeros, tam);

    return 0;
}


void mostrararray( int num [], int tam2 )
{
    int ope2=0;
    for ( ope2=0 ; ope2<tam2; ope2++)
{
 printf("%d\t",  num [ope2]);

}

}

int validarminymax( int num , int max, int min )
{   int aux;
    if(min>max)
    {
        aux=min;
        min=max;
        max=aux;
    }

    int esvalido=0;

    if( num>=min && num<=max )
    {
        esvalido=1;
    };


return esvalido;
}

