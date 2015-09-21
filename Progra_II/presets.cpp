/*
presets.cpp: Una galería de funciones que pueden ser reutilizadas para diversos programas.
Por Yael Arturo Chavoya Andalón
*/

//Prototipos
void clear(); // Limpia la pantalla si es posible
void pause(bool forceEnter); // Pausa la pantalla, intentado usar "system("pause");", usando como alternativa "cin.get();" a menos que el argumento sea verdadero
void portada(); // Muestra una portada con información del autor y del programa
int read(); // Convierte la parte numérica de una cadena a un entero. Requiere <string>
void toggle(bool &boolean); // Cambia verdadero a falso y falso a verdadero
void line(int length); // Crea una línea de tamaño length

//Funciones
void clear(){
	if (system("cls"))
		system("cls");
	else
		cout << "\n\n\n\n\n";
	return;
}

void pause(bool forceEnter){
	if (forceEnter) {
		cout << "\nPresione ENTER para continuar...";
		cin.sync();
		cin.get();
	} else {
		if (system("pause")) {
			system("pause");
		}
		else {
			cout << "\nPresione ENTER para continuar...";
			cin.sync();
			cin.get();
		}
	}
	return;
}

void portada(){
	if(system("color") && system("cls")){
		system("color b");
		system("cls");
	}
	cout << " ";
	//Información del autor, no debería cambiarse seguido así que está compactado
	for(int i = 0; i<46; i++){ cout << "="; }
	cout << "\n|    Centro de Ense\244anza T\202cnica Industrial    |\n ";
	for(int i = 0; i<46; i++){ cout << "="; }
	cout << "\n\nInformaci\242n del autor:\n";
	for(int i = 0; i<9; i++){ cout << "="; }
	cout << "\nNombre:\t\tYael Arturo Chavoya Andal\242n\nEmail:\t\tyaelchavoya@outlook.com\nTel\202fono:\t33 3964 0329\n";
	cout << "Grupo:\t\t3B\nRegistro:\t14300094\n\n\nInformaci\242n del programa:\n";
	for(int i = 0; i<9; i++){ cout << "="; }

	//Aquí va la información específica del programa
	cout << "\nT\241tulo:\t\t";
	/* Título */ cout << "Las funciones en C++";
	cout << "\nObjetivo:\t";
	/* Objetivo */ cout << "Aprender a hacer funciones con y sin retorno en C++";
	cout << "\nNo.:\t\t";
	/* Número de práctica o tarea */ cout << "1";
	cout << "\nParcial:\t";
	/* Parcial */ cout << "1";
	cout << "\nFecha:\t\t";
	/* Fecha de creación */ cout << "11 de septiembre de 2015";
	cout << endl;	
}

int read(){
	string n = "";
	cin >> n;
	return ::atoi( n.c_str() ); //Convierte una cadena a un entero
}

void toggle(bool &boolean){
	if (boolean) boolean = false;
	else boolean = true;
}

void line(int length) {
	for (i = 0; i < length; i++){
		cout << "-";
	}
	cout << endl;
}