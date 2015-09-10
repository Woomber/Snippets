#include <stdafx.h>
#include <iostream>
#include <string>

using namespace std;

string aumento(float n) {
			if (n <=3500) return "Merece ser aumentado 3.4%";
			else if (n>3500 && n <= 4800) return "Merece ser aumentado 2.8%";
			else if (n>4800 && n <= 6000) return "Merece ser aumentado 1.8%";
			else return "No merece ser aumentado";
}

float mult(float n) {
			if (n <=3500) return n*1.034;
			else if (n>3500 && n <= 4800) return n*1.028;
			else if (n>4800 && n <= 6000) return n*1.018;
			else return n;
}

void main() {
	float sueldo[3][4];
	int i = 0;
	int j = 0;

	cout << "Bienvenido al programa que calcula el aumento de sueldo." << endl << "Creado por Yael Arturo Chavoya Andal\242n.";
	do {
		cout << endl << endl << "EMPLEADO #" << i+1 << ":" << endl;
		j=0;
		do{
			cout << "Escriba el sueldo " << j+1 << ": ";
			cin >> sueldo[i][j];
			j+=1;
		} while(j<3);
		sueldo[i][3] = sueldo[i][0] + sueldo[i][1] + sueldo[i][2]; 
		i+=1;
	} while(i<3);
	i = 0;
	do {
		cout << endl << "El sueldo antiguo del empleado " << i+1 << ": $" << sueldo[i][3] << "." << endl;
		cout << aumento(sueldo[i][3]) << ". Sueldo nuevo: $" << mult(sueldo[i][3]) << endl << endl;
		i+=1;
	} while(i<3);
	system("pause");
}