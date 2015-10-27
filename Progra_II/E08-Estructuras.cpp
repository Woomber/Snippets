/*
Programa de base de datos volátil de control escolar
Por Yael Arturo Chavoya Andalón

Requisitos:
	5 registros diferentes por persona
	Capaz de realizar altas, bajas, modificaciones, búsquedas, listados y salir
	No utilizar variables globales, usar mínimo 5 funciones
*/


#include <stdafx.h>
#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

struct stFechas{
	int d, m, a;
	void validar(){
		bool bis;
		const int annoActual = 2015;

		if(d < 0) d = 1;
		if(m < 0) m = 1;
		if(a < 1900 && a >= 0) a += 1900;
		if(a < 0) a = 1900;
		if(d > 28){
			bis = (bool)(a%4 && ((!(a%100)) || a%400 ) );
			switch(d){
				case 29: if( m==2 && bis ) d = 28; break;
				case 30: if( m==2 && bis ) d = 28;
						 else if (m == 2) d = 29; break;
				case 31: if( m==2 && bis ) d = 28;
						 else if (m == 2) d = 29;
						 if(m==4 || m==6 || m==9 || m==11) d = 30; break;
				default: if( m==2 && bis ) d = 28;
						 else if (m == 2) d = 29;
						 if (m==4 || m==6 || m==9 || m==11) d = 30;
						 else d=31; break;
			}//switch
		}//if
		if (m > 12) m = 12;
		if (a > annoActual) a = annoActual;
		return;
	}
};

struct stUser {
	bool alta;
	char nombre[50];
	int registro;
	int semestre;
	float promedio;
	stFechas nacimiento;
	void validar(){
		if(semestre <= 0) semestre = 1;
		if(promedio > 100) promedio = 100;
		if(promedio < 0) promedio = 0;
		if(registro < 0) registro = 1;
		if(semestre > 8) semestre = 8;
		nacimiento.validar();
		return;
	}
};

void leer(int*);
void altas(stUser[], int);
void bajas(stUser[], int);
void coincidentes(stUser[], bool[], int);
void modificar(stUser[], int);
void init(stUser*);
void imprimir(stUser, int, bool);
void buscar(stUser[], int);
void simplificar(unsigned char[]);
void ver(stUser[], int);


int main(){
	const int salir = 6;
	const int maxdb = 50;
	int menu;
	stUser database[maxdb];
	//Inicializar la base de datos
	for(int i = 0; i < maxdb; i++) init(&database[i]);
	
	//Ciclo del menú
	do{
		system("cls");
		cout << "Bienvenido al sistema escolar.";
		cout << "\n\n1: Dar de alta\n2: Dar de baja\n3: Modificar registro\n4: Buscar registro\n5: Ver lista\n6: Salir\n\n";
		leer(&menu);
		switch (menu){
			case 1: altas(database, maxdb); break;
			case 2: bajas(database, maxdb); break;
			case 3: modificar(database, maxdb); break;
			case 4: buscar(database, maxdb); break;
			case 5: ver(database, maxdb); break;
			case 6: break;
			default: cout << "Opci\242n inv\240lida.\n"; break;
		}

		cout << "Presione ENTER para continuar...";
		cin.sync();
		cin.get();

	} while(menu != salir);

	return 0;
}//main

void leer(int *res){
	string n = "";
	cin >> n;
	*res = ::atoi( n.c_str() );
	cin.sync();
	return; //Convierte una cadena a un entero
}

void leerf(float *res){
	string n = "";
	cin >> n;
	*res = (float)::atof( n.c_str() );
	cin.sync();
	return; //Convierte una cadena a un flotante
}


void altas(stUser datos[], int maxdb){
	
	int i=0;
	for (i = 0; i < maxdb; i++){
		if(!datos[i].alta) break;
		if(i == maxdb - 1) {
			cout << "No se pueden crear m\240s registros. Borre uno para insertar uno nuevo.\n";
			return;
		}
	}//for

	//Lectura de datos
	cout << "Por favor introduzca los nuevos datos del alumno:\nNombre: ";
	cin.sync();
	cin.getline(datos[i].nombre, 50);
	cout << "Registro: ";
	leer(&datos[i].registro);
	cout << "Semestre: ";
	leer(&datos[i].semestre);
	cout << "Promedio: ";
	leerf(&datos[i].promedio);
	cout << "D\241a de nacimiento: ";
	leer(&datos[i].nacimiento.d);
	cout << "Mes de nacimiento (en n\243mero): ";
	leer(&datos[i].nacimiento.m);
	cout << "A\244o de nacimiento: ";
	leer(&datos[i].nacimiento.a);

	datos[i].validar();

	datos[i].alta = true;
	cout << "\nCaptura de datos finalizada con \202xito. (C\242digo de salida: "<< i <<")\n";

	return;
}

