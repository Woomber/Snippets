#include "stdafx.h"
#include "iostream"

using namespace std;

int i,mayor,menor,a;

int main (void)
{
   cout << "Bienvenido \nIngrese 20 numeros y el programa determinara el mayor y el menor" <<endl<<endl;
	menor = 99999999;
   mayor = -999;
	for (a=1 ; a<=20 ; a++){
		cout << "Ingrese numero" <<endl;
		cin >> i;
		if(i>mayor)
		{
		mayor=i;
		}
		if(i<menor)
		{
		menor=i;
		  }                                
	}
	cout << "El numero mayor ingresado es " <<mayor<<endl;
	cout << "El numero menor ingresado es " <<menor<<endl;
	system("pause");
	return 0;
}