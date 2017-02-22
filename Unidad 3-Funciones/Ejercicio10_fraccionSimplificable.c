/*
Autores:Martin Alpuche Pech,Ulises Ancona Graniel,Emmanuel Azcorra Balam,Shaid Bojorquez Interian 16/Febrero/17
Entradas:numerador, denominador (int)
Salidas:0, 1(int)
Procedimiento general: Se realiza un programa que reciba dos enteros
que representan un numeor racional, y a por medio de una funci�n que 
calcule el m�ximo comun divisor de los dos numeros se podr� determinar
si la fracci�n es simplificable marcado con un 0; y si no es mostrar� 
un 1
*/

#include <stdio.h>
int estaSimplificada(int numerador, int denominador);

int main(int argc, char *argv[]) {
	/*Entradas
	int numerador
	int denominador*/
	int numerador, denominador;

	printf ("introduce tu fraccion\n");
	printf("numerador:\n");
	scanf("%d", &numerador);
	printf("denominador:\n");
	scanf("%d", &denominador);

	while (denominador==0 || numerador==0)
	{
		printf ("Valor inv�lido introduce otra fracci�n\n");
		printf ("introduce tu fraccion\n");
		printf("numerador:\n");
		scanf("%d", &numerador);
		printf("denominador:\n");
		scanf("%d", &denominador);
	}
	
	/*Salidas*/
	//Imprime uno si el mcd es mayor a 1 osea que es simplificable la fraccion
	//Imprime cero si el mcd es 0 osea que no es simplificable la fraccion
	int estaSimplificada(int numerador, int denominador);
	return 0;
}


/*Funci�n estaSimplificada que determina el m�ximo com�n divisor de los dos enteros 
de la fracci�n para dar pauta a si la fracci�n est� simplificada.*/



int estaSimplificada(int numerador, int denominador)
{
	//contador: avanza a partir del 2 hasta llegar al menor de los numeros para encontrar multiplos
	//mcd = maximo comun divisor
	//menor=numero menor de los dos enteros
	int contador =2, mcd = 1, menor;
	//Se determina el menor de los dos numeros
	
	if (numerador>denominador)
	{
		menor =denominador;
	}
	else
	{
		menor = numerador;
	}
	/*Este ciclo for determinar� los m�ltiplos comunes entre ambos n�meros
	acumulandose el mcd hasta que el contador sea igual al numero menor de la fraccion*/
	for (contador =2; contador<= menor; contador++)
	{
		while (numerador%contador ==0 && denominador%contador==0)
		{
			numerador = numerador/contador;
			denominador = denominador/contador;
			mcd = mcd*contador;
		}
	}
	if (mcd > 1)
	{
		
		printf("\nSalida: 0");
	}
	else
	{
		printf("\nSalida: 1");
	}
}	

/*Test
Tester: Equipo 1 16/02/2017

Nombrado de variables: Aceptado

Indentaci�n de bloques: Aceptado.

Documentaci�n: Aceptado.

Testeando codigo:
-Entrada: 5,12
Salida: 1

-Entradas: 12,48
Salida: 0

-Entradas: -15
Salida: 5

*/
