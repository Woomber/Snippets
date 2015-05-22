#include "stdafx.h"
#include "iostream"

using namespace std;

void main() {
	long a, b, c; //c usado como temporal para mover variables.
	int i, cant; 

	cout << "Bienvenido al programa que imprime la serie de Fibonacci." << endl << "Creado por Yael Arturo Chavoya Andal\242n. Inserte 0 para salir.";
	do {
		a = 0;
		b = 1;
		c=0;
		cout << endl << endl << "Inserte cu\240ntos t\202rminos se van a imprimir: ";
		cin >> cant;
		if(cant == 0)
			break;
		if(cant < 0) {
			cant *= -1;
			cout << "Cambiado " << cant*-1 << " por " << cant << " porque no se admiten negativos.";
		}
		if(cant>46)
			cout << "Advertencia: Del t\202rmino 47 en adelante son incorrectos debido a limitaciones de memoria.";
		for(i=0; i<cant; i++) {
			if (i==0){
				cout << endl << b;
			}
			else {
				c=a+b;
				a=b;
				b=c;
				cout << ", " << b;
			}
		}
	} while(cant!=0);
	cout << endl << "Gracias por usar el programa." << endl;
	system("pause");
}