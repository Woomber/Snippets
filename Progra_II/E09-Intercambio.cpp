#include "stdafx.h"
#include "iostream"

using namespace std;

void intercambio(float*, float*);

int main() {
	const int salir = 2;
	float x, y;
	int menu;

	do {
		system("cls");
		cout << "Bienvenido al programa de paso de par\240metro por valor.\n\n1: Realizar el intercambio\n2: Salir\n\n> ";
		cin >> menu;
		switch (menu){
			case 1: 
				cout << "Por favor inserte x: ";
				cin >> x;
				cout << "Por favor inserte y: ";
				cin >> y;

				intercambio(&x, &y);
				
				cout << "\n\n x= " << x << ", y = " << y << endl;
				break;

			case 2: break;

			default: cout << "\nOpci\242n inv\240lida.";
		}
		cout << "\n\nPresione ENTER para continuar...";
		cin.sync();
		cin.get();
	} while(menu != salir);
	return 0;
}

void intercambio(float *x, float *y){
	float sw;
	sw = *x;
	*x = *y;
	*y = sw;
	return;
}