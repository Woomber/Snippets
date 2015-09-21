//Programa de organización de números, de códigos del video y de suma.
//Autor: Yael Arturo Chavoya Andalón

#include <iostream>
#include <string>

using namespace std;

int suma(int a, int b);
void portada();
void organizar(int maxn);
void funcion();
void salir();

const int MAX = 10;

int main() {
	int sel = 1; //Variable de menú
	int a, b;
	do {
		if (system("cls"))
			system("cls");
		cout << "Bienvenido al programa de organizaci\242n de n\243meros y otras cosas.\nSeleccione una opci\242n para continuar:\n\n";
		cout << "1: Mostrar la portada\n2: Sumar 2 n\243meros\n3: Organizar de menor a mayor\n4: Mostrar una funci\242n void\n\n0: Salir\n\n> ";
		cin >> sel;
		
		switch(sel){
			case 0: salir(); break;
			case 1: portada(); break;
			case 2: cout << "Por favor inserte dos n\243meros a sumar: ";
					cin >> a >> b;
					cout << "La respuesta es: " << suma(a, b);
					break;
			case 3: organizar(MAX); break;
			case 4: funcion(); break;
			default: cout << "No se encontr\242 una opci\242n correspondiente."; break;
		}
	cout << "\n\nPresione enter para continuar...";	
	cin.sync();
	cin.get();
	if(system("color")) system("color f");
	} while(sel != 0);
	return 0;
}

int suma(int a, int b) {
	
	return (a) + (b); 
}

void portada(){
	if(system("color")){
		system("color b");
		system("cls");
	}
	cout << " ";
	for(int i = 0; i<46; i++){ cout << "="; }
	cout << "\n|    Centro de Ense\244anza T\202cnica Industrial    |\n ";
	for(int i = 0; i<46; i++){ cout << "="; }
	cout << "\n\nInformaci\242n del autor:\n";
	for(int i = 0; i<9; i++){ cout << "="; }
	cout << "\nNombre:\t\tYael Arturo Chavoya Andal\242n\nEmail:\t\tyaelchavoya@outlook.com\nTel\202fono:\t33 3964 0329\n";
	cout << "Grupo:\t\t3B\nRegistro:\t14300094\n\n\nInformaci\242n del programa:\n";
	for(int i = 0; i<9; i++){ cout << "="; }
	cout << "\nT\241tulo:\t\tLas funciones en C++\nObjetivo:\tAprender a hacer funciones con y sin retorno en C++\n";
	cout << "No.:\t\t1\nParcial:\t1\nFecha:\t\t11 de septiembre de 2015\n";	
}

void organizar(int maxn){
	int n[maxn], temp;
    
    // Leer los elementos del arreglo
    for (int i=0; i<maxn; i++ ) {
        cout << "Escribe el elemento " << i+1 << " del arreglo> ";
        cin >> n[i];
    } 
    
    cout << endl << endl;
    
    // Imprimir el arreglo desordenado
    cout << "El arreglo desordenado es\n[";
    for (int i=0; i<maxn; i++ ) {
		if (i==maxn-1) {
			cout << n[i];
		} else {
			cout << n[i] << ", ";
		}
    }
    cout << "]" << endl;
    
    // Ordenar el arreglo
    for (int i=maxn-1; i>0; i--) {
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
    cout << "El arreglo ordenado de menor a mayor es\n[";
    for (int i=0; i<maxn; i++ ) {
        if (i==maxn-1) {
			cout << n[i];
		} else {
			cout << n[i] << ", ";
		}
    }
    cout << "]\n\n";

	//Imprimir el arreglo de mayor a menor (BONUS)
	cout << "El arreglo ordenado de mayor a menor es\n[";
    for (int i=maxn-1; i>=0; i-- ) {
        if (i==0) {
			cout << n[i];
		} else {
			cout << n[i] << ", ";
		}
    }
    cout << "]\n\n";
}

void funcion() {
	cout << "Funci\242n sin valor de retorno." << endl;

}

void salir() {
	cout << "\nGracias por utilizar mi programa.";
}