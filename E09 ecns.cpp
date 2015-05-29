#include "stdafx.h"
#include "iostream"
#include "string"

using namespace std;

float sistema1[2];		// a, b
float sistema2[2][3];   // a, b, c | d, e, f
float sistema3[3][4];   // a, b, c, d | e, f, g, h | i, j, k, l
double deter[4]; // dg, dx, dy, dz
bool iszero[3] = {false, false, false}; //iszero en true quiere decir ax + by + c = 0, en false ax + by = c
float x,y,z;
int menu, read;

char abc(int n) {
	switch (n) {
		case 0: return 'A';
		case 1: return 'B';
		case 2: return 'C';
		case 3: return 'D';
		case 4: return 'E';
		case 5: return 'F';
		case 6: return 'G';
		case 7: return 'H';
		case 8: return 'I';
		case 9: return 'J';
		case 10: return 'K';
		case 11: return 'L';
	}
	return 'Z';
}

string mostrar(n) {
	if (n<0) return "- " + n*-1;
	else return "+ " + n;
}

void una() {

}

void dos() {
	system("cls");
	cout << "Dos inc\242gnitas:";
	for (int i=0;i<2;i++) {
		do {
			cout << endl << endl <<"Ecuaci\242n " << i+1 << ":" << endl;
			do {
				read = 0;
				cout << "Elija la forma que describe su ecuaci\242n: " << endl << "1: Ax + By + C = 0" << endl << "2: Ax + By = C" << endl << endl << "> ";
				cin read;
				if (read == 1) iszero[i] = true;
				else if (read == 2) iszero[i] = false;
				else cout << "Opci\242n inv\240lida." << endl << endl;
			}while(read != 1 || read != 2);
			for (int j=0;j<3;j++){
				cout << "Inserte el par\240metro " << abc(j) << ": ";
				cin >> sistema2[i][j];
			}
		read = 0;
		if(iszero[i]) cout << "Su ecuaci\242n es: " << sistema2[i][0] <<"x " << mostrar(sistema2[i][1]) << "y " << mostrar(sistema2[i][2]) << " = 0";
		else cout << "Su ecuaci\242n es: " << sistema2[i][0] <<"x " << mostrar(sistema2[i][1]) << "y " << " = "<< sistema2[i][2];
		cout << endl << "Si es correcto, inserte 1. De lo contrario, inserte cualquier otra cosa." << endl << endl << "> ";
		cin >> read;
		}while(read != 1);
	}
	deter[0] = sistema2[0][0]*sistema2[1][1] - sistema2[0][1]*sistema2[1][0];
	deter[1] = sistema2[0][2]*sistema2[1][1] - sistema2[0][1]*sistema2[1][2];
	deter[2] = sistema2[0][0]*sistema2[1][2] - sistema2[0][2]*sistema2[1][0];
	x = deter[1] / deter[0];
	y = deter[2] / deter[0];

	cout << endl << endl << "x = " << x << endl << "y = " << y;
}

void main() {
	do {
		system("cls");
		cout << "Bienvenido al programa de soluci\242n de ecuaciones simult\240neas de 1, 2 y 3 inc\242gnitas." << endl;
		cout << "Creado por Yael Arturo Chavoya Andal\242n."<< endl << endl;
		cout << "---MENU---" << endl << "1. (WIP) Una inc\242gnita" << endl << "2. Dos inc\242gnitas" << endl << "3. (WIP) Tres inc\242gnitas";
		cout << endl << "4. (WIP) Personalizar" << endl << "5. (WIP) Mostrar \243ltimo resultado" << endl << "6. (WIP) Guardar \243ltimo resultado";
		cout << endl << "7. (WIP) Cargar resultados" << endl << "8. Salir" << endl << "----------" << endl << endl << "> ";
		cin >> menu;
		switch(menu) {
			case 1: una(); break;
			case 2: dos(); break;
			case 3: break;
			case 4: break;
			case 5: break;
			case 6: break;
			case 7: break;
			case 8: cout << endl << "Hasta luego."; break;
			default: cout << endl <<"Opci\242n inv\240lida. "<< endl; break;
		}
		system("pause");
	}while(menu != 8);
}