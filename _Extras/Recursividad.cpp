//Recursión directa
#include <iostream>

using namespace std;

int factorial (int f){
	if(f==0 || f== 1) return 1;
	return f*factorial(f-1);
}

int main (){
	int x =5;
	cout << factorial(x);
	return 0;
}