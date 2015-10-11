#include <iostream>

using namespace std;

//Estructura
struct stPareja { 
   int A, B; 
   int LeeA() { return A;} // Devuelve el valor de A
   int LeeB() { return B;} // Devuelve el valor de B
   void GuardaA(int n) { A = n;} // Asigna un nuevo valor a A
   void GuardaB(int n) { B = n;} // Asigna un nuevo valor a B
} Par;
 
 //Constructor
struct Punto { 
   int x, y; 
   Punto() {x = 0; y = 0;} // Constructor
} Punto1, Punto2;

//Diferentes constructores con diferentes parámetros
struct complejo {
   complejo() { real=0; imaginario = 0; }
   complejo(double r, double i) { real=r; imaginario = i; }
   complejo(double r) { real=r; imaginario = 0; }
   double real;
   double imaginario;
};

complejo array[10];
complejo c1(10.23, 213.22);
complejo c2(19.232);
complejo c3 = 1299.212;
int x = 10;
complejo c4 = x;

int main(){
	int a = 5;
	float f = 4.2;
	double d = 2.33;
	char c = 97;

	int result;

	//Casting
	result = int(a+b);
	result = a + (int)(b);

	int array[231];
	int nElementos;
   
	/*Contar número de elementos en un arreglo:
	sizeof() devuelve el tamaño de un arreglo en bytes,
	para contar el número de elementos es necesario dividirlo */   
	nElementos = sizeof(array)/sizeof(int);
	nElementos = sizeof(array)/sizeof(array[0]);

	Punto1.x = 10; 
   Punto1.y = 12; 
   Punto2 = Punto1; 



	return 0;
}
