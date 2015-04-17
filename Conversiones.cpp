// Ejercicio 3: Conversiones de grados centígrados a fahrenheit, millas a metros, yardas a centímetros y nudos a kilómetros por hora.

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;

float main()
{
	float e;
	cout << "Bienvenido al programa de conversiones." << endl << "Creado por Yael Arturo Chavoya Andal\242n" << endl << endl << "DE CELSIUS A FAHRENHEIT:" << endl << "Inserte la temperatura en grados cent\241grados: ";
	cin >> e;
	cout << e << " grados cent\241grados equivale a " << e*1.8 +32 << " grados fahrenheit." << endl << endl << "DE MILLAS A METROS:" << endl << "Inserte la medida en millas: ";
	cin >> e;
	cout << e << " millas equivale a " << e*1609.344 << " metros." << endl << endl << "DE YARDAS A CENTIMETROS:" << endl << "Inserte la medida en yardas: ";
	cin >> e;
	cout << e << " yardas equivale a " << e/0.010936 << " cent\241metros." << endl << endl << "DE NUDOS A KILOMETROS POR HORA:" << endl << "Inserte la medida en nudos: ";
	cin >> e;
	cout << e << " nudos equivale a " << e*1.852 << " kil\242metros por hora." << endl << endl;
	system("pause");
	return 0;
}