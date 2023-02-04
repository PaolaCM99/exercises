#include <iostream>
#include <stdio.h>
#include <cmath>
using namespace std;

class Factoriales
{
private:
	int m, n;
	int mayor, menor;
	unsigned long long *array;

public:
	Factoriales();
	~Factoriales();
	void leer(void);
	void definir(void);
	void procesar(void);
	void resultado(void);
};

Factoriales::Factoriales()
{
	cout << "Iniciando programa de factoriales...\n"
		 << endl;
	mayor, menor = 0;
};

Factoriales::~Factoriales()
{
	cout << "\n Finalizando..." << endl;
	delete array;
};
void Factoriales::leer(void)
{
	cout << "Ingrese el primer numero" << endl;
	cin >> m;
	cout << "Ingrese el segundo numero" << endl;
	cin >> n;
}

void Factoriales::definir(void)
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

void Factoriales::resultado(void)
{
	int i;
	unsigned long long contador = 0;
	unsigned long long acomulador = 1;
	array = new unsigned long long[contador];

	cout << "\n \t -----------Factoriales desde " << menor << " hasta " << mayor << "-----------\n " << endl;

	// Rango de numeros

	for (i = menor; i <= mayor; i++)
	{
		contador = contador++;
		for (int factorial = menor; factorial <= i; factorial++)
		{
			array[contador] = factorial;
		}
	}

	// Multiplicacion de numeros
	if (contador < 15)
	{
		for (int j = 1; j <= contador; j++)
		{
			for (int k = 1; k < array[j]; k++)
			{

				acomulador = acomulador * array[k];
			}
			cout << "Factorial de " << array[j] << ": " << acomulador << "\t     ";
			acomulador = 1;
		}
	}
	 else if(sizeof(unsigned long long)>acomulador){
	 	cout << "Numeros demasiado grandes";
	 }
	else
	{	
		cout << "Demasiados numeros, digite nuevamente los numeros asegurandose de que haya un rango menor de 15, entre los numeros"<<endl;
	}
	
}

int main()
{
	Factoriales fact;
	fact.leer();
	fact.definir();
	fact.resultado();
	return 0;
}
