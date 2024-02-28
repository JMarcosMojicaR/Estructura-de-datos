#include "ejvector.h"

#include <iostream>
using namespace std;

	ejvector::ejvector(void)
	{
		 vec[10] = 0;
		 n=0;
	}

	ejvector::~ejvector(void)
	{
	}
	void ejvector::set_n(int _n)
	{
		n = _n;
	}
	int ejvector::get_n(int _n)
	{
		return n;
	}
	void ejvector::cargarejvector(int vec[], int n)
	{
		for (int i = 0; i <=n; i++)
		{
			cout << "vec[" << i << "]";
			cin >> vec[i];
		}
	}
	void ejvector::mostrarejvector(int vec[], int n)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "[" << i << "]" << endl;

		}
	}

	void ejvector::ordenarejvector(int vec[], int n)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = i; j < i; j++)
			{
				if (vec[i] > vec[j])
				{
					int aux = vec[i];
					vec[i] = vec[j];
					vec[j] = aux;
				}
			}
		}
	}
