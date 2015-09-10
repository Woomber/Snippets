//Practica 2: Arreglos con 10 promedios, 5 totales con comision y 5 aumentos con aumento.
#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

string mes(int n) {
	switch(n){
		case 0: return "enero";
		case 1: return "febrero";
		case 2: return "marzo";
		case 3: return "abril";
		case 4: return "mayo";
	}
}

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

	float prom[10];
	float totales[5];
	float aumentos[5];
	float resultados[2] = {0,0};
	int i = 0;
	
	cout << "Bienvenido al programa que calcula promedios, totales de ventas y aumentos de sueldos." << endl << endl << "PROMEDIOS:"<< endl;

	//Promedios
	for(i=0;i<10;i++){
		cout << "Escriba la calificaci\242n #" << i+1 << ": ";
		cin >> prom[i];
		resultados[0] += prom[i];
	}
	resultados[1] = resultados[0] / 10;
	cout << "Con las siguientes calificaciones:" << endl;
	for(i=0;i<10;i++){
		cout << "#" << i+1 << " = " << prom[i] << endl;
	}
	cout << endl << "El promedio es de: " << resultados[1] << endl;

	//Comisiones
	cout << endl << endl << "COMISIONES:"<< endl;
	resultados[0] = 0;
	for(i=0;i<5;i++) {
		cout << "Escriba la ganancia de " << mes(i) << ": ";
		cin >> totales[i];
		resultados[0] += totales[i];
	}
	cout << endl << "El total de ventas de " << 5 << " meses es de $" << resultados[0] << "." << endl;
	cout << "Se agrega una comisi\242n del 8%, que es de $" << resultados[0]*0.08 << "." << endl;
	cout << "Esto da un total de $" << resultados[0]*1.08 << "." << endl << endl;

	//Aumentos
	cout << endl << endl << "AUMENTOS:"<< endl;
	for(i=0;i<5;i++){
		cout << "Escriba el sueldo " << i+1 << ": ";
			cin >> aumentos[i];
		} 
	for(i=0;i<5;i++) {
		cout << endl << "El sueldo antiguo del empleado " << i+1 << ": $" << aumentos[i] << "." << endl;
		cout << aumento(aumentos[i]) << ". Sueldo nuevo: $" << mult(aumentos[i]) << endl << endl;
	}
	system("pause");
}