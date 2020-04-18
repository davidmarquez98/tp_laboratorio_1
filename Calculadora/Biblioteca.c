#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int ingresarOpcion(void)
{
    int numero;

    printf("\n Ingrese una opcion: ");
    scanf("%d" , &numero);
    return numero;

}

float ingresarFlotante(void)
{
    float numero;

    printf("Ingrese operando: ");
    scanf("%f" , &numero);
    return numero;
}

float suma (float sumaUno , float sumaDos)
{
    float sumar;
    sumar = sumaUno + sumaDos;
    return sumar;
}

float resta (float restaUno , float restaDos)
{
    float restar;
    restar = restaUno - restaDos;
    return restar;
}

float multiplicacion (float multiplicarUno , float multiplicarDos)
{
    float multiplicar;
    multiplicar = multiplicarUno * multiplicarDos;
    return multiplicar;
}

float division(float dividirUno , float dividirDos)
{
    float dividir;
    int retorno = 1;
do{
    if (dividirDos != 0)
    {
        dividir = dividirUno / dividirDos;
        retorno = 0;
    }
    else
    {
        printf("¡No es posible dividir por cero!");
    }
}while(retorno != 0);

    return dividir;
}

float factorial(float factor){

    float fact = 0;

    if (factor > 0)
    {
        for(int i = 1; i < factor ;i++)
        {
        fact = fact + (i * factor);
        }
    return fact;
    }

    else
    {
        printf("\n No se puede factorear un numero negativo! \n");
    }
    }








