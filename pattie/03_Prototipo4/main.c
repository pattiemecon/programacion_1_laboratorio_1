#include <stdio.h>
#include <stdlib.h>

/*
prototipo | retorna | recibe
----------|---------|-------
p1        |    S    |   S
p2        |    N    |   S
p3        |    N    |   N (funci�n nula)
p4        |    S    |   N
*/

//Declaraci�n o prototipo de la funci�n
//Qu� hace la funci�n, qu� recibe y qu� devuelve
//tipo_de_dato_devuelto identificador_de_la_funci�n (entrada1, entrada2, ..., entrada n)
int sumarNumeros (void);

int main()
{
    int resultado; //declaro la variable que va a contener el resultado de la funci�n.

    //Llamada a la funci�n
    resultado = sumarNumeros(); //Par�metros actuales

    printf("Resultado de la suma: %d", resultado);
    return 0;
}

//Desarrollo o implementaci�n de la funci�n
//Por defecto los tipos primitivos se pasan por valor, no por referencia
int sumarNumeros (void) //Par�metros formales
{
    int retorno; //Creo una variable de retorno con el mismo tipo de datos como primer medida.

    /*Comienzo de la l�gica de la funci�n*/
    int numero1;
    int numero2;

    printf("Ingrese primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese segundo numero: ");
    scanf("%d", &numero2);

    retorno = numero1 + numero2;
    /*Fin de la l�gica de la funci�n*/

    return retorno; //Me aseguro de crear una cl�usula de retorno con la variable, como buena pr�ctica.
}
