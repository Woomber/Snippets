//Programa para contar palabras por Yael Chavoya
#include "stdafx.h"
#include "iostream"

using namespace std;

int contar(unsigned char[]);

int main() {
	const int maxln = 1000;
	unsigned char cadena[maxln];

	do{
		cout << "Por favor ingrese la cadena a evaluar o presione enter para salir:\n";
		cin.getline((char *)cadena, maxln);
		if (cadena[0] == NULL) break;
		if (cadena[maxln -1] != NULL) cadena[maxln-1] = NULL;
		cout << "N\243mero de palabras: " << contar(cadena) << endl;
		/*
		cin.sync();
		cin.get();
		*/
		cout << "\n\n";
	} while(true);
	return 0;
}

int contar(unsigned char cadena[]){
	int cant = 0, min = 0, max = 0;
	unsigned char *p, *q;
	int isSpace = 0;

	do {
		p = &cadena[min];
		min++;
	} while (*p == ' ');

	while(cadena[max] != NULL){ max++; }
	for (int i = 0; i < max; i++){
		if (cadena[i] == ' ') isSpace++;
	}
	if (isSpace == max) return 0;
	do {
		q = &cadena[max-1];
		max--;
	} while (*q == ' ');
	q++;
	while(p < q) {
		if (*p == ' ' && *(p + 1) != ' ' && *(p + 1) != NULL) {
			cant++;
		}
		p++;
	}
	return cant + 1;
}