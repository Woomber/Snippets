//Este programa puede realizar las cuatro principales operaciones aritméticas: suma, resta, multiplicación y división, insertando dos números
//Por: Yael Arturo Chavoya Andalón.

#include "stdafx.h"
#include "stdio.h"
#include "conio.h"


void main()
{
	float a, b;
	
	printf("Programa de c%clculo creado por Yael Chavoya.\nSuma.\nPor favor proporcione el dato a: ", 160);
	scanf("%g", &a);
	printf("Por favor proporcione el dato b: ");
	scanf("%g", &b);

	printf("\n\nEl resultado de la suma entre %g y %g es: %g\n\n", a, b, a + b);

	printf("Resta.\nPor favor proporcione el dato a: ");
	scanf("%g", &a);
	printf("Por favor proporcione el dato b: ");
	scanf("%g", &b);

	printf("\n\nEl resultado de la resta entre %g y %g es: %g\n\n", a, b, a - b);

	printf("Multiplicaci%cn.\nPor favor proporcione el dato a: ", 162);
	scanf("%g", &a);
	printf("Por favor proporcione el dato b: ");
	scanf("%g", &b);

	printf("\n\nEl resultado de la multiplicaci%cn entre %g y %g es: %g\n\n", 162, a, b, a * b);

	printf("Divisi%cn.\nPor favor proporcione el dato a: ", 162);
	scanf("%g", &a);
	printf("Por favor proporcione el dato b: ");
	scanf("%g", &b);

	printf("\n\nEl resultado de la divisi%cn entre %g y %g es: %g\n\nPresione cualquier tecla para salir...", 162, a, b, a / b);

	getch();
}

