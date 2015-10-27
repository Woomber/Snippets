//Yael Arturo Chavoya
#include <stdafx.h>
#include <iostream>

using namespace std;

void fibonacci(int, int, int);

int main () {
	const int salir = 2;
	int x, menu;
	cout << "Bienvenido al programa que calcula la sucesi\242n de fibonacci.";
	do{
		cout << "\n\n1: Realizar sucesi\242n\n2: Salir\n\n";
		cin >> menu;
		switch (menu){
			case 1:
				cout << "\nInserte el l\241mite de la sucesi\242n: ";
				cin >> x;
				if (x < 0) cout << "No hay serie para ese l\241mite.\n";
				else fibonacci(x, 0, 1);
				cout << '\n';
				break;
			case 2: break;
			default: cout << "Opci\242n inv\240lida.\n"; break;
		}
		cout << "Presione ENTER para continuar...";
		cin.sync();
		cin.get();
	}while(menu != salir);
	return 0;
}

void fibonacci (int f, int start, int plus){
	int serie = start;
	if (serie > f) return; //Verifica si ya ser ha desbordado el limite
	cout << serie;
	serie += plus; //Se le agrega el valor n -1 de la serie al valor n-2 de la serie (para formar el numero siguiente)
	cout << "  ";
	fibonacci(f, plus, serie); //Start se desprecia y el valor n-1 se vuelve el nuevo n-2; mientras que el n se vuelve n-1
}