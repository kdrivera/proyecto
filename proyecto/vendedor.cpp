#include <iostream>
#include "vendedor.h"
#include "mensajes.h"

using namespace std;
     	
string arregloClientes[5][3] = {
	{ "001", "DANIEL", "33-33-33-33"},
	{ "002", "ALEJANDRA", "88-88-88-88"},
	{ "003", "DAISY", "77-77-77-77" },
	{ "004", "CARLOS", "55-55-55-55" },
	{ "005", "SERGIO", "44-44-44-44" },
	

};
	

void clientes() {
	system("cls");

	cout << "ESPECIALIDAD EN CARNES :)" << endl;
	cout << endl;
	cout << endl;
				
cout << " 006------ CARNE ASADA--------------------------150.00" << endl;
cout << " 007------ CHULETA ASADA------------------------120.00" << endl;
cout << " 008------ CHURRASCO----------------------------250.00" << endl;
cout << " 009------ COSTILLA-----------------------------180.00" << endl;
cout << " 010------ FAMILIAR-----------------------------500.00" << endl;

	cout << endl;
	cout << endl;
	cout << endl;

	
	bool salir = false;
	
	while(salir == false) {
		string opcion;
		cout << "presione 'S' mas enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;
		}
	}
}

bool buscarCliente(string &codigo, string &nombreCliente) {
	while(true) {
		mensajeEnConsola("BUSCAR VENDEDOR");
		mensajeEnConsola("--------------");
		saltosDeLinea(2);		
		mensajeConValorEnConsola("CODIGO DEL VENDEDOR: ", codigo);
		
		for(int indice = 0; indice < 5; indice++) {		
			if (arregloClientes[indice][0] == codigo) {
				nombreCliente = arregloClientes[indice][1];
				mensajeEnConsola("--> " + nombreCliente);
				return true;
			}
		}		
			
		bool continuar = false;
		while(continuar == false) {
			system("cls");
			
			string opcion = "";
			mensajeConValorEnConsola("CODIGO EQUIBOCADO, desea continuar buscando s/n? ", opcion);
			
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

