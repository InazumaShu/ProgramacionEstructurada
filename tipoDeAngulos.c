/*
Autor:Humberto Manuel Pech Huchin 29/01/17
Entradas:angulo1, angulo2
Salidas:Tipo de �ngulo
Procedimiento general:Dados dos �ngulos positivos(enteros) determinar si son iguales
y el tipo de �ngulo.
*/
#include <stdio.h>

int main(int argc, char *argv[]) {
	
	/*Entrada
	'angulo1, angulo2' son variables que van de 0 a 360.
	*/
	int angulo1, angulo2;
	printf("Los �ngulos tomados en cuenta van desde 0-359 \n");
	printf("Ingrese el �ngulo 1:");
	scanf("%d", &angulo1);
	printf("ingrese el �ngulo 2:");
	scanf("%d", &angulo2);
	/*Procedimiento y Salida
	Primero se verifica si el valor esta entre 0 y 360.
	Despues se verifica si son iguales.
	Con otro if se verifica si son �ngulos iguales o distintos, 
	si son iguales, verifica que tipo de �ngulo es, mediante la declaraci�n
	if, else if. Y como salida Imprime seg�n sea el caso.
	Si los �ngulos son distintos, se dir� que tipo de angulo es, si y solo si,
	ambos son el mismo tipo de angulo, en caso contrario no se dir�n que tipo 
	de �ngulos son.
	
	*/
	if(angulo1<0 || angulo2<0 || angulo1>359 || angulo2>359)
	{
		printf("Angulos no validos");
	}
	else
	{
		if(angulo1==angulo2)
		{
			printf("Los �ngulos son iguales.\n");
		}
		if(angulo1==angulo2 || angulo1<angulo2 || angulo1>angulo2)
		{
			if(angulo1<90 && angulo2<90)
			{
				printf("Los �ngulos son agudos.");
			}
			else if(angulo1==90 && angulo2==90)
			{
				printf("Son �ngulos rectos.");
			}
			else if(angulo1>90 && angulo1<180 && angulo2>90 && angulo2<180)
			{
				printf("Son �ngulos obtusos.");
			}
			else if(angulo1==180 && angulo2==180)
			{
				printf("Son �ngulos llanos.");
			}
			else if(angulo1>180 && angulo2>180)
			{
				printf("Son �ngulos c�ncavos.");
			}
			else
			{
				printf("Son angulos distintos.");
			}
		}
	}
	
	return 0;
}
/*
Probado por: Irving Baez

Entrada: 90, 90.
Salida: los �ngulos son iguales, son �ngulos rectos.

Entrada: 500, 1.
Salida: Angulos no validos.

Entrada: 360, 360.
Salida: Angulos no validos.

Entrada: 50, 10.
Salida: Los �ngulos son agudos.

Entrada: 0.5
Salida:Ingrese �ngulo 2, Los �ngulos son agudos.
*/
