#include <stdio.h>
#include <stdlib.h>
#include "Biblioteca.h"

int main()
{
    int opciones;
    float primerValor = 0;
    float segundoValor= 0;
    float resultadoSuma;
    float resultadoResta;
    float resultadoMultiplicacion;
    float resultadoDivision;
    float resultadoFactoreoUno;
    float resultadoFactoreoDos;
    do{

        printf ("\n 1. Ingresar 1er operando (A = %.2f ). \n" , primerValor);

        printf ("\n 2. Ingresar 2do operando (B = %.2f). \n" , segundoValor);

        printf ("\n 3. Calcular todas las operaciones: \n");

        printf ("\n 4. Informar resultados: \n");

        printf ("\n 5. Salir. \n");

        opciones = ingresarOpcion();

        switch(opciones){
          case 1:
            system ("cls");
            primerValor = ingresarFlotante();
            break;

        case 2:
            system ("cls");
            segundoValor = ingresarFlotante();
            break;

        case 3:
            system ("cls");
            if(primerValor == 0 && segundoValor == 0 )
            {
                printf("\nNo se cargo ningun numero.\n");
                break;
            }
            else{
            resultadoSuma = suma(primerValor , segundoValor);
            resultadoResta = resta(primerValor , segundoValor);
            resultadoMultiplicacion = multiplicacion(primerValor , segundoValor);
            resultadoDivision = division(primerValor , segundoValor);
            resultadoFactoreoUno = factorial(primerValor);
            resultadoFactoreoDos = factorial(segundoValor);
            printf ("\nCalculos hechos.\n");
            break;
            }
            case 4:
            system ("cls");
            printf(" \n El resultado de %2.f + %2.f es: %2.f \n" , primerValor , segundoValor , resultadoSuma);
            printf(" \n El resultado de %2.f - %2.f es: %2.f \n" , primerValor , segundoValor , resultadoResta);
            printf(" \n El resultado de %2.f * %2.f es: %2.f \n" , primerValor , segundoValor , resultadoMultiplicacion);
            printf(" \n El resultado de %2.f / %2.f es: %2.f \n" , primerValor , segundoValor , resultadoDivision);
            printf(" \n El factorial de %2.f es: %2.f y el factorial de %2.f es: %2.f\n" , primerValor , resultadoFactoreoUno , segundoValor , resultadoFactoreoDos);

            break;

        case 5:
            opciones = 5;
            break;

        default:
            printf("\n Ingrese una opcion valida! \n");
        }

        system("pause");
        system("cls");

    }while(opciones =! 5);

    return 0;
}

