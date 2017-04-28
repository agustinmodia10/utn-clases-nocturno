#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    int contador=0;
    int suma=0;
    int sumaimpar = 0;
    float promedio;
    int max;
    int min;
    int posmax=0;
    int posmin=0;
    int contabucles = 0;
    int i=0;
    int e=0;
    int h=0;
    int par = 0;
    int y = 0;
    int impar = 0;
    int cantpar = 0;
    int cantimpar = 0;
    int contadorpar = 1;
    int contadorimpar = 1;
    int cante = 0;
    int contadore = 1;
    int canth = 0;
    int contadorh = 1;
     int canty = 0;
    int contadory = 1;
    char seguir = 'n';
     int sumaimpardecre = 0;
    do
    {
        printf("Ingrese un numero: ");
         fflush(stdin);
        scanf("%d", &num);
        if (num<=0)
            {printf(" error Ingrese un numero positivo: ");
        fflush(stdin);
        scanf("%d", &num);
       }

    contabucles++;
             suma=suma+num;
    if (max<num || i==0)
        {
            max=num;
            posmax=contador++;
                        i=1;

            }

    if (min>num || i==0)
        {
            min=num;
            posmin=contador+1;
            i=1;
        }
 if (num%2==0 )
    {          par=num;
               printf(" es par\n\n");
               cantpar=contadorpar++;

    }

   else

    {
        impar=num;
        printf(" es impar\n\n");
               cantimpar=contadorimpar++;
        sumaimpar=sumaimpar+impar;
    }

    if (num>=3 && num<=15)
    {
        e=num;
        cante=contadore++;
    }
        if (num>=16 && num<=29)
    {
        h=num;
        canth=contadorh++;
    }

        if (num>=30)
    {
        y=num;
        canty=contadory++;
    }
    printf("desea seguir");
            fflush(stdin);

    scanf("%c" ,& seguir);




    } while (seguir == 's');


system("pause");


   printf("\n\n Cantidad de numeros ingresados son %d\n", contabucles);
system("\npause");
   printf("los numeros pares son %d\n\n", cantpar);
   printf("los numeros impares son %d\n\n", cantimpar);
   system("\npause");
   printf("\n\nLa suma de todos los numeros impares  es %d\n", sumaimpar);
        system("\npause");
 printf("los numeros entre 3 y 15 son %d\n\n", cante);
  printf("los numeros entre 16 y 29 son %d\n\n", canth);
 printf("los numeros mayores o igual  a 30 son %d\n\n", canty);

system("\npause");
    printf("\nEl maximo es %d ", max);
    printf("\nEl minimo es %d ", min);
system("\npause");
    printf("\n\nLa suma de todos los numeros es %d\n", suma);

    promedio=(float)suma/contabucles;
    printf("\nEl promedio de todos los numeros es %.1f\n\n", promedio);


   for(i=sumaimpar;i>=1;i--)
{

    sumaimpardecre += i;
    printf("\n%d\n" , i);
}








    system("\npause");

}
