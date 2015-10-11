/*
Escribir un programa con una función que calcule la longitud de una cadena de caracteres.
El nombre de la función será LongitudCadena, debe devolver un int, y como parámetro de entrada debe tener un puntero a char.
En esta función no se pueden usar enteros para recorrer el array, usar sólo punteros y aplicar aritmética de punteros.
En main probar con distintos tipos de cadenas: arrays y punteros.

por Yael Arturo Chavoya Andalón
*/

#include <iostream>
using namespace std;

int LongitudCadena(char*);

int main () {
	const int lmax = 100;
	char cadena[lmax];
	cout << "Inserte cadena: ";
	cin.getline(cadena, lmax);
	cout << "La longitud de la cadena es de: " << LongitudCadena(&cadena[0]);
	cin.sync();
	cin.get();
	return 0;
}

int LongitudCadena(char *p){
	char *q;
	q = p;
	while (*p != NULL){
		p++;
	}
	return int(p - q);
}