//Yael Chavoya
#include "stdafx.h"
#include "iostream"

using namespace std;

bool palindromo(unsigned char[], int);
int contar(unsigned char[]);

int main() {
	const int maxln = 100;
	unsigned char cadena[maxln];

	do{
		cout << "Por favor ingrese la cadena a evaluar o presione enter para salir:\n";
		cin.getline((char *)cadena, maxln);
		if (cadena[0] == NULL) break;
		if (cadena[maxln -1] != NULL) cadena[maxln-1] = NULL;
		if (palindromo(cadena, maxln)) {
			cout << "La cadena es pal\241ndroma.";
		} else {
			cout << "la cadena no es pal\241ndroma.";
		}
		/*
		cin.sync();
		cin.get();
		*/
		cout << "\n\n";
	} while(true);
	return 0;
}

bool palindromo(unsigned char cadena[], int maxln){
	int lon;
	unsigned char *left, *right;

	lon = contar(cadena);
	
	left = &cadena[0];
	right = &cadena[lon-1];
	while(left < right){
		while(*left == ' ') left++;
		while(*right == ' ') right--;
		if (*left != *right) return false;

		left++;
		right--;
	}
	return true;
}

int contar(unsigned char cadena[]){
	int j = 0;
	while(cadena[j] != NULL){ j++; }
	return j;	
}