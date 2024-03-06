#include "clasevector.h"
#include <iostream>
using namespace std;
clasevector::clasevector()
{
	
}
clasevector::~clasevector()
{

}
 void clasevector::set_n(int _n)
{
	n = _n;
}
 int clasevector::get_n()
{
	return n;
}
 void clasevector::cargar(int _n, int _vec[])
{
	for (int i = 0; i < _n; i++)
	{
		cout << "Vec[" << i << "]=";
		cin >> _vec[i];
	}
}
 int clasevector::mostrar(int _vec[])
 {
	 for (int i = 0; i < n; i++)
	 {
		 cout << "_Vector: [" << i << "]=" << _vec[i] << endl;
	 }
	 return 0;
 }
 void clasevector::ordenar(int _vec[], int _vec2[])
 {
	 for (int i = 0; i < n-1; i++)
	 {
		 _vec2[i] = _vec[i];
		 for (int j = i; j < n; j++)
		 {
			 if (_vec[i] > vec[j])
			 {
				int  aux = _vec[i];
				  _vec[i] = _vec[j];
					  _vec[j] = aux;
			 }

		 }
		 
	 }
 }
 int clasevector::promedio(int _vec[], int _n)
 {
	 int suma = 0;
	 for (int i = 0; i < _n; i++)
	 {
		 suma += _vec[i];
	 }
	 return suma / _n;
 }
