//Programa para convertir cadenas por Yael Arturo Chavoya
//#include <stdafx.h>
#include <iostream>
#include <windows.h>
#include <string>

using namespace std;

void leerMenu(int &);
void portada();
void leerChar(unsigned char[]);
void mayus(unsigned char[]);
void imprimeChar(unsigned char[]);

const int maxCadena = 500;
const int salir = 3;

int main() {
	unsigned char cadena[maxCadena];

	int menu = 1;

	do {
		system("cls");
		system("color F");
		cout << "Bienvenido al programa que convierte las min\243sculas a may\243sculas.\nCreado por Yael Chavoya.";
		cout << "\n\nSeleccione una opci\242n:\n[1] Mostrar la portada\n[2] Leer la cadena y transformarla\n[3] Salir\n\n> ";
		leerMenu(menu);
		switch (menu){
			case 1: portada(); break;
			case 2: leerChar(cadena);
					/*
					cout << "\nLa cadena insertada fue:";
					imprimeChar(cadena);
					*/
					cout << "\n\nLa cadena transformada es:";
					mayus(cadena);
					imprimeChar(cadena);
					break;
			case 3: cout << "\nHasta la vista.";
					break;
			default: cout << "\nOpci\242n inv\240lida.";
		}
		cout << "\n\nPresione ENTER para continuar...\n";
		cin.sync();
		cin.get();
	} while(menu != salir);
	
	return 0;
}

void leerMenu(int &res){
	string n;
	cin >> n;
	res = ::atoi( n.c_str() );
	return; //Convierte una cadena a un entero
}

void portada(){
	system("color b");
	system("cls");
	cout << " ";
	for(int i = 0; i<46; i++){ cout << "="; }
	cout << "\n|    Centro de Ense\244anza T\202cnica Industrial    |\n ";
	for(int i = 0; i<46; i++){ cout << "="; }
	cout << "\n\nInformaci\242n del autor:\n";
	for(int i = 0; i<9; i++){ cout << "="; }
	cout << "\nNombre:\t\tYael Arturo Chavoya Andal\242n\nEmail:\t\tyaelchavoya@outlook.com\nCarrera:\tDesarrollo de Software\n";
	cout << "Grupo:\t\t3B\nRegistro:\t14300094\n\n\nInformaci\242n del programa:\n";
	for(int i = 0; i<9; i++){ cout << "="; }
	cout << "\nT\241tulo:\t\tConvertir a may\243sculas\nObjetivo:\tAprender a usar arreglos como par\240metros.\n";
	cout << "Materia:\tProgramaci\242n II\nParcial:\t2\nFecha:\t\t01 de octubre de 2015\n";	
	return;
}

void leerChar(unsigned char cadena[]){
	for(int i = 0; i < maxCadena; i++)
		cadena[i] = 0;
	cout << "\n\nIntoduzca la cadena que se convertir\240 a may\243sculas:\n";
	cin.sync();
	cin.getline((char *)cadena, maxCadena);
}

void mayus(unsigned char cadena[]){
	for (int i = 0; i < maxCadena; i++){
		switch (cadena[i]){
			//Dieresis
			case 132: cadena[i] = 142; break;
			case 137: cadena[i] = 211; break;
			case 139: cadena[i] = 216; break;
			case 148: cadena[i] = 153; break;
			case 129: cadena[i] = 154; break;
			//Tildes
			case 160: cadena[i] = 181; break;
			case 130: cadena[i] = 144; break;
			case 161: cadena[i] = 214; break;
			case 162: cadena[i] = 224; break;
			case 163: cadena[i] = 233; break;
			//N con tilde
			case 164: cadena[i] = 165; break;
			//Letras a-z
			default:
				if (cadena[i] >= 97 && cadena[i] <= 122){
					cadena[i] = cadena[i] -32;
				}
				break;
		}
	}

	return;
}

void imprimeChar(unsigned char cadena[]){
	cout << endl;
	int i = 0;
	while(cadena[i] != 0 ){
		i++;
	}
	for (int j = 0; j < i; j++)
		cout << cadena[j];
	cout << endl;
	return;
}