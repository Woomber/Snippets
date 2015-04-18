#include "stdafx.h"
#include "iostream"

using namespace std;

void main() {
	float inpf;
	int inpi;

	cout << "Bienvenido al programa que verifica si un n\243mero es entero." << endl << "Creado por Yael Arturo Chavoya Andal\242n. Inserte 0 para salir.";
	do {
		cout << endl << endl << "Inserte un n\243mero: ";
		cin >> inpf;
		inpi = inpf;
		if(inpf == 0)
			break;
		if(inpi != inpf) {
			cout << "El n\243mero " << inpf << " NO es entero.";
		} else {
			cout << "El n\243mero " << inpf << " es entero.";
		}
	}while(inpf != 0);
}