#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funciones.h"

float pedirFlotante(char mensaje[])
{
    float numero;

    printf("%s", mensaje);
    scanf("%f", &numero);

    return numero;
}

float calcularSuma(float sumandoA, float sumandoB)
{
    float resultado;
    resultado = sumandoA + sumandoB;

    return resultado;
}

float calcularResta(float minuendoA, float minuendoB)
{
    float resultado;
    resultado = minuendoA - minuendoB;

    return resultado;
}

float calcularCociente(float dividendo, float divisor)
{
    float resultado;
    resultado = dividendo / divisor;

    return resultado;
}

int validarCociente(float dividendo, float divisor)
{
    int resultado;

    if(divisor == 0)
    {
        if(dividendo == 0)
        {
            resultado = 2; //Indeterminacion
        }
        else
        {
            resultado = 1; //Infinito
        }
    }
    else
    {
        resultado = 0; //OK
    }

    return resultado;
}

float calcularProducto(float multiplicando, float multiplicador)
{
    float resultado;
    resultado = multiplicando * multiplicador;

    return resultado;
}

int calcularFactorial(float factor)
{
    float resultado = 1;
    int contador;

    if(factor == 0)
    {
        resultado = 1;
    }
    else
    {
        for(contador = factor; contador >= 1; contador--)
        {
            resultado = resultado * contador;
        }
    }

    return resultado;
}

int validarFactorial(float factor)
{
    int resultado;
    int factorEntero;

    if(factor < 0)
    {
        resultado = 2; //Numero negativo
    }
    else
    {
        factorEntero = validarEntero(factor);

        switch(factorEntero)
        {
        case 1:
            resultado = 1; //Numero decimal
            break;
        case 0:
            resultado = 0; //Numero entero
            break;
        default:
            printf("Caso no contemplado en la funcion validarEntero. Devolvio %d\n", factorEntero);
            resultado = 1; //Lo retorno como si fuera numero decimal.
            break;
        }
    }

    return resultado;
}

void limpiarPantalla()
{
    system("cls");
}

int validarEntero(float numero)
{
    int numeroEntero = (int)numero;
    int retorno;

    if(numero != numeroEntero)
    {
        retorno = 1; //No es entero
    }
    else
    {
        retorno = 0; //Es entero
    }

    return retorno;
}

int pedirEntero(char mensaje[], int minimo, int maximo)
{
    int numero;

    printf("%s", mensaje);
    scanf("%d", &numero);

    numero = validarEntero(numero, minimo, maximo);

    return numero;
}

int validarEntero(int dato, int minimo, int maximo)
{
    while(dato < minimo || dato > maximo)
    {
        printf("ERROR Ingrese un numero entre %d y %d: ", minimo, maximo);
        scanf("%d", &dato);
    }

    return dato;
}

int sumarNumeros (int primerNumero, int segundoNumero) //Par�metros formales
{
    int retorno; //Creo una variable de retorno con el mismo tipo de datos como primer medida.

    /*Comienzo de la l�gica de la funci�n*/
    retorno = primerNumero + segundoNumero;
    /*Fin de la l�gica de la funci�n*/

    return retorno; //Me aseguro de crear una cl�usula de retorno con la variable, como buena pr�ctica.
}

float validarFlotante(float dato, float minimo, float maximo)
{
    while(dato < minimo || dato > maximo)
    {
        printf("ERROR Ingrese un numero entre %f y %f: ", minimo, maximo);
        scanf("%f", &dato);
    }

    return dato;
}

double pedirDoble(char mensaje[], double minimo, double maximo)
{
    double numero;

    printf("%s", mensaje);
    scanf("%lf", &numero);

    numero = validarDoble(numero, minimo, maximo);

    return numero;
}

double validarDoble(double dato, double minimo, double maximo)
{
    while(dato < minimo || dato > maximo)
    {
        printf("ERROR Ingrese un numero entre %lf y %lf: ", minimo, maximo);
        scanf("%lf", &dato);
    }

    return dato;
}

long pedirLargo(char mensaje[], long minimo, long maximo)
{
    long numero;

    printf("%s", mensaje);
    scanf("%ld", &numero);

    numero = validarDoble(numero, minimo, maximo);

    return numero;
}

long validarLargo(long dato, long minimo, long maximo)
{
    while(dato < minimo || dato > maximo)
    {
        printf("ERROR Ingrese un numero entre %ld y %ld: ", minimo, maximo);
        scanf("%ld", &dato);
    }

    return dato;
}

void mostrarVector(int vector[], int tamanio)
{
    int i;
    for(i = 0; i < tamanio; i++)
    {
        printf("Posicion %d: %d\n", i, vector[i]);
    }
}

void cargarVector(int vector[], int tamanio)
{
    int i;
    for(i = 0; i < tamanio; i++)
    {
        printf("Ingrese un numero para la posicion %d: ", i);
        scanf("%d", &vector[i]);
    }
}

void ordenarVectorMayorMenor(int vector[], int tamanio)
{
    int i;
    int j;
    int auxiliar;

    for(i = 0; i < tamanio - 1; i++)
    {
        for(j = i + 1; j < tamanio; j++)
        {
            if(vector[i] < vector[j]) //Criterio de ordenamiento
            {
                auxiliar = vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;
            }
        }
    }
}

void ordenarVectorMenorMayor(int vector[], int tamanio)
{
    int i;
    int j;
    int auxiliar;

    for(i = 0; i < tamanio - 1; i++)
    {
        for(j = i + 1; j < tamanio; j++)
        {
            if(vector[i] > vector[j]) //Criterio de ordenamiento
            {
                auxiliar = vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;
            }
        }
    }
}

int buscarMaximo(int vector[], int tamanio)
{
    int i;
    int retorno;
    int flag = 0;

    for(i = 0; i < tamanio; i++)
    {
        if((vector[i] > retorno) || flag == 0)
        {
            retorno = vector[i];
            flag = 1;
        }
    }

    return retorno;
}

int buscarMinimo(int vector[], int tamanio)
{
    int i;
    int retorno;
    int flag = 0;

    for(i = 0; i < tamanio; i++)
    {
        if((vector[i] < retorno) || flag == 0)
        {
            retorno = vector[i];
            flag = 1;
        }
    }

    return retorno;
}
