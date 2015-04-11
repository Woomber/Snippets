#include "stdafx.h"
#include "iostream"

using namespace std;

void main() {
	int lados, i, j;
	cout << "Bienvenido al programa que traza en asteriscos un cuadrado con lado de entre 2 y 20 unidades." << endl << "Creado por Yael Arturo Chavoya Andal\242n." << endl << endl;
	do {
		cout << "Inserte una cantidad entre 2 y 20: ";
		cin >> lados;
		if ((lados<2) || (lados >20))
			cout << "Cantidad fuera de l\241mites. ";
	} while ((lados<2) || (lados>20));
	for(i = 0; i<lados; i++){
		if (i == 0 || i== lados-1){
			for(j = 0; j<lados;j++)
				cout << "*";
		} else {
			cout<<"*";
			for(j = 0; j<(lados-2);j++)
				cout << " ";
			cout << "*";
		}
		cout << endl;
	}
	system("pause");
}
				