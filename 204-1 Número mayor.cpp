#include "stdafx.h"
#include "iostream"

using namespace std;

int i,mayor,menor,a;

int main (void)
{
   cout << "Bienvenido.";
   do {
	   cout << "\nIngrese 20 numeros y el programa determinara el mayor y el menor. Presione 0 para salir." <<endl<<endl;
		menor = 99999999;
	   	mayor = -999;
		a = 0;
		do {
			cout << "Ingrese numero" <<endl;
			cin >> i;
			if(i==0)
			{
				break;
			}
			if(i>mayor)
			{
				mayor=i;
			}
			if(i<menor)
			{
				menor=i;
			}
			a++;                                
		} while(a<=20);
		if(i != 0){
			cout << "El numero mayor ingresado es " <<mayor<<endl;
			cout << "El numero menor ingresado es " <<menor<<endl;
		}
	} while(i != 0);
		system("pause");
		return 0;
}