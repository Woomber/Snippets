#include "stdafx.h"
#include "iostream"
#include "math.h"

using namespace std;

void main() {
	bool isNot = false;
	int input, i;

	cout << "Bienvenido al programa que verifica si un entero es primo." << endl << "Creado por Yael Arturo Chavoya Andal\242n.";
	do{
		input =0; i=0; isNot = false;
		cout << endl << endl << "Ingrese un n\243mero, o -1 para salir: ";
		cin >> input;
		if(input==-1)
			break;
		if(input<0){
			input*=-1;
			cout << endl << "Cambiado " << input*-1 << " por " << input << " para realizar el c\240lculo." << endl << endl;
		}
		for(i=input-1; i>1; i--){
			if(input % i == 0){
				isNot = true;
			}
		}
		if(isNot){
			cout << "El n\243mero " << input << " NO es primo." << endl;
		} else {
			cout << "El n\243mero " << input << " es primo." << endl;
		}
	}while(input!=-1);
}