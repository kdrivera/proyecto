#include <iostream>
#include "producto.h"
#include "mensajes.h"

using namespace std;
 
string arregloJuegos[15][3] = {
	{ "001", "HAMBURGUESA S/Q"},
	{ "002", "HAMBURGESA C/Q"},
	{ "003", "HAMBURGUESA TREMINO 3/4"},
	{ "004", "HAMBURGUESA BIEN COSIDA"},
	{ "005", "POLLO CON PAPAS"},
	{ "006", "CARNE ASADA"},
	{ "007", "CHULETA ASADA"},
    { "008", "CHURRASCO"},
	{ "009", "COSTILLA"},
	{ "010", "FAMILIAR"},
	{ "011", "REFRESCO NATURAL"},
	{ "012", "REFRESCO DE BOTELLA"},
	{ "013", "BEBIDAS ESPECIALES"},
	{ "014", "CERVEZA NACIONAL"},
	{ "015", "CERVEZA INTERNACINAL"},
};


void juegos() {
	system("cls");
	
	cout << "PANTALLA DEL MENU :)" << endl;
	cout << endl;
	cout << endl;
			
cout << " 011------ REFRESCO NATURAL-----------------------------25.00" << endl;
cout << " 012------ REFRESCO DE BOTELLA -------------------------30.00" << endl;
cout << " 013------ BEBIDAS ESPECIALES --------------------------35.00" << endl;
cout << " 014------ CERVEZA NACIONAL-----------------------------0.00" << endl;
cout << " 015------ CERVEZA INTERNACINAL--------------------------60.00" << endl;

	cout << endl;
	cout << endl;
	cout << endl;
	

	bool salir = false;
	
	while(salir == false) {
		string opcion;
		cout << "PRESIONE 'S' MAS ENTER PARA SALIR" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;
		}
	}
}

bool buscarJuego(string &codigo, string &descripcionJuego) {
	while(true) {
		mensajeEnConsola("BUSCAR PLATILLO");
		mensajeEnConsola("------------");
		saltosDeLinea(2);		
			
cout << " 001------ HAMBURGUESA S/Q--------------------------55.00" << endl;
cout << " 002------ HAMBURGESA C/Q---------------------------70.00" << endl;
cout << " 003------ HAMBURGUESA TREMINO 3/4------------------90.00" << endl;
cout << " 004------ HAMBURGUESA BIEN COSIDA------------------120.00" << endl;
cout << " 005------ POLLO CON PAPAS--------------------------60.00" << endl;

	cout << endl;
	cout << endl;
	cout << endl;
	
		mensajeConValorEnConsola("CODIGO DEL PLATILLO: ", codigo);
		
		for(int indice = 0; indice < 5; indice++) {		
			if (arregloJuegos[indice][0] == codigo) {
				descripcionJuego = arregloJuegos[indice][1];
				mensajeEnConsola("--> " + descripcionJuego);
				return true;
			}
		}		
			
		bool continuar = false;
		while(continuar == false) {
			system("cls");
			
			string opcion = "";
			mensajeConValorEnConsola("Codigo del plato no encontrado, desea continuar buscando s/n? ", opcion);
			
			if (opcion == "s" || opcion == "S") {
				continuar = true;
				system("cls");
			}
			if (opcion == "n" || opcion == "N") {
				return false;
			}		
		}
	}
}

