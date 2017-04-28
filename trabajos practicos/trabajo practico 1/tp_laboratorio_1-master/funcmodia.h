/** \brief recibe num1 y devuelve el factoreo del num1
 *
 * \param num1 mumero a factoreal
 * \return num1 factoreado
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

/** \brief recibe num1 y num 2 y devuelve la suma entre si
 *
 * \param num1 1er numero de la suma
 * \param num2 2do numero de la suma
 * \return la suma entre num1 y num2
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

/** \brief recibe num1 y num 2 y devuelve la resta entre si
 *
 * \param num1 1er numero de la resta
 * \param num2 2do numero de la resta
 * \return la resta entre num1 y num2
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



/** \brief recibe num1 y num 2 y devuelve la multiplicacion entre si
 *
 * \param num1 1er numero de la multiplicacion
 * \param num2 2do numero de la multiplicacion
 * \return la multiplicacion entre num1 y num2
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

/** \brief recibe num1 y num 2 y devuelve la division entre si
 *
 * \param num1 1er numero de la division
 * \param num2 2do numero de la division
 * \return la division entre num1 y num2
 *
 */


float division(float num1, float num2);

float division(float num1, float num2)
{
    float resp;

    resp = num1 / num2;

    if(num2 == 0)
    {
        printf("ERROR, vuelva a ingresar numero\n");
    }
    else
    {
        printf("La division da: %.2f\n", resp);
    }


    return resp;


}


