#pragma once
class ejvector
{
	
	private:
		int vec[10], n;
	public:
		ejvector(void); //constructor
		~ejvector(void);//destructor
		void set_n(int n);
		int get_n(int n);
		void cargarejvector(int vec[], int n);//metodos
		void mostrarejvector(int vec[], int n);
		void ordenarejvector(int vec[], int n);

};

