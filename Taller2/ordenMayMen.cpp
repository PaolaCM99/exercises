#include <iostream>
#include <stdio.h>
using namespace std;

class MayMen
{
private:
	// int numero[][];
	int matriz[3][3];
	int valor;

public:
	void leer(void);
	void organizar(void);
	void resultado(void);
};

void MayMen::leer(void)
{
	cout << "Ingresa numero por numero para organizarlos en una matriz de mayor a menor" << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Posicion [" << i << "][" << j << "] \n"
				 << endl;
			cin >> matriz[i][j];
		}
	}

	cout << "\n-------------Matriz ingresada--------------------\n \n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "\t" << matriz[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "\n--------------------------------------------------\n";
}

void MayMen::organizar(void)
{
	int tamVec[9];
	int aux;
	int n = 0;
	int numeroUno;
	int numeroDos;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			tamVec[n++] = matriz[i][j];
		}
	}

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			if (tamVec[j] < tamVec[j + 1])
			{
				aux = tamVec[j];
				tamVec[j] = tamVec[j + 1];
				tamVec[j + 1] = aux;
			}
		}
	}

	n = 0;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			matriz[i][j] = tamVec[n++];
		}
		cout << endl;
	}

	
	
}
void MayMen::resultado(void)
{
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout <<matriz[i][j] << "\t";
		}
		cout << endl;
	}
}
int main()
{
	MayMen cadenaObj;
	cadenaObj.leer();
	cadenaObj.organizar();
	cadenaObj.resultado();
	return 0;
}
