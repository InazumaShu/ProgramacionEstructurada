/*
Ejercicio 9:
Autor:Humberto Manuel Pech Huchin 29/01/17
Entradas:(int) numero
Salidas:contadorMultiplos
Procedimiento general:De 1 a n, encontrar los m�ltiplos de 5 que existen.
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	/*Entrada
	'numero' variable de entrada, 
	'contador' y 'contadorMultiplos' acumuladores de sumas
	*/
	int numero, contador, contadorMultiplos=0;
	printf("Ingrese un n�mero:");
	scanf("%d", &numero);
	/*Procedimiento
	Se inicia un ciclo for para ir de 1 en 1 hasta el numero insertador
	para verificar si alguno es m�ltiplo de 5 y acumular el dato
	*/
	for(contador=1; contador<=numero; contador++ )
	{
		if(contador%5==0)
		{
			contadorMultiplos++;
		}
	}
	/*Salida*/
	printf("Entre el 1 y el %d hay %d m�ltiplos de 5", numero, contadorMultiplos);
	return 0;
}
/*Testing
Tester: Ignacio Panan� 31/01/17

Nombrado de variables: correcto
Indentaci�n de bloques: correcto
Definici�n de bloques: correcto

Funcionamiento del programa:
	Entrada "83"
		Salida "Entre el 1 y el 83 hay 16 m�ltiplos de 5"
	Entrada "-10"
		Salida "Entre el 1 y el -10 hay 0 m�ltiplos de 5"
	Entrada "-102"
		Salida "Entre el 1 y el -102 hay 0 m�ltiplos de 5"

El programa no calcula los m�ltiplos de un n�mero negativo */

