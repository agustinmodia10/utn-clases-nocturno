#include <stdio.h>
#include <stdlib.h>
#define tam 5
void ordenavector(int[], int , int );


int main()
{
    int vector [tam];
    int i=0;
    int h=0;
    int aux;
    //int cri=0;




  printf("ingrese 5 numeros\n");

    for (i=0; i<tam; i++)
   {
          printf("\ningrese un numero: ");
          scanf("%d", & vector[i]);

   }
  /* printf("\ningrese 1 0 2 para el criterio: ");
          scanf("%d", & cri);*/


printf("vector sin ordear\n");
    for (i=0; i<tam; i++)
   {

       printf("%d\t", vector[i]);
   }



   ordenavector(vector,tam, 1);

   ordenavector(vector,tam, 2);


    return 0;
}






void ordenavector(int vector[], int tamano, int criterio)

{
    //criterio es para  1 ordena de menor a mayor y 2 de mayor a menor

     int i=0;
     int h=0;
     int aux;


     //ordena de menor a mayor

     if( criterio ==1)
   {
       for (i=0; i<tamano-1; i++)
   {
      for (h=i+1; h<tamano; h++)
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
   for (i=0; i<tamano; i++)
   {


       printf("%d\t", vector[i]);
   }
   }

  //ordena de mayor a menor

   else
   {
    for (i=0; i<tamano-1; i++)
   {
      for (h=i+1; h<tamano; h++)
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
   for (i=0; i<tamano; i++)
   {

       printf("%d\t", vector[i]);
   }
   }

}
