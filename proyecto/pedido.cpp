#include <iostream>
#include "pedido.h"
#include "mensajes.h"
#include "vendedor.h"
#include "producto.h"

using namespace std;

void rentar() {
	system("cls");
	
	cout << "------PLATILLO PEDIDO-----" << endl;
	cout << "--------------------------" << endl;
	saltosDeLinea(2);	
	
	bool salir = false;
	
	while(salir == false) {		 
		system("cls");   			
		
		string codigoCliente;
		string nombreCliente;
		if (buscarCliente(codigoCliente, nombreCliente) == false) {
			return;
		}
		
		system("cls");   	
		
		string codigoJuego;
		string descripcionJuego;
		if (buscarJuego(codigoJuego, descripcionJuego) == false) {
			return;
		}	
		
		system("cls");
		mensajeEnConsola("PLATO PEDIDO A ENTREGAR");
		mensajeEnConsola("-------------");
		mensajeEnConsola("VENDEDOR ");
		mensajeEnConsola("----->" + nombreCliente);
		saltosDeLinea(1);				
		mensajeEnConsola("PLATILLO " + codigoJuego);
		mensajeEnConsola("-->" + descripcionJuego);
		saltosDeLinea(1);				
		mensajeEnConsola("PLATO SELECCIONADO...." );
		
		saltosDeLinea(3);				
		string opcion;
		cout << "presione 'S' mas enter para salir de esta pantalla" << endl;	
		cin >> opcion;
		
		if (opcion == "S" || opcion == "s") {
			salir = true;
		}
	}
}