void bajas(stUser datos[], int maxdb){
	int ncoin = 0, ingreso;
	char confirm = 'n';
	bool coin[50];
	if(datos[0].alta == false) {
		cout << "No hay ninguna entrada en la base de datos.\n";
		return;
	}
	for(int i =0; i < maxdb; i++) coin[i] = false;
	cout << "Por favor inserte el nombre del usuario que se dar\240 de baja:\n";
	coincidentes(datos, coin, maxdb);
	for (int i = 0; i < maxdb; i++){
		if(coin[i]) ncoin++;
	}
	if(!ncoin){
		cout << "No se ha encontrado ning\243n registro coincidente\n";
		return;
	}
	cout << "\nCoincidencias encontradas: " << ncoin << '\n';
	for(int i = 0; i < maxdb; i++){
		if(coin[i] == true){
			imprimir(datos[i], i, false);
		}//if
	}//for
	do{
		cout << "Por favor inserte el n\243mero del [registro] a eliminar, o 0 para cancelar: ";
		leer(&ingreso);
		ingreso -= 1;
		if(ingreso == -1) return;
		if(coin[ingreso] == true){
			cout << "\nEst\240 seguro de que desea eliminar el siguiente registro? (s/n)\n";
			imprimir(datos[ingreso], ingreso, false);
			cout << "\n> ";
			cin >> confirm;
			cin.sync();
			switch (confirm){
				case 's':
					for (int i = 0; i < maxdb - ingreso - 1; i++) datos[ingreso + i] = datos[ingreso + i + 1];
					init(&datos[maxdb - 1]);
					cout << "\nRegistro eliminado con \202xito.\n";
					return;
				case 'n': cout << "\nRegistro conservado.\n"; return;
				default: break;
			}
		}
	 cout << "\nOpci\242n inv\240lida.\n";	
	}while(coin[ingreso] == false ||confirm != 's' || confirm != 'n');
	return;
}

void init(stUser *n){
	n->alta = false;
	for (int i = 0; i < (int)strlen(n->nombre); i++) n->nombre[i] = 0;
	n->registro = 0;
	n->semestre = 0;
	n->promedio = 0.0;
	n->nacimiento.d = 0;
	n->nacimiento.m = 0;
	n->nacimiento.a = 0;
}

void imprimir(stUser in, int ns, bool separado){
	if (separado){
		cout << "[1]Nombre: " << in.nombre << "\n[2]Registro: " << in.registro << "\n[3]Semestre: " << in.semestre;
		cout << "\n[4]Promedio: " << in.promedio << "\n[5]Nacimiento d\241a: ";
		if(in.nacimiento.d < 10) cout << '0' << in.nacimiento.d; else cout << in.nacimiento.d;
		cout << "\n[6]Nacimiento mes: ";
		if(in.nacimiento.m < 10) cout << '0' << in.nacimiento.m; else cout << in.nacimiento.m;
		cout << "\n[7]Nacimiento a\244o: ";
		if(in.nacimiento.a < 100 && in.nacimiento.a >= 0) cout << 1900 + in.nacimiento.a; else cout << in.nacimiento.a;
		cout << '\n';
		return;	
	}
	cout << '[' << ns + 1 << "] " << in.nombre << ", Reg: " << in.registro << ", Semestre: " << in.semestre;
	cout << "\n\tPromedio: " << in.promedio << ", Nacimiento: ";
	if(in.nacimiento.d < 10) cout << '0' << in.nacimiento.d; else cout << in.nacimiento.d; cout << '/';
	if(in.nacimiento.m < 10) cout << '0' << in.nacimiento.m; else cout << in.nacimiento.m; cout << '/';
	if(in.nacimiento.a < 100 && in.nacimiento.a >= 0) cout << 1900 + in.nacimiento.a; else cout << in.nacimiento.a; cout << '\n';
	return;
}

