//Practica 3 - Arreglos bidimensionales
#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

int opc = 0;
string prom[5][4];
string vts[5][3];
string aum[5][2];
int i = 0;
double resultado = 0;

//nombre mes
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
		case 10: return "noviembre";
		case 11: return "diciembre";
	}
	return "ERROR";
}

//
string beca(float n){
	if (n ==100) return "premio especial";
	else if (n>= 98) return "beca completa";
	else if(n>=90) return "media beca";
	else if(n>=80) return "bienevales";
	else return "n/a";
}

string aumstr(double n) {
			if (n <=3500) { return "3.4%";}
			else if (n>3500 && n <= 4800) {return "2.8%";}
			else if (n>4800 && n <= 6000) {return "1.8%";}
			else {return "0%";}
}

double aumnum(double n) {
			if (n <=3500) return n*1.034;
			else if (n>3500 && n <= 4800) return n*1.028;
			else if (n>4800 && n <= 6000) return n*1.018;
			else return n;
}

string materia(int n) {
	switch(n){
		case 0: return "matem\240ticas";
		case 1: return "f\241sica";
		case 2: return "qu\241mica";	
		case 3: return "espa\244ol";
		case 4: return "programaci\242n";
		default: break;
	}
	return "desconocida";
}

void promedio(){
	system("cls");
	cout << "PROMEDIOS:" << endl;
	for (i=0;i<5;i++) {
		cout << endl << endl << "ALUMNO #" << i+1 << ":" << endl;
		cout << "Escriba el nombre del alumno: ";
		cin >> prom[i][0];
		cout << endl << "Escriba el grado de " << prom[i][0] << ": ";
		cin >> prom[i][1];
		cout << endl << "Escriba la materia en la que se calific\242: ";
		cin >> prom[i][2];
		cout << endl << "Escriba el promedio que consigui\242 " << prom[i][0] << " en " << prom[i][2] << ": ";
		cin >> prom[i][3];
	}
	resultado = 0;

	//TABLA DE RESULTADOS
	cout << endl << "ALUMNO\tGRADO\tMATERIA\tCALIF.\tPREMIO" << endl;
	for(i=0;i<5;i++) {
		cout << prom[i][0] << "\t" << prom[i][1] << "\t" << prom[i][2] << "\t" << prom[i][3] << "\t" << beca(::atof(prom[i][3].c_str()))<< endl;
		resultado += ::atof(prom[i][3].c_str());
	}
	cout << endl << endl << "El promedio entre todos los alumnos es de: " << resultado/5<<endl;
}

void totalvts(){
	system("cls");
	cout << "TOTAL DE VENTAS:" << endl;
	for (i=0;i<5;i++) {
		cout << endl << endl << "VENDEDOR #" << i+1 << ":" << endl;
		cout << "Escriba el nombre del vendedor: ";
		cin >> vts[i][0];
		cout << endl << "Escriba el total que vendi\242 " << vts[i][0] << ": ";
		cin >> vts[i][1];
		cout << endl << "Escriba la comisi\242n que se seguir\240 (en %): ";
		cin >> vts[i][2];
	}

	//TABLA DE RESULTADOS
	resultado = 0;
	cout << endl << "VENDEDOR\tSUBTOTAL\tCOMISION\tGANANCIA\tTOTAL" << endl;
	for(i=0;i<5;i++) {
		resultado = ::atof(vts[i][2].c_str())*::atof(vts[i][1].c_str())/100;
		cout << vts[i][0] << "\t\t$" << vts[i][1] << "\t\t" << vts[i][2] << "%\t\t$" << resultado << "\t\t$" << ::atof( vts[i][1].c_str() ) + resultado << endl;
	}
}

void aumento(){
	system("cls");
	cout << "AUMENTOS DE SUELDO:" << endl;
	for (i=0;i<5;i++) {
		cout << endl << endl << "EMPLEADO #" << i+1 << ":" << endl;
		cout << "Escriba el nombre del empleado: ";
		cin >> aum[i][0];
		cout << endl << "Escriba el sueldo de " << aum[i][0] << ": ";
		cin >> aum[i][1];
	}

	//TABLA DE RESULTADOS
	cout << endl << "EMPLEADO\tACTUAL\tAUMENTO\tNUEVO" << endl;
	for(i=0;i<5;i++) {
		cout << aum[i][0] << "\t\t$" << aum[i][1] << "\t" << aumstr( ::atof(aum[i][1].c_str()) ) << "\t$" << aumnum( ::atof(aum[i][1].c_str()) ) << endl;
	}
}

void main() {
	do {
		system("cls");
		cout << "Bienvenido al programa que calcula promedios, totales y aumentos." << endl << "Creado por Yael Arturo Chavoya Andal\242n.";
		cout << endl << endl << "----Men\243----" << endl << "1: Promedios" << endl << "2: Totales de ventas" << endl << "3: Aumentos de sueldo";
		cout << endl << "4: Salir" << endl << "------------" << endl << endl << "Ingrese opci\242n> ";
		cin >> opc;
		switch (opc) {
			case 1: promedio(); break;
			case 2: totalvts(); break;
			case 3: aumento(); break;
			case 4: break;
			default: cout << "Opci\242n inv\240lida."; break;
		} 
		system("pause");
	} while (opc != 4);
}