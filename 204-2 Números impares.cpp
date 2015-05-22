#include "stdafx.h"
#include "iostream"

using namespace std;

int main()
{
  int contador,contador1;
  contador1=0;
  cout << "\t Estos son los n\243meros impares entre 0 y 100 \n";
  cout << "\t -------------------------------------------\n";
  contador = 1;
 do//Este contador permite moverme de impar a impar
 {
	 contador1++;           // Este otro contador cuenta el número de impares
 	cout << contador << " , ";
 	contador+=2;
 } while (contador<100);

 cout << "\nEl n\243mero de impares entre cero y cien es: " << contador1 << endl;
 cout << "Pulse una tecla para acabar...";
 cin.get();
 return 0;
}
