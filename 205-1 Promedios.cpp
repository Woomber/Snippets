//Practica 5: While, Ejercicio 1. 3 promedios de alumnos, 5 materias: mate, fisica, quimica, español, computacion
#include <stdafx.h>
#include <iostream>
#include <string>

using namespace std;

string materia(int n) {
	switch(n){
		case 0: return "matem\240ticas";
		case 1: return "f\241sica";
		case 2: return "qu\241mica";
		case 3: return "espa\244ol";
		case 4: return "computaci\242n";
	}
}

string premios(float n) {
			if (n ==100) return "merece un premio especial";
			else if (n>= 98) return "merece beca completa";
			else if(n>=90) return "merece media beca";
			else if(n>=80) return "merece bienevales";
			else return "no aplica para ning\243n premio";
}

void main() {
	float alum[3][6];
	int i = 0;
	int j = 0;

	cout << "Bienvenido al programa que calcula el promedio de 3 alumnos." << endl << "Creado por Yael Arturo Chavoya Andal\242n.";
	do {
		cout << endl << endl << "ALUMNO #" << i+1 << ":" << endl;
		j=0;
		do{
			cout << "Escriba la calificaci\242n de " << materia(j) << ": ";
			cin >> alum[i][j];
			j+=1;
		} while(j<5);
		alum[i][5] = (alum[i][0] + alum[i][1] + alum[i][2] + alum[i][3] + alum[i][4])/5; 
		i+=1;
	} while(i<3);
	i = 0;
	do {
		cout << endl << "El promedio del alumno " << i+1 << " es de " << alum[i][5] << "." << endl;
		cout << "Con ese promedio " << premios(alum[i][5]) << "." << endl << endl;
		i+=1;
	} while(i<3);
	system("pause");
}