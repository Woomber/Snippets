// Autor: Yael Arturo Chavoya Andalón
// Objetivo: Ordenar un vector de 10 números enteros por el método de la Burbuja o por Hundimiento

//#include <stdafx.h>
#include <iostream>
#include <string.h>

using namespace std;

const int MAX = 10;

void pause() {
	cout << endl << "Presione ENTER para continuar...";
	cin.clear();
	cin.sync();
	cin.get();
}

int main ()
{
    
    int n[MAX], temp;
    
    // Leer los elementos del arreglo
    for (int i=0; i<MAX; i++ ) {
        cout << "Escribe el elemento " << i+1 << " del arreglo> ";
        cin >> n[i];
    } 
    
    cout << endl << endl;
    
    // Imprimir el arreglo desordenado
    cout << "El arreglo desordenado es " << endl << "[";
    for (int i=0; i<MAX; i++ ) {
		if (i==MAX-1) {
			cout << n[i];
		} else {
			cout << n[i] << ", ";
		}
    }
    cout << "]" << endl;
    
    // Ordenar el arreglo
    for (int i=MAX-1; i>0; i--) {
        for (int j=1; j<=i; j++) {
            if ( n[j-1] > n[j] ) {
                temp = n[j-1];
                n[j-1]= n[j];
                n[j] = temp;
            }
        }
    }
    
    cout << endl << endl;
    
    // Imprimir el arreglo ya ordenado
    cout << "El arreglo ordenado de menor a mayor es " << endl << "[";
    for (int i=0; i<MAX; i++ ) {
        if (i==MAX-1) {
			cout << n[i];
		} else {
			cout << n[i] << ", ";
		}
    }
    cout << "]" << endl << endl;

	//Imprimir el arreglo de mayor a menor (BONUS)
	cout << "El arreglo ordenado de mayor a menor es " << endl << "[";
    for (int i=MAX-1; i>=0; i-- ) {
        if (i==0) {
			cout << n[i];
		} else {
			cout << n[i] << ", ";
		}
    }
    cout << "]" << endl << endl;

    
    //system("pause");
	pause();
    return 0;    
}