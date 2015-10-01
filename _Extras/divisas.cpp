#include <iostream>
#include <string>

using namespace std;

const int quit = 3;

int main(){

	string divisa = "";
	double input = 0.00;
	int menu = 0;
	do {

		cout << "Inserte la cantidad y luego la divisa a convertir.\nEjemplo: 100 eur\n> ";
		cin >> input >> divisa;
	}while(menu != quit);
	return 0;
}