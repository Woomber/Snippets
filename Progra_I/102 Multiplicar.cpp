// Multiplicar.cpp: define el punto de entrada de la aplicación de consola.
//

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int a, b, c;
	
	printf("Programa de multiplicación creado por Yael Chavoya.\nPor favor proporcione el dato a: ");
	scanf("%d", &a);
	printf("Por favor proporcione el dato b: ");
	scanf("%d", &b);
	c = a*b;

	printf("\n\nEl resultado del producto entre %d y %d es: %d\nEl cuadrado de %d es: %d\n\nPresione cualquier tecla para salir...", a, b, c, c, c*c);
	getch();
	return 0;
}
