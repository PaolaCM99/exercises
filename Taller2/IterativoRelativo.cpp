#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

class IterativoRelativo
{
private:
	int numero;

public:
	void leer(void);
	void iterativo(int);
	int relativo(int);
};

void IterativoRelativo::leer(void)
{
	cout << "Ingrese un numero para hallar su factorial" << endl;
}

void IterativoRelativo::iterativo(int n)
{
	int acomulador = 1;

	for (int j = 2; j <= n; j++)
	{
		acomulador = acomulador * j;
	}
	cout << "\n El factorial iterativo es: " << acomulador << "\n ";
}

int IterativoRelativo::relativo(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * relativo(n-1);
	}
};

int main()
{
	int numero;
	IterativoRelativo factorialesObj;
	factorialesObj.leer();
	cin >> numero;
	
	factorialesObj.iterativo(numero);
	// factorialesObj.relativo(numero);

	cout <<"El numero factorial recursivo es "	<<factorialesObj.relativo(numero) << "\n ";
	return 0;
}
