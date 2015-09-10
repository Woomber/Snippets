#include "stdafx.h"
#include "iostream"

using namespace std;

void main() {
	long input, a, b, c, d;
	cout << "Bienvenido al programa que determina si un n\243mero de 5 d\241gitos es pal\241ndromo." << endl << "Creado por Yael Arturo Chavoya Andal\242n." << endl << endl;
	do {
		cout << "Inserte un n\243mero de 5 d\241gitos: ";
		cin >> input;
		if(input < 10000 || input > 99999)
			cout << "Cantidad inv\240lida. ";
	} while(input < 10000 || input > 99999);
	a = input/10000;
	b = input/1000 - a*10;
	d = input % 10;
	c = (input % 100 - d)/10;
	if(a==d)
		if(b==c)
		cout << "El n\243mero " << input << " es pal\241ndromo." << endl;
	else
		cout << "El n\243mero " << input << " no es pal\241ndromo." << endl;
	system("pause");
}
	