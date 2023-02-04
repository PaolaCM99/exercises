#include <iostream>
#include <stdio.h>
using namespace std;

class MayMen
{
private:
	int matriz[3][3];
	int mTranspuesta[3][3];
	int valor;

public:
	void leer(void);
	void transpuesta(void);
};

void MayMen::leer(void)
{
	cout << "Ingresa numero por numero para organizarlos en una matriz de mayor a menor" << endl;

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "Posicion [" << i << "][" << j << "] \n";
			cin >> matriz[i][j];
		}
	}

	cout << "\n-------------Matriz ingresada--------------------\n \n";

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "\t" << matriz[i][j] << "\t";
			mTranspuesta[i][j] = matriz[i][j];
		}
		cout << endl;
	}
	cout << "\n--------------------------------------------------\n";
}

void MayMen::transpuesta(void)
{
cout << "\n-------------Matriz transpuesta--------------------\n \n";
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << "\t" <<mTranspuesta[j][i] << "\t";
		
		}
		cout << endl;
	}
}

int main()
{
	MayMen cadenaObj;
	cadenaObj.leer();
	cadenaObj.transpuesta();

	return 0;
}
