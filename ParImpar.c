#include <stdio.h>
/*
Autor:Wendy Sosa 29/Enero/17
Entradas:numero(int)
Salidas: impresion de si es par o no.
Procedimiento general:
Recibir un n�mero y determinar si ese n�mero es par o
impar.
Se usa un if con la condici�n de que el n�mero sea
 multiplo de dos. 
Se utiliza la bandera esPar.
*/
int main(int argc, char *argv[]) {
	/* numero valor de entrada a determinar
	esPar bandera con valor  0/1 F/V*/
	int numero,esPar=0;
	printf ("Introduzca un n�mero\n");
	scanf("%d",&numero);
	
	/*verificaci�n de multiplo de 2
	sino esPar se mantiene 0 o falso*/
	if (numero%2==0)
	{
		esPar=1;
	}
	
	/*Salidas*/
	if (esPar)
	{
	 printf("%d es n�mero par", numero);
	}
	else
	{
		printf("%d es numero impar",numero);
	}
	
	return 0;
}
/* 
Probado por: Irving Baez

Entrada usada: 5
Valor obtenido: 5 es numero impar.

Entrada usada: 0
Valor obtenido: 0 es numero par.

Entrada usada: e
Valor obtenido: 8 es numero par.

Entrada usada: 2000
Valor obtenido: 2000 es numero par.
*/

