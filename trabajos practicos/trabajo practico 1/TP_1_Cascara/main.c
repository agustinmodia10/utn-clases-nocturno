#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#define ff fflush(stdin)
#define s        pf("\n         �����������������������������������������������������������ͻ")
#define ss 		 pf("\n         �               ::       HASTA LA PROXIMA       ::          �")
#define sss		 pf("\n         �����������������������������������������������������������ͼ\n\n")
#define pf printf
#define i     pf("\n         �����������������������������������������������������������ͻ");
#define ii    pf("\n         �               ::  bienvenido a la calculadora  ::         �");
#define iii   pf("\n         �����������������������������������������������������������ͼ\n\n");
#define pf0 pf(" LA DIVISION NO SE PUEDE HACER YA QUE EL 2DO OPERANDO ES IGUAL A 0 \n");
#define pf2  pf("ERROR, ingrese ambos numeros para realizar la operacion.\n");
#define pf2u  pf("ERROR, ingrese ambos numeros para realizar las otras operaciones.\n");
int main()
{
    char seguir = 'i';
    int opcion = 0;
    int fope1 = 0;
     int fope2 = 0;
    float ope1 = 0;
     float ope2 = 0;
      double resultado;
system("color af");
i;
ii;
iii;

system("pause");
         system("cls");


system("cls");
    system("color 9f");
    while(seguir == 'i')
    {
        pf("\n         ���������������������������������������������������������������������������");
		pf("\n         ��������������������������������CALCULADORA�������������������������������");printf("�");
        pf("\n         ���������������������������������������������������������������������������");
		pf("\n         ������������������������������By Agustin Modia�����������������������������");
		pf("\n         ���������������������������������������������������������������������������");
        pf("\n         �������������������������������������������������������������������������ͻ");
		pf("\n         �                     ::     MENU DE OPCIONES  ::                         �");
		pf("\n         �������������������������������������������������������������������������͹");
		pf("\n         �  1- Ingrese 1er operando, ope1= %.2f:                               ", ope1);
        pf("\n         �  2- Ingrese 2do operando, ope2= %.2f:                               ", ope2);
		pf("\n         �  3- Calcular la suma (ope1 + ope2)                                      �");
		pf("\n         �  4- Calcular la resta (ope1 - ope2)                                     �");
		pf("\n         �  5- Calcular la division (ope1 / ope2)                                  �");
		pf("\n         �  6- Calcular la multiplicacion (ope1 * ope2)                            �");
		pf("\n         �  7- Calcular el factorial (ope1!)                                       �");
		pf("\n         �  8- Calcular todas las operaciones                                      �");
		pf("\n         �  9- Salir                                                               �");
		pf("\n         �������������������������������������������������������������������������ͼ");
		pf("\n");




        pf("->Ingrese una opcion: ");
        ff;
        scanf("%d",&opcion);

        while(opcion < 1 || opcion > 9)
        {
            pf("\nERROR, ingrese opcion nuevamente: ");
            ff;
            scanf("%d", &opcion);
        }


        switch(opcion)
        {

         case 1:
        pf("ingrese el 1er operando: ");
            ff;
            scanf("%f", &ope1);
                pf("->ope1 = %.2f\n", ope1);
                fope1 = 1;
                break;
         case 2:
            pf("ingrese el 2do operando: ");
            ff;
            scanf("%f", &ope2);
                pf("->ope2 = %.2f\n", ope2);
                fope2 = 1;
                break;



            case 3:

                if(fope1 == 1 && fope2 == 1)
                {
                    resultado = suma(ope1, ope2);
                }
                else
                {
                   pf2;
                }

                break;

            case 4:

               if(fope1 == 1 && fope2 == 1)
                {
                    resultado = resta(ope1, ope2);
                }
                else
                {
                    pf2;
                }

                break;

            case 5:
                if(fope1 == 1 && fope2 == 1)

              {
                  if (ope2!=0)
              {
                  if(fope1 == 1 && fope2 == 1)
                {
                    resultado = division(ope1, ope2);
                }
                else
                {
                    pf2;
                }
              }

              else
                {
                    pf0;
                }
              }
              else
                {
                    pf2;
                }



                break;

            case 6:

               if(fope1 == 1 && fope2 == 1)
                {
                    resultado = multiplicar(ope1, ope2);

                }
                else
                {
                    pf2;
                }

                break;

            case 7:

                     while(ope1>170)
                    { pf(" ERROR %.2f nose puede factorizar, ingrese un ope1 menor a 171 para realizar la operacion:  ", ope1);
                      ff;
                      scanf("%f", &ope1);
                      pf("->ope1 = %.2f\n", ope1);}

                if(fope1 == 1 & ope1!=0)
                {
                    resultado = factorial(ope1);
                    pf("El factorial de %.2f es: %.2f\n", ope1, resultado);
                }
                else
                {
                    pf("ERROR, ingrese el primer operando debe ser mayor a 0 para realizar la operacion.\n");
                }

                break;

            case 8:

               if(fope1 == 1 && fope2 == 1)
                {
                    resultado = suma(ope1, ope2);
                    resultado = resta(ope1, ope2);
                    if (ope2!=0)
                    {
                        resultado = division(ope1, ope2);
                    }
                    else
                        {

                            pf0;
                        }

                    resultado = multiplicar(ope1, ope2);
                    if(ope1!=0 && ope1<171)
                    { resultado = factorial(ope1);

                    pf("El factorial de %.2f es: %.2f\n", ope1, resultado);
                    }
                    else
                    {pf("error no se puede factoriar %.2f\n\n", ope1
                             );

                    }

                }
                else
                {
                    if(ope1!=0 && ope1<171)
                    { resultado = factorial(ope1);

                    pf("El factorial de %.2f es: %.2f\n", ope1, resultado);
                    }
                    else
                    {pf("error no se puede factoriar %.2f\n\n", ope1
                             );

                    }

                   pf2u;

                }

                break;

            case 9:

                seguir = 'o';

                break;
        }


        system("pause");

        system("cls");


    }



        s;
        ss;
        sss;

    system("color a0")   ;
    system("pause");
    return 0;
}
