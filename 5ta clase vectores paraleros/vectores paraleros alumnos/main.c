#include <stdio.h>
#include <stdlib.h>
#define tam 10
#define pf  printf
#define a1  pf ("\n\t1. ingrese los datos de los  alumnos");
#define a2 pf  ("\n\t2.ingrese legajo para buscar x legajo");
#define a3 pf (" \n\t3.maximas notas de los alumnos");
#define a5 pf (" \n\t4.calucular notas y listar a todos los alumnos con el mismo promedio");
#define a6 pf (" \n\t5.listar todos");
#define a7 pf (" \n\t6.salir");

/*que hace este programa
#define a1  pf ("\n\t1. ingrese los datos de los  alumnos");
#define a2 pf  ("\n\t2.ingrese legajo para buscar x legajo");
#define a3 pf (" \n\t3.maximas notas de los alumnos");
#define a5 pf (" \n\t4.calucular notas y listar a todos los alumnos con el mismo promedio");
#define a6 pf (" \n\t5.listar todos");
#define a7 pf (" \n\t6.salir");*/



int main()
{
    int edades[tam]= {0};
    int legajos[tam]= {0};
    int auxEdad;
    int pos;
    int flagMaximo = 0;
    int maxProm;
    int auxLeg;
    int flagEncontro=0;
    int opcion;
    float notas[tam]= {0};
    float promedio;
    float suma=0;
    int i;
    char seguir='s';

    do
    {
        a1; a2; a3; a5; a6; a7;
        pf("\n\t\t ingrese opcion: \t");
        scanf("%d", &opcion);
        switch(opcion)
        {
        case 1:
            for(i=0; i<tam; i++)
            {
                printf("Ingrese legajo: ");
                scanf("%d", &legajos[i]);
                printf("Ingrese una edad: ");
                scanf("%d", &edades[i]);
                printf("Ingrese promedio: ");
                scanf("%f", &notas[i]);
            }
            break;
        case 2:
            printf("Ingrese legajo a buscar: ");
            scanf("%d", &auxLeg);


            for(i=0; i<tam; i++)
            {
                if(legajos[i]==auxLeg)
                {
                    printf("%d\t%d\t%f\n",legajos[i], edades[i], notas[i]);

                    break;
                }
                else
            {
                printf("Legajo inexistente\n");

               break;
            }

            }


            break;
        case 3:
            for(i=0; i<tam; i++)
            {
                if(flagMaximo ==0 || notas[i]>maxProm)
                {
                    maxProm = notas[i];
                    flagMaximo = 1;
                }
            }
            for(i=0; i<tam; i++)
            {
                if(notas[i]==maxProm)
                {
                    printf("%d\t%d\t%f\n",legajos[i], edades[i], notas[i]);
                }
            }
            break;

        case 4:

            for(i=0; i<tam; i++)
            {
                suma+=notas[i];
            }
            promedio = suma/tam;
            printf("Promedio superior al promedio general\n");
            for(i=0; i<tam; i++)
            {
                if(notas[i]>promedio)
                {
                    pf("%d\t%d\t%f\n",legajos[i], edades[i], notas[i]);
                }
            }
             //suma=0;
            break;



        case 5:
            for(i=0; i<tam; i++)
            {

                printf("%d\t%d\t%f\n",legajos[i], edades[i], notas[i]);

            }
            break;
        case 6:
            seguir='n';
            break;




        }
    system("pause");
    system("cls");

    }
    while(seguir=='s');
}


