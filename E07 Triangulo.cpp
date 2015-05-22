#include "stdafx.h"
#include "iostream"

using namespace std;

int main() {
	int lados, i, j;
	cout << "Bienvenido al programa que traza un triangulo con lado de entre 1 y 30 unidades." << endl;
	cout << "Creado por Yael Arturo Chavoya Andal\242n. Inserte 0 para salir." << endl << endl;
	do {
		do {
			cout << "Inserte una cantidad entre 1 y 30: ";
			cin >> lados;
			if ((lados<0) || (lados >30))
				cout << "Cantidad fuera de l\241mites. ";
		} while ((lados<0) || (lados>30));
		cout << endl;
			for(i = 0; i<lados; i++){
				for(j = 0; j<i;j++)
					cout << " ";
				for(j = 0; j<(lados-i);j++)
					cout << "O";				
			cout << endl;
		}
			cout << endl;
	}while (lados != 0);
	cout << "Gracias por utilizar el programa." << endl << endl << endl;
	system("pause");
}