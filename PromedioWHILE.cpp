// Ejercicio 1: Calcular el promedio de 3 alumnos diferentes

#include "stdafx.h"
#include "iostream"

using namespace std;

void main()
{
	int i;
	float prom[] = {0,0,0};

	cout << "Bienvenido al programa que revisa promedios." << endl << "Creado por Yael Arturo Chavoya Andal\242n." << endl << endl << "Escriba el primer promedio: ";
	cin >> prom[0];
	cout << "Escriba el segundo promedio: ";
	cin >> prom[1];
	cout << "Escriba el tercer promedio: ";
	cin >> prom[2];
	while(i<3){
		if(prom[i] == 84){
			cout << endl << "El promedio #" << i+1 << " merece media beca.";
		}else if(prom[i] == 95){
			cout << endl << "El promedio #" << i+1 << " merece beca completa.";
		} else if(prom[i] == 98.5){
			cout << endl << "El promedio #" << i+1 << " merece un premio especial.";
		}
		i++;
	}
	cout << endl << endl;
	system("pause");
}
