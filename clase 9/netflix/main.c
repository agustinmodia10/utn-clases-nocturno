#include <stdio.h>
#include <stdlib.h>
#define S 5
#define C 10


/*
2- mostrar cada uno
3- mostrar clientes con su serie
4- por cada serie los clientes que la estan viendo
5- todos los clientes que ven TBBT (100)
6- La serie menos popular

Crear una cuarta estructura que permita relacionar un cliente con una serie, de esta manera podremos obtener una relacion
muchos a muchos (Un cliente que ve muchas series)

7- Todas las series que ven los clientes de nombre "Juan"
*/


typedef struct
{
    int idSerie;
    char titulo[20];
    int temporadas;
    char genero[20];
    int estado;
}eSerie;

typedef struct
{
    int idCliente;
    char nombre[30];
    int estado;
    int idSerie;
}eCliente;

typedef struct
{
    int idSerie;
    int cont;
} eLoser;

void cargarSeries(eSerie[]);
void cargarClientes(eCliente[]);

void mostrarSeries(eSerie[],int );
void mostrarClientes(eCliente[], int);
void mostrarClientesConSerie(eCliente[], eSerie[], int, int);
void mostrarSeriesConClientes(eCliente[], eSerie[], int, int);
void mostrarSerieLoser(eCliente [], eSerie [],eLoser [], int , int );
void mostrarClientesTBBT(eCliente[], eSerie[], int, int);
void mostrarSeriemasvista(eCliente [], eSerie [],eLoser [], int , int );




int main()
{

    eSerie series[S];
    eCliente clientes[C];

     eLoser loserr[S]={0};


    cargarSeries(series);

    cargarClientes(clientes);

    mostrarSeries(series, S);

    system("pause");

    mostrarClientes(clientes, C);
    system("pause");
    system("cls");
    mostrarClientesConSerie(clientes, series, C,S);
     system("pause");
    system("cls");
    mostrarSeriesConClientes(clientes,series,C,S);

    system("pause");
    system("cls");
    mostrarClientesTBBT(clientes, series,C,S);
system("pause");
    system("cls");
 mostrarSerieLoser(clientes, series, loserr,C,S);

 system("pause");
    system("cls");
 mostrarSeriemasvista(clientes, series, loserr,C,S);
    return 0;
}

void cargarSeries(eSerie series[])
{
   int idSerie[5]={100,101,102,103,104};
    int estado[5]={1,1,1,1,1};
     char titulo[5][30]={"TBBT","BB","GOT","AHS","SCD"};
    int temporadas[5]={9,7,7,6,1};
    char genero[5][30]={"Comedia","Policial","Ciencia Ficcion","Terror","Comedia"};

    int i;
     for(i=0; i<5;i++)
    {
        series[i].idSerie = idSerie[i];
        strcpy(series[i].titulo, titulo[i]);
        series[i].estado = estado[i];
        series[i].temporadas = temporadas[i];
        strcpy(series[i].genero, genero[i]);
    }

}
void cargarClientes(eCliente clientes[])
{
    int id[10] = {1,2,3,4,5,6,7,8,9,10};
    char nombres[10][30]={"juan","maria","pedro","luis","romina","jose","andrea","patricia","luciano","camila"};
    int estado[10]={1,1,1,1,1,1,1,1,1,1};
    int idSerie[10]={100,100,101,103,103,101,102,103,100,100};
    int i;

    for(i=0; i<10;i++)
    {
        clientes[i].idCliente = id[i];
        strcpy(clientes[i].nombre, nombres[i]);
        clientes[i].estado = estado[i];
        clientes[i].idSerie = idSerie[i];
    }

}



void mostrarSeries(eSerie serie[], int num)
{
    int e,l;
	eSerie auxserie;

	for(e = 0; e < num - 1; e++)
    {
        for(l = e + 1; l < num; l++)
        {
            if(strcmp(serie[e].titulo, serie[l].titulo) > 0)
			{
				auxserie = serie[e];
				serie[e] = serie[l];
				serie[l] = auxserie;
			}
        }
    }

    for(e = 0; e < num; e++)
	{
        if(serie[e].estado != 0)
        {
            printf("\n  titulo: %s\n  genero: %s\n temporada: %d\n Id serie: %d\n", serie[e].titulo, serie[e].genero, serie[e].temporadas, serie[e].idSerie);
        }

    }


}