void modificar(stUser datos[], int maxdb){
	int ncoin = 0, ingreso[2];
	//char confirm = 'n';
	bool coin[50];
	if(datos[0].alta == false) {
		cout << "No hay ninguna entrada en la base de datos.\n";
		return;
	}
	for(int i =0; i < maxdb; i++) coin[i] = false;
	cout << "Por favor inserte el nombre del usuario que se modificar\240:\n";
	coincidentes(datos, coin, maxdb);
	for (int i = 0; i < maxdb; i++){
		if(coin[i]) ncoin++;
	}
	if(!ncoin){
		cout << "No se ha encontrado ning\243n registro coincidente\n";
		return;
	}
	cout << "\nCoincidencias encontradas: " << ncoin << '\n';
	for(int i = 0; i < maxdb; i++){
		if(coin[i] == true){
			imprimir(datos[i], i, false);
		}//if
	}//for
	cout << "Por favor inserte el n\243mero del [registro] a modificar, o 0 para cancelar: ";
	do{
		leer(&ingreso[0]);
		ingreso[0] -= 1;
		if(ingreso[0] == -1) return;
		if(coin[ingreso[0]] == true){
			do {
				cout << "\nInserte el [valor] a modificar, o 0 para cancelar:\n";
				imprimir(datos[ingreso[0]], ingreso[0], true);
				cout << "\n> ";
				leer(&ingreso[1]);
				if (ingreso[1] == 0) break;
				if (ingreso[1] > 0 && ingreso[1] < 8){
					cout << "Nuevo valor: ";
					switch (ingreso[1]){
						case 1: cin.sync(); cin.getline(datos[ingreso[0]].nombre, 50); break;
						case 2: leer(&datos[ingreso[0]].registro); break;
						case 3: leer(&datos[ingreso[0]].semestre); break;
						case 4: leerf(&datos[ingreso[0]].promedio); break; //Por hacer: Leer flotantes
						case 5: leer(&datos[ingreso[0]].nacimiento.d); break;
						case 6: leer(&datos[ingreso[0]].nacimiento.m); break;
						case 7: leer(&datos[ingreso[0]].nacimiento.a); break;
					}//switch

					datos[ingreso[0]].validar();

				}//if rango
				else cout << "\nOpci\242n inv\240lida.\n";
				cout << '\n';
			} while (ingreso[1] != 0);
		}
	}while(coin[ingreso[0]] == false || ingreso[0] == -1);
	return;
}

void buscar(stUser datos[], int maxdb){
	int ncoin = 0;
	bool coin[50];
	if(datos[0].alta == false) {
		cout << "No hay ninguna entrada en la base de datos.\n";
		return;
	}
	for(int i =0; i < maxdb; i++) coin[i] = false;
	cout << "Por favor inserte el nombre a buscar: ";
	coincidentes(datos, coin, maxdb);
	for (int i = 0; i < maxdb; i++){
		if(coin[i]) ncoin++;
	}
	if(!ncoin){
		cout << "\nNo se ha encontrado ning\243n registro coincidente.\n";
		return;
	}
	cout << "\nCoincidencias encontradas: " << ncoin << '\n';
	for(int i = 0; i < maxdb; i++){
		if(coin[i] == true){
			imprimir(datos[i], i, false);
		}//if
	}//for
	return;
}//buscar


void coincidentes(stUser datos[], bool isfound[], int maxdb){
	unsigned char criterio[50];
	 char modif[50];
	cin.sync();
	cin.getline((char*)criterio, 50);
	simplificar(criterio);
	for(int i = 0; i < maxdb; i++){
		strcpy_s(modif, datos[i].nombre);
		simplificar((unsigned char*)modif);
		if(strstr(modif, (char *)criterio) != NULL && datos[i].alta){
			isfound[i] = true;
		}
	}
	/*for(int i = 0; i < maxdb; i++){

		for(int j = 0; j < 50; j++){
			if(datos[i].nombre[j] != criterio[j]){
				isfound[i] = false;
				break;
			}
		}//for j
	}//for i
*/
	return;
}

void simplificar(unsigned char cadena[]){
	for (int i = 0; i < (int)strlen((char *)cadena); i++){
		switch (cadena[i]){
			//MINUSCULAS ESPECIALES
			//Dieresis
			case 132: cadena[i] = 'A'; break;
			case 137: cadena[i] = 'E'; break;
			case 139: cadena[i] = 'I'; break;
			case 148: cadena[i] = 'O'; break;
			case 129: cadena[i] = 'U'; break;
			//Tildes
			case 160: cadena[i] = 'A'; break;
			case 130: cadena[i] = 'E'; break;
			case 161: cadena[i] = 'I'; break;
			case 162: cadena[i] = 'O'; break;
			case 163: cadena[i] = 'U'; break;
			//N con tilde
			case 164: cadena[i] = 'N'; break;

			//MAYUSCULAS ESPECIALES
			//Dieresis
			case 142: cadena[i] = 'A'; break;
			case 211: cadena[i] = 'E'; break;
			case 216: cadena[i] = 'I'; break;
			case 153: cadena[i] = 'O'; break;
			case 154: cadena[i] = 'U'; break;
			//Tildes
			case 181: cadena[i] = 'A'; break;
			case 144: cadena[i] = 'E'; break;
			case 214: cadena[i] = 'I'; break;
			case 224: cadena[i] = 'O'; break;
			case 233: cadena[i] = 'U'; break;
			//N con tilde
			case 165: cadena[i] = 'N'; break;

			//MINUSCULAS REGULARES
			default:
				if (cadena[i] >= 'a' && cadena[i] <= 'z'){
					cadena[i] = cadena[i] -32;
				}
				break;
		}
	}

	return;
}

void ver(stUser datos[], int maxdb){
	if(datos[0].alta == false){
		cout << "\nNo hay registros.\n\n";
		return;
	}
	cout << "\nViendo lista:\n\n";
	for(int i = 0; i < maxdb; i++){
		if(datos[i].alta == true){
			imprimir(datos[i], i, false);
		}//if
	}//for
	return;
}
