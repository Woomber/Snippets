//Programa para calcular el promedio de máximo 20 números por Yael Chavoya
#include <stdafx.h>
#include <iostream>

using namespace std;

float prom(float[], int);

int main(){
	const int salir = 2;
	const int maxn = 20;

	int menu;
	float calif[maxn];

	do {
		system("cls");
		cout << "Bienvenido al programa de promedio de n\243meros.\n\n1: Promediar\n2: Salir\n\n> ";
		cin >> menu;
		switch(menu){
			case 1: cout << "\nEl promedio entre esos n\243meros es " << prom(calif, maxn);
			case 2: break;
			default: cout << "Opci\242n inv\240lida\n\n";
		}
		cout << "\nPresione ENTER para continuar...";
		cin.sync();
		cin.get();

	}while(menu != salir);

	return 0;
}


float prom(float calif[], int max){
	int num;
	float suma = 0;

	do{
		cout << "Cu\240ntos n\243meros se promediar\240n? ";
		cin >> num;
		if (num <1 || num > max)	cout << "Del 1 al "<< max <<" por favor\n";
	} while(num <1 || num > max);

	cout << endl;
	
	for (int i = 0; i< num; i++){
		cout << "Escriba el promedio " << i+1 << ": ";
		cin >> calif[i];
		suma += calif[i];
	}

	return suma/num;
}