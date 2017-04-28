#include <stdio.h>
#include <stdlib.h>
#define tam 5

int main()
{
    int vector [tam];
    int i=0;
    int h=0;
    int aux;

  printf("ingrese 5 numeros\n");

    for (i=0; i<tam; i++)
   {
          printf("\ningrese un numero: ");
          scanf("%d", & vector[i]);

   }


printf("vector sin ordear\n");
    for (i=0; i<tam; i++)
   {

       printf("%d\t", vector[i]);
   }

   for (i=0; i<tam-1; i++)
   {
      for (h=i+1; h<tam; h++)
   {
      if( vector[i]>vector[h])
      {
          aux = vector[i];
          vector[i]= vector[h];
          vector[h]=aux;
      }
   }
   }

printf(" \nordenado de menor a mayor:\n");
   for (i=0; i<tam; i++)
   {


       printf("%d\t", vector[i]);
   }

for (i=0; i<tam-1; i++)
   {
      for (h=i+1; h<tam; h++)
   {
      if( vector[i]<vector[h])
      {
          aux = vector[i];
          vector[i]= vector[h];
          vector[h]=aux;
      }
   }
   }

printf(" \nordenado de mayor a menor:\n");
   for (i=0; i<tam; i++)
   {

       printf("%d\t", vector[i]);
   }
    return 0;
}
