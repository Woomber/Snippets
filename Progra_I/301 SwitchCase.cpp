//Practica 1 - Uso del switch case como menu
#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

int ndatos = 10;
int opc = 0;
float datos[10];
float resultados[2];
int i = 0;

string mes(int n) {
	switch(n){
		case 0: return "enero";
		case 1: return "febrero";
		case 2: return "marzo";
		case 3: return "abril";
		case 4: return "mayo";
		case 5: return "junio";
		case 6: return "julio";
		case 7: return "agosto";
		case 8: return "septiembre";
		case 9: return "octubre";
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

void prom(){
	
	for(i=0;i<ndatos;i++){
		cout << "Escriba la calificaci\242n #" << i+1 << ": ";
		cin >> datos[i];
		resultados[0] += datos[i];
	}
	resultados[1] = resultados[0] / ndatos;
	cout << "Con las siguientes calificaciones:" << endl;
	for(i=0;i<ndatos;i++){
		cout << "#" << i+1 << " = " << datos[i] << endl;
	}
	cout << endl << "El promedio es de: " << resultados[1] << endl;
}

void total(){
	for(i=0;i<ndatos;i++) {
			cout << "Escriba la ganancia de " << mes(i) << ": ";
			cin >> datos[i];
			resultados[0] += datos[i];
		}
		cout << endl << "El total de ventas de " << ndatos << " meses es de $" << resultados[0] << "." << endl;
		cout << "Se agrega una comisi\242n del 8%, que es de $" << resultados[0]*0.08 << "." << endl;
		cout << "Esto da un total de $" << resultados[0]*1.08 << "." << endl << endl;
}

void aum(){
	for(i=0;i<ndatos;i++){
		cout << "Escriba el sueldo " << i+1 << ": ";
			cin >> datos[i];
			resultados[0] += datos[i];
		} 
	for(i=0;i<ndatos;i++) {
		cout << endl << "El sueldo antiguo del empleado " << i+1 << ": $" << datos[i] << "." << endl;
		cout << aumento(datos[i]) << ". Sueldo nuevo: $" << mult(datos[i]) << endl << endl;
	}
}

void change(){
	do {
		cout << "Ingrese el n\243mero de datos que desea leer (1...10): ";
		cin >> opc;
		if (opc < 1 || opc > 10) {
			cout << "Opci\242n inv\240lida." << endl;
		}
	}while (opc < 1 || opc > 10);
	ndatos = opc;
	opc = 4;
}

void main() {
	cout << "Bienvenido al programa que calcula promedios, totales y aumentos." << endl << "Creado por Yael Arturo Chavoya Andal\242n.";
	do {
		resultados[0] = 0;
		cout << endl << endl << "----Men\243----" << endl << "1: Promedios" << endl << "2: Totales de ventas" << endl << "3: Aumentos de sueldo" << endl << "4: Cambiar n\243mero de datos";
		cout << endl << "5: Salir" << endl << "------------" << endl << endl << "Ingrese opci\242n> ";
		cin >> opc;
		switch (opc) {
			case 1: prom(); break;
			case 2: total(); break;
			case 3: aum(); break;
			case 4: change(); break;
			case 5: break;
			default: cout << "Opci\242n inv\240lida."; break;
		} 
		system("pause");
	} while (opc != 5);
}