#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <windows.h>
#include <string.h>
#include <stdlib.h>


typedef struct
{

    char name[50];
    int age;
    int es;
    long int doc;

}iper;

int vM(int minimo, int maximo);

char vRta(char resp);

void inicio(iper people[]);

int oelibre(iper people[]);

void ups(iper people[]);

void clears(iper people[]);

void lista(iper people[]);

void cEdad(iper people[]);

void grafico(iper people[]);


#endif // FUNCIONES_H_INCLUDED

