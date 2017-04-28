#include <stdio.h>
#include <stdlib.h>
#include "funcmodia.h"
int main()
{
    char seguir = 'i';
    int opcion = 0;
    int fope1 = 0;
     int fope2 = 0;
    float ope1 = 0;
     float ope2 = 0;
      double resultado;
system("color 8e");
        printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		printf("\n         º               ::  bienvenido a la calculadora  ::         º");
		printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n\n");

        system("pause");

/*printf("ingrese el 1er operando: ");
            scanf("%f", &ope1);
                printf("->ope1 = %.2f\n", ope1);
                fope1 = 1;
                printf("ingrese el 2do operando: ");
            scanf("%f", &ope2);
                printf("->ope2 = %.2f\n", ope2);
                fope2 = 1;
system("pause");*/
system("cls");
    system("color 9f");
    while(seguir == 'i')
    {
        printf("\n         °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");
		printf("\n         °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°CALCULADORA°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°");printf("°");
		printf("\n         °°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
        printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		printf("\n         º                     ::     MENU DE OPCIONES  ::                         º");
		printf("\n         ÌÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¹");
		printf("\n         º  1- Ingrese 1er operando, ope1= %.2f:                               ", ope1);
        printf("\n         º  2- Ingrese 2do operando, ope2= %.2f:                               ", ope2);
		printf("\n         º  3- Calcular la suma (ope1 + ope2)                                      º");
		printf("\n         º  4- Calcular la resta (ope1 - ope2)                                     º");
		printf("\n         º  5- Calcular la division (ope1 / ope2)                                  º");
		printf("\n         º  6- Calcular la multiplicacion (ope1 * ope2)                            º");
		printf("\n         º  7- Calcular el factorial (ope1!)                                       º");
		printf("\n         º  8- Calcular todas las operaciones                                      º");
		printf("\n         º  9- Salir                                                               º");
		printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼");
		printf("\n");




        printf("->Ingrese una opcion: ");
        scanf("%d",&opcion);

        while(opcion < 1 || opcion > 9)
        {
            printf("\nERROR, ingrese opcion nuevamente: ");
            scanf("%d", &opcion);
        }


        switch(opcion)
        {

         case 1:
        printf("ingrese el 1er operando: ");
            scanf("%f", &ope1);
                printf("->ope1 = %.2f\n", ope1);
                fope1 = 1;
                break;
         case 2:
            printf("ingrese el 2do operando: ");
            scanf("%f", &ope2);
                printf("->ope2 = %.2f\n", ope2);
                fope2 = 1;
                break;



            case 3:

                if(fope1 == 1 && fope2 == 1)
                {
                    resultado = suma(ope1, ope2);
                }
                else
                {
                    printf("ERROR, ingrese ambos numeros para realizar la operacion.\n");
                }

                break;

            case 4:

               if(fope1 == 1 && fope2 == 1)
                {
                    resultado = resta(ope1, ope2);
                }
                else
                {
                    printf("ERROR, ingrese ambos numeros para realizar la operacion.\n");
                }

                break;

            case 5:

              if(fope1 == 1 && fope2 == 1)
                {
                    resultado = division(ope1, ope2);
                }
                else
                {
                    printf("ERROR, ingrese ambos numeros para realizar la operacion.\n");
                }

                break;

            case 6:

               if(fope1 == 1 && fope2 == 1)
                {
                    resultado = multiplicar(ope1, ope2);

                }
                else
                {
                    printf("ERROR, ingrese ambos numeros para realizar la operacion.\n");
                }

                break;

            case 7:

                     while(ope1>170)
                    { printf(" ERROR %.2f nose puede factorizar, ingrese un ope1 menor a 171 para realizar la operacion:  ", ope1);
                    scanf("%f", &ope1);
                      printf("->ope1 = %.2f\n", ope1);}

                if(fope1 == 1 & ope1!=0)
                {
                    resultado = factorial(ope1);
                    printf("El factorial de %.2f es: %.2f\n", ope1, resultado);
                }
                else
                {
                    printf("ERROR, ingrese el primer operando mayor a 0 para realizar la operacion.\n");
                }

                break;

            case 8:

               if(fope1 == 1 && fope2 == 1)
                {
                    resultado = suma(ope1, ope2);
                    resultado = resta(ope1, ope2);
                    resultado = division(ope1, ope2);
                    resultado = multiplicar(ope1, ope2);
                    if(ope1!=0 && ope1<171)
                    { resultado = factorial(ope1);

                    printf("El factorial de %.2f es: %.2f\n", ope1, resultado);
                    }
                    else
                    {printf("error no se puede factoriar %.2f\n\n", ope1
                             );

                    }

                }
                else
                {
                    printf("ERROR, ingrese ambos numeros para realizar la operacion.\n");
                }

                break;

            case 9:

                seguir = 'o';

                break;
        }


        system("pause");

        system("cls");


    }
        printf("\n         ÉÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ»");
		printf("\n         º               ::       HASTA LA PROXIMA       ::          º");
		printf("\n         ÈÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍÍ¼\n\n");
		system("pause");
    system("color a0")   ;

    return 0;
}
