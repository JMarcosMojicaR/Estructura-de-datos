#include <iostream>
#include "ejvector.h"

#define MAX 10
using namespace std;
int main()
{
	int vec[MAX], n, op;
	ejvector v1;
	cout << "ingrese el tamaño del vector" << endl;
	do
	{
		cin >> n;
	} while (n <= 0);
		do {
			cout << "Ingrese el tamanio del vector : ";
			cin >> n;
		} while ((n > MAX) || (n <= 0));
		do {
			cout << "-----       M E N U        -----" << endl;
			cout << "|1.- Cargar Vector.            |" << endl;
			cout << "|2.- Mostrar Vector.           |" << endl;
			cout << "|3.- Ordenar Vector.           |" << endl;
			cout << "|0.- Salir                     |" << endl;
			cout << "--------------------------------" << endl;
			cout << " Elija una opcion" << endl;
			cin >> op;
			switch (op) {
			case 1:
				v1.cargarejvector(vec, n);  //Llamar al metodo
				break;
			case 2:
				v1.mostrarejvector(vec, n);
				break;
			case 3:
				v1.ordenarejvector(vec, n);
				break;
			case 0:
				cout << "Salir" << endl;
				break;
			default:
				cout << "Error: Opcion no valida..." << endl;
				break;
			}
		} while (op != 0);
		
}
