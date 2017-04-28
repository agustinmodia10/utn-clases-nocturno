#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define pf printf
#define tam 20


int main()

{   char cadena [tam];
    char apellido [30];
    char nomade [100];
    char cadenacopia [tam];
    char cadenaaux[100];
    char cadenaaux2[tam];
    int cantdecaracteres=0;
    int i=0;

    pf("ingrese un nombre");
    fflush(stdin);
    gets(cadenaaux);

    while(strlen(cadenaaux)> 19)
    {
        pf("error ingrese un nombre de menos de 19 caracteres");
        fflush(stdin);
    gets(cadenaaux);
    }

    strcpy(cadena, cadenaaux);



    /*for(i=0; i<1; i++ )
    {
        cadena[i]= toupper(cadena[0]);
    }*/


    cantdecaracteres=strlen(cadena);




    pf("ingrese un apellido");
    fflush(stdin);
    gets(cadenaaux);

    while(strlen(cadenaaux)> 19)
    {
        pf("error ingrese un nombre de menos de 19 caracteres");
        fflush(stdin);
    gets(cadenaaux);
    }

    strcpy(apellido, cadenaaux);


    /*for(i=0; i<1; i++ )
    {
        apellido[i]= toupper(apellido[0]);
    }*/

    strcpy(nomade, apellido);

    strcat(nomade," ");
    strcat(nomade,", ");

    strcat(nomade,cadena);

    //paso cadena a minuscula
    strlwr(nomade);

      nomade[0]= toupper(nomade[0]);


      for(i=0; i<100; i++ )
    {
        if( nomade[i]==' ')
        {
            nomade[i+1]=toupper(nomade[i+1]);
        }
    }


    pf("%s \n  %d \n", nomade, cantdecaracteres);


    system("pause");



    strcpy(cadenacopia, cadena);

    pf("%s\n", cadenacopia);

    system("pause");

    //fgets guarda solo la cantidad de caracteres declarados
    pf("ingrese otro nombre solo se guardaran menos de 19 caracteres");
    fflush(stdin);
    fgets(cadenaaux2,20,stdin);

    strcpy(cadena, cadenaaux2);

    cantdecaracteres=strlen(cadena);


    pf("%s \n %d \n", cadena, cantdecaracteres);



    return 0;
}
