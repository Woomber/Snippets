#include <iostream>

int num1 = 2;
int num2 = 4;

int suma;

using namespace std;

void funcion();
int sumar(int, int);

int main()
{
	suma = sumar(num1, num2);
	cout << suma << endl;
	funcion();
	cin.sync();
	cin.get();
	return 0;
}

void funcion()
{
	cout << "Funci\242n sin valor de retorno " << endl;
}

int sumar(int a, int b)
{
	return (a) + (b);
}