#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define tam 2
void ordenavector(int [], char [][15], char [], float [] , int ,  int );

int main()
{
    int legajos [tam];
    float sueldos [tam];
    char nombres[tam][15];
    char sexo [tam];
    int i=0;
    int h=0;
    int aux;
    //int cri=0;


 printf("ingrese su nombre");
 fflush(stdin);
 gets(nombres);
 printf("%s", nombres);







  printf("ingrese 5 usuarios \n");

    for (i=0; i<tam; i++)
   {
          printf("\ningrese un legajos: ");
          fflush(stdin);
          scanf("%d", & legajos[i]);


          printf("\ningrese un sueldo: ");
          fflush(stdin);
          scanf("%f", & sueldos[i]);


          printf("\ningrese un sexo: ");
          fflush(stdin);
          scanf("%c", & sexo[i]);


          printf("\ningrese un nombres: ");
          fflush(stdin);
          gets(nombres[i]);

   }

  /* printf("\ningrese 1 0 2 para el criterio: ");
          scanf("%d", & cri);*/


printf("vector sin ordear\n");

 printf("\n\tnombre\t\t legajos\t sexo\t\t sueldos\n");

 for ( i=0 ; i<tam; i++)
{

  printf(" %15s %15d %15c %13.2f \n", nombres[i] ,legajos[i] , sexo[i], sueldos[i]);
}


   //ordenavector(legajos, nombres, sexo , sueldos ,tam, 1);
char auxcadena;
char auxchar;
float auxfloat;

   for (h=i+1; h<tam; h++)
   {
      if( legajos[i]>legajos[h])
      {
          aux = legajos[i];
          legajos[i]= legajos[h];
          legajos[h]=aux;

           strcpy(auxcadena,nombres[i]);
           strcpy(nombres[i],nombres[h]);
           strcpy(nombres[h], auxcadena);

           auxchar = sexo[i];
          sexo[i]= sexo[h];
          sexo[h]=auxchar;

           auxfloat = sueldos[i];
          sueldos[i]= sueldos[h];
          sueldos[h]=auxfloat;
      }
   }




   printf(" \nordenado de menor a mayor:\n");
printf("\n\tnombre\t\t legajos\t sexo\t\t sueldos\n");
   for (i=0; i<tam; i++)
   {


       printf(" %15d %15s %15c %13.2f \n", legajos[i], nombres[i]  , sexo[i], sueldos[i]);
   }

  /* ordenavector(legajos, nombres, sexo , sueldos ,tam, 2);

   printf(" \nordenado de mayor a menor:\n");
printf("\n\tnombre\t\t legajos\t sexo\t\t sueldos\n");
   for (i=0; i<tam; i++)
   {

       printf(" %15d %15s %15c %13.2f \n", legajos[i], nombres[i]  , sexo[i], sueldos[i]);
   }*/




    return 0;
}






void ordenavector(int vector[], char nombres[][15], char sexo[], float sueldos[], int tamano,  int criterio)

{
    //criterio es para  1 ordena de menor a mayor y 2 de mayor a menor

     int i=0;
     int h=0;
     int aux;
     char auxcadena;
     float auxfloat;
     char auxchar;


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

           strcpy(auxcadena,nombres[i]);
           strcpy(nombres[i],nombres[h]);
           strcpy(nombres[h], auxcadena);

           auxchar = sexo[i];
          sexo[i]= sexo[h];
          sexo[h]=auxchar;

           auxfloat = sueldos[i];
          sueldos[i]= sueldos[h];
          sueldos[h]=auxfloat;
      }
   }
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

           strcpy(auxcadena,nombres[i]);
           strcpy(nombres[i],nombres[h]);
           strcpy(nombres[h], auxcadena);

           auxchar = sexo[i];
          sexo[i]= sexo[h];
          sexo[h]=auxchar;

           auxfloat = sueldos[i];
          sueldos[i]= sueldos[h];
          sueldos[h]=auxfloat;
      }
   }
   }


}
}
