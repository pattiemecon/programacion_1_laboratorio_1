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
/** \brief --> Qu� hace la funci�n, por ejemplo "Permite sumar dos n�meros enteros".
 *
 * \param --> Primer n�mero a sumar
 * \param --> Segundo n�mero a sumar
 * \return --> El resultado de la suma de los n�meros
 *
 */
int sumarNumeros (int, int);

int main()
{
    int resultado; //declaro la variable que va a contener el resultado de la funci�n.
    //declaro los par�metros de entrada
    int numero1 = 5;
    int numero2 = 9;

    //Llamada a la funci�n
    resultado = sumarNumeros(numero1, numero2); //Par�metros actuales

    printf("Resultado de la suma: %d", resultado);
    return 0;
}

//Desarrollo o implementaci�n de la funci�n
//Por defecto los tipos primitivos se pasan por valor, no por referencia
int sumarNumeros (int primerNumero, int segundoNumero) //Par�metros formales
{
    int retorno; //Creo una variable de retorno con el mismo tipo de datos como primer medida.

    /*Comienzo de la l�gica de la funci�n*/
    retorno = primerNumero + segundoNumero;
    /*Fin de la l�gica de la funci�n*/

    return retorno; //Me aseguro de crear una cl�usula de retorno con la variable, como buena pr�ctica.
}
