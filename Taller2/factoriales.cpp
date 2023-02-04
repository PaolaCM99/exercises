#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

class MayMen
{
private:
	int m, n;
	int mayor, menor = 0;

public:
	void leer(void);
	void definir(void);
	void procesar(void);
	void resultado(void);
};

void MayMen::leer(void)
{
	cout << "Ingrese el primer numero" << endl;
	cin >> m;
	cout << "Ingrese el segundo numero" << endl;
	cin >> n;
}

void MayMen::definir(void)
{
	int aux;
	if (m > n)
	{
		mayor = m;
		menor = n;
	}
	if (m < n)
	{
		mayor = n;
		menor = m;
	}
	if (m == n)
	{
		mayor = m;
		menor = n;
		cout << "Los numeros son iguales" << n << endl;
	}
}

void MayMen::resultado(void)
{
	int i;
	int contador = 0;
	int acomulador = 1;
	int array[contador];

	cout << "\n El factorial desde " << menor << " hasta " << mayor << " es: \n " << endl;

	for (i = menor; i <= mayor; i++)
	{
		contador = contador + 1;

		for (int factorial = menor; factorial <= i; factorial++)
		{
			array[contador] = factorial;
		}
	}

	for (int j = 1; j <= contador; j++)
	{
		acomulador = acomulador * array[j];
	}
	cout  << "\n "<< acomulador << "\n ";
}
int main()
{
	MayMen factorialesObj;
	factorialesObj.leer();
	factorialesObj.definir();
	factorialesObj.resultado();
	return 0;
}
