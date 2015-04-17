// Ejercicio 2: Comisiones (del total ventas del mes) considerar las comisiones dif.

#include "stdafx.h"
#include "iostream"

using namespace std;

void main()
{
	int i;
	double vts[] = {0,0,0,0,0};
	double com[] = {0,0,0,0,0};

	cout << "Bienvenido al programa que calcula comisiones." << endl << "Creado por Yael Arturo Chavoya Andal\242n." << endl << endl; 
	for(i=0;i<5;i++){
		do {
			cout << "Escriba el total de ventas del mes #" << i+1 << ": ";
			cin >> vts[i];
			if (vts[i] < 80000){
				cout << "Las ventas no pueden ser menores a 80000." << endl;
			}
		} while(vts[i] < 80000);
	}
	for(i=0;i<5;i++){
		if(vts[i] >= 80000 && vts[i] < 120000){
			com[i] = vts[i]*.08;
			cout << endl << "La comisi\242n del mes #" << i+1 << " es del 8%, es decir: " << com[i] << ".";
		}else if(vts[i] >= 120000 && vts[i] < 150000){
			com[i] = vts[i]*.11;
			cout << endl << "La comisi\242n del mes #" << i+1 << " es del 11%, es decir: " << com[i] << ".";
		} else if(vts[i] >= 150000 && vts[i] < 200000){
			com[i] = vts[i]*.13;
			cout << endl << "La comisi\242n del mes #" << i+1 << " es del 13%, es decir: " << com[i] << ".";
		} else if(vts[i] >= 200000 && vts[i] < 250000){
			com[i] = vts[i]*.18;
			cout << endl << "La comisi\242n del mes #" << i+1 << " es del 18%, es decir: " << com[i] << ".";
		} else if(vts[i] >= 250000){
			com[i] = vts[i]*.2;
			cout << endl << "La comisi\242n del mes #" << i+1 << " es del 20%, es decir:          " << com[i] << ".";
		}
	}
	cout << endl << endl << "El total de comisi\242n en los 5 meses es de: " << com[0] + com[1] + com[2] + com[3] + com[4]<< ".";
	cout << endl << endl;
	system("pause");
}