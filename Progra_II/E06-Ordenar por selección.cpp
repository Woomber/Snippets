#include <stdafx.h>
#include <iostream>

using namespace std;

void ordenar(int[], int);
void imprimir(int[], int);

int main () {
	int vector[20];
	int vmax;
	do{
		do{
			cout << "Bienvenido, por favor inserte la cantidad de n\243meros a evaluar:\n";
			cin >> vmax;
			if (vmax == 0) return 0;
		} while(vmax < 0 || vmax > 20);
		
		for(int i = 0; i < vmax; i++){
			cout << "Por favor inserte el n\243mero " << i+1 << ": ";
			cin >> vector[i];
		}
	
		ordenar(vector, vmax);
		cin.sync();
		cin.get();
	} while(vmax != 0);
	return 0;
}

void ordenar(int vector[], int vmax){
	int *max, *p;
	int alm, j;
	imprimir(vector, vmax);
	bool cambio = false;
	for (int i = vmax - 1; i > 0; i-- ){
		max = &vector[i];
		p = &vector[0];
		while (p < &vector[i]){
			if(*p > *max){
				max = p;
				cambio = true;
			} else p++;
		}
		alm = *p;
		*p = *max;
		*max = alm;
		if (cambio) imprimir(vector, vmax);
		cambio = false;
	} // for i
	cout << "\n\nCadena ordenada:\n";
	imprimir(vector, vmax);
	return;
}//void ordenar

void imprimir(int vector[], int vmax){
	cout << "\n[";
	for (int i = 0; i<vmax;i++){
		cout << " " << vector[i];
	}
	cout << " ]";
	return;
}