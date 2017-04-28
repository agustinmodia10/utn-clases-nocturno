#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED



/** \brief factorial del 1er operando
 *
 * \param primer operando
 * \param
 * \return retorna el factorial del 1er parametro
 *
 */

double factorial(double num1);

double factorial(double num1)
{
    double resp;

    if(num1 == 1)
    {
        return 1;
    }

    resp = num1 * factorial(num1 - 1);

    return resp;
}

/** \brief suma los 2 operandos
 *
 * \param 1er operando
 * \param  2do operamdo
 * \return retorna la suma entre los 2 parametros
 *
 */


float suma(float num1, float num2);

float suma(float num1, float num2)
{
    float resp;

    resp = num1 + num2;
    printf("La suma da: %.2f\n", resp);

    return resp;
}

/** \brief resta los 2 operandos
 *
 * \param 1er operando
 * \param  2do operamdo
 * \return retorna la resta entre los 2 parametros
 *
 */

float resta(float num1, float num2);

float resta(float num1, float num2)
{
    float resp;

    resp = num1 - num2;
    printf("La resta da: %.2f\n", resp);

    return resp;
}

/** \brief multriplicacion de  los 2 operandos
 *
 * \param 1er operando
 * \param  2do operamdo
 * \return retorna la multriplicacion entre los 2 parametros
 *
 */


float multiplicar(float num1, float num2);

float multiplicar(float num1, float num2)
{
    float resp;

    resp = num1 * num2;
    printf("La multiplicacion da: %.2f\n", resp);

    return resp;
}

/** \brief la division entre los 2 operandos
 *
 * \param 1er operando
 * \param  2do operamdo
 * \return retorna la division entre los 2 parametros
 *
 */

float division(float num1, float num2);

float division(float num1, float num2)
{
    float resp;

    resp = num1 / num2;

    printf("La division da: %.2f\n", resp);



    return resp;


}





#endif // FUNCIONES_H_INCLUDED
