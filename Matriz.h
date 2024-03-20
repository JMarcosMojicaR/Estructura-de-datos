#pragma once
class Matriz
#define MAX 20
{
private:
	int fil, col;
	int MAT[MAX][MAX];

public:
	Matriz();
	~Matriz();
	void set_fil(int fila);
	int get_fil();
	void set_col(int columna);
	int get_col();
	void  mostrarmat(int MAT[MAX][MAX], int m, int n);
	void cargarmat(int MAT[MAX][MAX]);
	float promedio(int MAT[MAX][MAX], int m, int n);
		int mayor(int MAT[MAX][MAX], int m, int n);
		void suma(int MAT[MAX][MAX], int MAT2[MAX][MAX], int MAT3[MAX][MAX]);
};

