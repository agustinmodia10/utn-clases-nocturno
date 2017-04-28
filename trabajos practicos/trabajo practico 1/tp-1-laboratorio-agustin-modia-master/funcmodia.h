
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


float suma(float num1, float num2);

float suma(float num1, float num2)
{
    float resp;

    resp = num1 + num2;
    printf("La suma da: %.2f\n", resp);

    return resp;
}


float resta(float num1, float num2);

float resta(float num1, float num2)
{
    float resp;

    resp = num1 - num2;
    printf("La resta da: %.2f\n", resp);

    return resp;
}




float multiplicar(float num1, float num2);

float multiplicar(float num1, float num2)
{
    float resp;

    resp = num1 * num2;
    printf("La multiplicacion da: %.2f\n", resp);

    return resp;
}



float division(float num1, float num2);

float division(float num1, float num2)
{
    float resp;

    resp = num1 / num2;

    if(num2 == 0)
    {
        printf("ERROR, ingrese un numero diferente a 0 \n");
    }
    else
    {
        printf("La division da: %.2f\n", resp);
    }


    return resp;


}


