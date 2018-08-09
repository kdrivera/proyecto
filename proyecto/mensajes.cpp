#include <iostream>
#include "mensajes.h"

using namespace std;


void mensajeBienvenido() {
	cout << "Bienvenido al sistema" << endl;

}


void saltosDeLinea(int ciclos) {
	for(int indice = 1; indice <= ciclos; indice ++) {
		cout << endl;
	}
}

void mensajeEnConsola(string textoEnConsola) {			
	cout << textoEnConsola << endl;
}

void mensajeConValorEnConsola(string textoEnConsola, string &valorEnConsola) {			
	cout << textoEnConsola;
	cin >> valorEnConsola;
}


