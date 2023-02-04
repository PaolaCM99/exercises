#include <iostream>
using namespace std;

class numPerfecto
{
private:
	int numeroIngresado;
	int sumaDivisores = 0;

public:
	void leer(void);
	void numProcesar(void);
	void respuesta(void);
};

void numPerfecto::leer(void)
{
	cout << "Ingrese un numero para saber si es perfecto" << endl;
	cin >> numeroIngresado;
}

void numPerfecto::numProcesar(void)
{
	int contador = 0;
	int divisores[5];

	for (int i = 1; i < numeroIngresado; i++)
	{
		if (numeroIngresado % i == 0)
		{
			divisores[contador] = i;
			contador++;
		}
	};

	for (int i = 0; i < contador; i++)
	{
		sumaDivisores = sumaDivisores + divisores[i];
	};
}
void numPerfecto::respuesta(void)
{
	if (numeroIngresado == sumaDivisores)
	{
		cout << numeroIngresado << " Es un numero perfecto" << endl;
	}
	else
	{
		cout << numeroIngresado << " No es un numero perfecto" << endl;
	}
}

int main()
{
	numPerfecto perfecto;
	perfecto.leer();
	perfecto.numProcesar();
	perfecto.respuesta();
	return 0;
}
