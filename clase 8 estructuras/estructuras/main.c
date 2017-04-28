#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int dia;
    int mes;
    int ano;

}efecha;





typedef struct
{
    int legajo;
    char nombre [20];
    float sueldo;
    char sexo;
    efecha fecha;

}epersona;



void mostrarpersona (epersona );
void mostrarpersonas (epersona [] , int );



int main()
{
    epersona unapersona;
    epersona gente []={{1010, " diego maradona", 10000, 'm', {10,10,1010}},{2222, "diego milito", 22000, 'm', {22,22,2222}}};
    int i = 0;
/*for(i=0; i<1; i++)
    {
    printf("ingrese legajo");
    scanf("%d", & unapersona.legajo[i]);
    printf("ingrese nombre");
    fflush(stdin);
    gets(unapersona.nombre[i]);void mostrarpersona (epersona x)
{
    int i=0;
    printf("legajo\t nombre\t         sueldo\t    sexo\t fecha de nacimiento\n");
    for(i=0; i<1; i++)
    {printf("%d\t %s\t%20.2f\t%c\t%d/%d/%d\n ", x.legajo[i], x.nombre[i], x.sueldo[i], x.sexo[i], x.fecha.dia[i], x.fecha.mes[i], x.fecha.ano[i]  );}
}
    printf("ingrese sueldo");
    scanf("%f", & unapersona.sueldo[i]);
    printf("ingrese sexo");
    fflush(stdin);
    scanf("%c", & unapersona.sexo[i]);

    printf("ingrese dia de nacimiento");
    scanf("%d", & unapersona.fecha.dia[i]);

    printf("ingrese mes de nacimiento");
    scanf("%d", & unapersona.fecha.mes[i]);

    printf("ingrese año de nacimiento");
    scanf("%d", & unapersona.fecha.ano[i]);

    }
 mostrarpersona(unapersona);*/

mostrarpersonas(gente, 2);

    return 0;
}

void mostrarpersona (epersona x)
{

    printf("legajo\t nombre\t                    sueldo\t    sexo\t fecha de nacimiento\n");

    printf("%d\t %s\t%10.2f\t%c\t%d/%d/%d\n ", x.legajo, x.nombre, x.sueldo, x.sexo, x.fecha.dia, x.fecha.mes, x.fecha.ano  );
}
void mostrarpersonas (epersona x [], int tam)
{
    int i=0;

    for(i=0; i<tam; i++)
    { mostrarpersona(x[i]);
    }
}