void mostrarClientes (eCliente cliente[], int num)
{
    int e,l;
	eCliente auxcliente;

	for(e = 0; e < num - 1; e++)
    {
        for(l = e + 1; l < num; l++)
        {
            if(strcmp(cliente[e].nombre, cliente[l].nombre) > 0)
			{
				auxcliente = cliente[e];
				cliente[e] = cliente[l];
				cliente[l] = auxcliente;
			}
        }
    }

    for(e = 0; e < num; e++)
	{
        if(cliente[e].estado != 0)
        {
            printf("\n  nombre: %s\n Id cliente: %d \n Id serie: %d\n", cliente[e].nombre, cliente[e].idCliente, cliente[e].idSerie);
        }

    }


}


void mostrarClientesConSerie(eCliente cliente [], eSerie serie [], int num, int nums)
{
    int e,l;

     for(e = 0; e < num ; e++)
    {

        if(cliente[e].estado != 0)
        {
            printf("\n  nombre: %s\n Id cliente: %d \n Id serie: %d\n", cliente[e].nombre, cliente[e].idCliente, cliente[e].idSerie);
        }


        for(l = 0 ; l < nums; l++)
        {
            if(serie[l].idSerie==cliente[e].idSerie)
			{
				printf(" serie: %s \n", serie[l].titulo );

			}
        }
    }



}


void mostrarSeriesConClientes(eCliente cliente [], eSerie serie [], int num, int nums)
{
    int e,l;
    int numeracion=1;
     for(e = 0; e < nums ; e++)
    {

        if(serie[e].estado != 0)
        {
            printf("\n  titulo: %s\n  genero: %s\n temporada: %d\n Id serie: %d\n", serie[e].titulo, serie[e].genero, serie[e].temporadas, serie[e].idSerie);
        }


        for(l = 0 ; l < num; l++)
        {

            if(serie[e].idSerie==cliente[l].idSerie)
			{
			    printf("  -> cliente: %s \n", cliente[l].nombre );
               numeracion++;
			}
        }
    }



}



void mostrarClientesTBBT(eCliente cliente[], eSerie serie[], int num, int nums)
{
    int e,l;

     for(e = 0; e < nums ; e++)
    {

        if(serie[e].estado != 0 && serie[e].idSerie == 100)
        {
            printf("\n  titulo: %s\n", serie[e].titulo);
        }


        for(l = 0 ; l < num; l++)
        {

            if(serie[e].idSerie==cliente[l].idSerie && cliente[l].idSerie == 100)
			{
			    printf("  -> cliente: %s \n", cliente[l].nombre );

			}
        }
    }



}


void mostrarSerieLoser(eCliente cliente[], eSerie serie[],eLoser loser[], int cli, int ser)
{

     int e=0;
     int l=0;
     int min = 0;
     int flagmin = 0;
     int cont[5]={0};

    eLoser aux;
    eSerie  auxs;



   for(e=0; e<ser; e++)
            {
                loser[e].idSerie=serie[e].idSerie;
            }


          for(e = 0; e < ser ; e++)
    {

        for(l = 0 ; l < cli; l++)
        {

              if( cliente[l].idSerie == loser[e].idSerie )
              {
                  loser[e].cont++;
              }


        }
    }


    printf("las series menos vista son:\n");


    for(e=0; e<ser; e++)
            {
                if(flagmin ==0 || loser[e].cont  <min)
                {
                    min = loser[e].cont;
                    flagmin = 1;
                }
            }


            for(e=0; e<ser; e++)
            {




                if(loser[e].cont==min)
                {

                 printf("id %d\n",loser[e].idSerie);
                 printf("titulo %s\n",serie[e].titulo);

                }


            }






}

void mostrarSeriemasvista(eCliente cliente[], eSerie serie[],eLoser loser[], int cli, int ser)
{

     int e=0;
     int l=0;
     int max = 0;
     int flagmax = 0;
     int cont[5]={0};

    eLoser aux;
    eSerie  auxs;



   for(e=0; e<ser; e++)
            {
                loser[e].idSerie=serie[e].idSerie;
            }


          for(e = 0; e < ser ; e++)
    {

        for(l = 0 ; l < cli; l++)
        {

              if( cliente[l].idSerie == loser[e].idSerie )
              {
                  loser[e].cont++;
              }


        }
    }


    printf("las series mas vistas\n");


    for(e=0; e<ser; e++)
            {
                if(flagmax ==0 || loser[e].cont  >max)
                {
                    max = loser[e].cont;
                    flagmax = 1;
                }
            }


            for(e=0; e<ser; e++)
            {




                if(loser[e].cont==max)
                {

                 printf("id %d\n",loser[e].idSerie);
                 printf("titulo %s\n",serie[e].titulo);

                }


            }






}
