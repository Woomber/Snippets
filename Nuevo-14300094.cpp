// Ejercicio 1: Operaciones aritméticas: Suma, resta, multiplicación y división

#include "stdafx.h"
#include <iostream>
#include <stdio.h>

using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{
	float a, b;
	cout << "Bienvenido al programa 'nuevo' de operaciones aritm\202ticas." << endl << "Creado por Yael Arturo Chavoya Andal\242n" << endl << endl << "SUMA:" << endl << "Inserte el primer n\243mero: ";
	cin >> a;
	cout << "Inserte el segundo n\243mero: ";
	cin >> b;
	cout << endl << "El resultado de la suma entre " << a << " y " << b << " es " << a+b << "." << endl << endl << "RESTA:" << endl << "Inserte el primer n\243mero: ";
	cin >> a;
	cout << "Inserte el segundo n\243mero: ";
	cin >> b;
	cout << endl << "El resultado de la resta entre " << a << " y " << b << " es " << a-b << "." << endl << endl << "MULTIPLICACION:" << endl << "Inserte el primer n\243mero: ";
	cin >> a;
	cout << "Inserte el segundo n\243mero: ";
	cin >> b;
	cout << endl << "El resultado de la multiplicaci\242n entre " << a << " y " << b << " es " << a*b << "." << endl << endl << "DIVISION:" << endl << "Inserte el primer n\243mero: ";
	cin >> a;
	cout << "Inserte el segundo n\243mero: ";
	cin >> b;
	cout << endl << "El resultado de la divisi\242n entre " << a << " y " << b << " es " << a/b << "." << endl << endl;
	system("pause");	
	return 0;
}

