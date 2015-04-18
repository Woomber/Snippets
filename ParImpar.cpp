#include "stdafx.h"
#include "iostream"

using namespace std;

void main() {
	int input;

	cout << "Bienvenido al programa que muestra si un n\243mero es par o impar." << endl << "Creado por Yael Arturo Chavoya Andal\242n. Inserte 0 para salir.";
	do {
		cout << endl << endl << "Inserte un n\243mero entero: ";
		cin >> input;
		if(input == 0)
			break;
		if(input%2 == 0) {
			cout << "El n\243mero " << input << " es PAR.";
		} else {
			cout << "El n\243mero " << input << " es IMPAR.";
		}
	} while(input != 0);
}