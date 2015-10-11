/*
Implementar en una función el siguiente algoritmo para ordenar un array de enteros.
La idea es recorrer simultáneamente el array desde el principio y desde el final, comparando los elementos.
Si los valores comparados no están en el orden adecuado, se intercambian y se vuelve a empezar el bucle.
Si están bien ordenados, se compara el siguiente par.
El proceso termina cuando los punteros se cruzan, ya que eso indica que hemos comparado la primera mitad con la segunda y
todos los elementos estaban en el orden correcto.
Usar una función con tres parámetros:
void Ordenar(int* vector, int nElementos, bool ascendente);
De nuevo, no se deben usar enteros, sólo punteros y aritmética de punteros.

Por Yael Arturo Chavoya Andalón
*/

#include <iostream>
using namespace std;

void Ordenar (int*, int, bool);
void cambiar (int*, int*);
void imprime (int[], int);

int main(){
	const int nElementos = 10;
	int vector[nElementos];
	bool ascendente;
	cout << "Bienvenido al programa que ordena n\243meros por medio del algoritmo de burbuja bidireccional." << endl;
	for (int i = 0; i < nElementos; i++){
		cout << "Inserte el elemento "<< i+1 << ": ";
		cin >> vector[i];
	}
	cout<< "\nArreglo desordenado:\n";
	imprime(vector, nElementos);
	cout << "\nArreglo ascendente:\n";
	ascendente = true;
	Ordenar(vector, nElementos, ascendente);
	imprime(vector, nElementos);
	cout << "\nArreglo descendente:\n";
	ascendente = false;
	Ordenar(vector, nElementos, ascendente);
	imprime(vector, nElementos);
	cin.sync();
	cin.get();
	return 0;
}

void Ordenar (int* vector, int nElementos, bool ascendente){
	int *p, *q, *r, *s;
	bool isOrder;
	p = vector;
	r = p - 1;
	q = vector + nElementos -1;
	s = q - 1;
	//imprime(vector, nElementos);
	//cout << "\nProceso de ordenado:\n";
	do{
		isOrder = true;
		r++;
		for(p = r; p <= s; p++){
			if (ascendente){
				if(*p > *(p+1)){
					cambiar(p, p+1);
					isOrder = false;
				}
			} else {
				if(*p < *(p+1)){
					cambiar(p, p+1);
					isOrder = false;
				}
			}
			//imprime(vector, nElementos);
		}
		if(isOrder) break;
		s--;
		for(q = s; q >= r; q--){
			if (ascendente){
				if(*q > *(q+1)){
					cambiar(q, q+1);
					isOrder = false;
				}
			} else {
				if(*q < *(q+1)){
					cambiar(q, q+1);
					isOrder = false;
				}
			}
		//imprime(vector, nElementos);
		}
	}while(!isOrder);
}

void cambiar (int *a, int *b){
	int *r;
	r = new int;
	*r = *a;
	*a = *b;
	*b = *r;
	delete r;
}

void imprime(int vector[], int n){
	for (int i = 0; i < n; i++){
		cout << vector[i] << " ";
	}
	cout << endl;
}