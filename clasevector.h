#pragma once
#define MAX 100
class clasevector
{
private:
	int n, vec[MAX];

public:
	clasevector(void);
	~clasevector(void);
	void set_n(int _n);
     int get_n();
	void cargar(int _n,int _vec[]);
	int mostrar( int _vec[]);
	void ordenar(int _vec[], int _vec2[]);
		int promedio(int _vec[], int _n);
};

