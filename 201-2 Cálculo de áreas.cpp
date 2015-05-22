// Ejercicio 2: Cálculo de las áreas de triángulo, pentágono, volumen de un prisma cualquiera y el perímetro de un octágono regular.

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;


void main()
{
	float c, d;
	cout << "Bienvenido al programa de c\240lculo de \240reas." << endl << "Creado por Yael Arturo Chavoya Andal\242n" << endl << endl << "AREA DE UN TRIANGULO:" << endl << "Inserte la base: ";
	cin >> c;
	cout << "Inserte la altura: ";
	cin >> d;
	cout << "El \240rea de un tri\240ngulo de base " << c << " y altura " << d << " es de " << c*d/2 << " unidades cuadradas." << endl << endl << "AREA DE UN PENTAGONO REGULAR:" << endl << "Inserte el lado: ";
	cin >> c;
	cout << "Inserte el apotema: ";
	cin >> d;
	cout << "El \240rea de un pent\240gono regular de lado " << c << " y apotema " << d << " es de " << c*5*d/2 << " unidades cuadradas." << endl << endl << "VOLUMEN DE UN PRISMA CUADRANGULAR:" << endl << "Inserte el lado del cuadrado de la base: ";
	cin >> c;
	cout << "Inserte la altura del prisma: ";
	cin >> d;
	cout << "El volumen de un prisma cuadrangular de base " << c*c << " unidades cuadradas y altura " << d << " es de " << c*c*d << " unidades c\243bicas." << endl << endl << "PERIMETRO DE UN OCTAGONO REGULAR:" << endl << "Inserte el lado: ";
	cin >> c;
	cout << "El per\241metro de un oct\240gono regular de lado " << c << " es de " << c*8 << " unidades." << endl << endl;
	system("pause");	
}
