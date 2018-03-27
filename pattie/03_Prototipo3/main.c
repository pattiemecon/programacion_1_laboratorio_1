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
void sumarNumeros (void);

int main()
{
    //Llamada a la funci�n
    sumarNumeros();

    return 0;
}

//Desarrollo o implementaci�n de la funci�n
//Por defecto los tipos primitivos se pasan por valor, no por referencia
void sumarNumeros (void) //Par�metros formales
{
    /*Comienzo de la l�gica de la funci�n*/
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese segundo numero: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;
    printf("Resultado de la suma: %d", resultado);
    /*Fin de la l�gica de la funci�n*/
}
