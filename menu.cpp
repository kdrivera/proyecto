#include <iostream>
#include "menu.h"
#include "pedido.h"
#include "vendedor.h"
#include "producto.h"

using namespace std;


void menu() {	
	bool salir = false;
	
	while(salir == false) {
		int opcion;
		
			
		
cout << "-������----------������-��������������-������----------������-������--������-" << endl;
cout << "-����������������������-��������������-��������������--������-������--������-" << endl;
cout << "-����������������������-��������������-��������������--������-������--������-" << endl;
cout << "-����������������������-������---------��������������--������-������--������-" << endl;
cout << "-������--������--������-��������������-������--������--������-������--������-" << endl;
cout << "-������--������--������-��������������-������--������--������-������--������-" << endl;
cout << "-������--������--������-��������������-������--������--������-������--������-" << endl;
cout << "-������----------������-������---------������--��������������-������--������-" << endl;
cout << "-������----------������-��������������-������--��������������-��������������-" << endl;
cout << "-������----------������-��������������-������--��������������-��������������-" << endl;
cout << "-������----------������-��������������-������----------������-��������������-" << endl;
cout << "-----------------------------------------------------------------------------" << endl;

	cout << endl;
	cout << endl;
	cout << endl;

		cout << "-------------------MENU PRINCIPAL------------------" << endl;
		
		cout << "----------SELECCIONE UNA OPCION DEL MENU-----------" << endl;
		cout << "---------------------------------------------------" << endl;
		
		cout << "---------------------------------------------------" << endl;
		cout << endl;
		cout << endl;
		cout << "1 -    -------------HAMBURGUESAS--------------" << endl;
		cout << "2 -    ---------------CARENES ----------------" << endl;
		cout << "3 -    ---------------BEBIDAS-----------------" << endl;
		cout << "4 -    ----------------Salir-------------------" << endl;

		cout << endl;
		cout << endl;
		
						
		cout << "seleccione del  menu y presione enter --> ";
		cin >> opcion;
		
		switch(opcion) {
			case 1:
				rentar();
				break;	
			case 2:
				clientes();
				break;
			case 3:
				juegos();
				break;
			case 4:
				salir = true;	
			default: 		
				break;
				
		}
		
		 system("CLS");		
	}
}

