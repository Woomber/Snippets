/*
Escribir un programa con una función que busque un carácter determinado en una cadena.
El nombre de la función será BuscaCaracter, debe devolver un int con la posición en que fue encontrado el carácter, si no se encontró volverá con -1.
Los parámetros de entrada serán una cadena y un carácter.
En la función main probar con distintas cadenas y caracteres.

Por Yael Arturo Chavoya Andalón
*/

#include <iostream>
using namespace std;

int BuscaCaracter(char[], char);

int main(){
	const int lmax = 100;
	char cadena[lmax];
	char termino;
	cout << "Inserte cadena: ";
	cin.getline(cadena, lmax);
	cout << "Inserte t\202rmino a buscar: ";
	cin >> termino;
	if (BuscaCaracter(cadena, termino) == -1) cout << "\nEl t\202rmino especificado no se encontr\242.";
	else cout << "\nEl t\202rmino especificado se econtr\242 en la posici\242n " << BuscaCaracter(cadena, termino);
	cin.sync();
	cin.get();
	return 0;
}

int BuscaCaracter(char cadena[], char termino){
	char *p = &cadena[0];
	while (*p != '\0'){
		if (*p == termino) return int(p - &cadena[0]) + 1;
		p++;
	}
	return -1;
}