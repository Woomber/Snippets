#include <stdafx.h>
#include <iostream>
#include <string>

using namespace std;

string mes(int n) {
	switch(n){
		case 0: return "enero";
		case 1: return "febrero";
		case 2: return "marzo";
	}
}

void main() {
	float emp[4][5];
	int i = 0;
	int j = 0;

	cout << "Bienvenido al programa que calcula el total de 3 empresas." << endl << "Creado por Yael Arturo Chavoya Andal\242n.";
	do {
		cout << endl << endl << "EMPRESA #" << i+1 << ":" << endl;
		j=0;
		do{
			cout << "Escriba la ganancia de " << mes(j) << ": ";
			cin >> emp[i][j];
			j+=1;
		} while(j<3);
		emp[i][3] = emp[i][0] + emp[i][1] + emp[i][2]; 
		i+=1;
	} while(i<3);
	i = 0;
	do {
		cout << endl << "El total de la empresa " << i+1 << " es de " << emp[i][3] << "." << endl;
		cout << "Se agrega una comisi\242n del 8%, que es de $" << emp[i][3]*0.08 << "." << endl;
		cout << "Esto da un total de $" << emp[i][3]*1.08 << "." << endl << endl;
		i+=1;
	} while(i<3);
	system("pause");
}