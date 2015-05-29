#include <stdafx.h>
#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

void main() {
	int entr, res;
	char cont;
	do {
		srand(time(NULL));
		res = rand() %100 + 1;
		system("CLS");
		cout << "Adivine nuestro n\243mero secreto del 1 al 100: "<< endl ;
		do{
			cout << "> ";
			cin >> entr;
			if (entr < res) cout << "El n\243mero secreto es mayor." << endl;
			if (entr > res) cout << "El n\243mero secreto es menor." << endl;
		} while (entr != res);
		do {
			cout << "Felicidades. Desea adivinar de nuevo? y/n" << endl << "> ";
			cin >> cont;
			switch (cont) {
				case 'y': break;
				case 'n': break;
				default: cout << "Opci\242n inv\240lida." << endl;
			}
		}while (cont != 'y' || cont != 'n');
		res = 0;
	}while (cont != 'n');
}