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

/** \brief  valida maximo
 *
 * \param min
 * \param max
 * \return val
 *
 */

int validarminymax(int minimo, int maximo);


/** \brief valida respuesta
 *
 * \param resp
 * \param
 * \return resp
 *
 */

char validarrta(char resp);

/** \brief inicializa las variables en 0
 *
 * \param iper people[]
 * \param
 * \return 0
 *
 */

void inicioa0(iper people[]);


/**
 * Obtiene el primer indice libre del array.
 * @param lista el array se pasa como parametro.
 * @return el primer indice disponible
 */

int buscalugarlibre(iper people[]);


/** \brief verifica alta del usuario
 *
 * \param iper people[]
 * \param
 * \return el alta del usuario
 *
 */


void alta(iper people[]);

/** \brief borra usuario
 *
 * \param iper people[]
 * \param
 * \return la baja del usuario
 *
 */

void clears(iper people[]);


/** \brief muestra lista
 *
 * \param iper people[]
 * \param
 * \return lista
 *
 */



void lista(iper people[]);



/** \brief muestra el grafico pedido
 *
 * \param iper people[]
 * \param
 * \return grafico
 *
 */

void grafico(iper people[]);


#endif // FUNCIONES_H_INCLUDED

