#include <iostream>

using namespace std;

int tabla(int, int, int);
void portada();

int main(){

	const int min = 1;
	const int max = 10;

	int read;

	portada();

	cout << "\nEspecifique el n\243mero para hacer la tabla: ";
	cin >> read;
	system("color F");

	cout << "La sumatoria es " << tabla(read, min, max) << "\n\nPresione ENTER para continuar...";
	cin.sync();
	cin.get();

	return 0;	
}

int tabla(int x, int min, int max){
	int sum = 0;
	cout << endl << "TABLA:"<<endl;
	for(int i = 0; i<9; i++){ cout << "="; }
	cout << endl;
	for(int i = min; i<= max;i++){
		cout << x << " x " << i << " = " << x*i << endl;
		sum += x*i;
	}
	cout << endl;
	return sum;
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
	cout << "\nT\241tulo:\t\tTablas por funciones\nObjetivo:\tObtener la tabla de un n\243mero y sumar los resultados.\n";
	cout << "No.:\t\tE01\nParcial:\t1\nFecha:\t\t22 de septiembre de 2015\n";	
}