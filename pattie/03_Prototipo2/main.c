#include <stdio.h>
#include <stdlib.h>

/*
prototipo | retorna | recibe
p1        |    S    |   S
p2        |    N    |   S
p3        |    N    |   N (funci�n nula)
p4        |    S    |   N
*/


//Declaraci�n o prototipo de la funci�n
//Qu� hace la funci�n, qu� recibe y qu� devuelve
//tipo_de_dato_devuelto identificador_de_la_funci�n (entrada1, entrada2, ..., entrada n)
void sumarNumeros (int, int);

int main()
{
    //declaro los par�metros de entrada
    int numero1;
    int numero2;

    printf("Ingrese primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese segundo numero: ");
    scanf("%d", &numero2);

    //Llamada a la funci�n
    sumarNumeros(numero1, numero2);

    return 0;
}

//Desarrollo o implementaci�n de la funci�n
//Por defecto los tipos primitivos se pasan por valor, no por referencia
void sumarNumeros (int primerNumero, int segundoNumero) //Par�metros formales
{
    int resultado;

    /*Comienzo de la l�gica de la funci�n*/
    resultado = primerNumero + segundoNumero;
    printf("Resultado de la suma: %d", resultado);
    /*Fin de la l�gica de la funci�n*/
}
