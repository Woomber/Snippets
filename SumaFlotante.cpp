// Suma.cpp: define el punto de entrada de la aplicación de consola.
// Programa para sumar

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"


void main()
{
	float a, b, c;
	
	printf("Programa de suma creado por Yael Chavoya.\nPor favor proporcione el dato a: ");
	scanf("%g", &a);
	printf("Por favor proporcione el dato b: ");
	scanf("%g", &b);
	c = a+b;

	printf("\n\nEl resultado de la suma entre %g y %g es: %g\n\nPresione cualquier tecla para salir...", a, b, c);
	getch();
}

