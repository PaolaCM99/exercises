#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

class MayMen
{
private:
	int numero;
	int numeros[5];
	int i = 0;
	int suma = 0;
int numeroIngresado;
public:
	void leer(void);
	void separar(void);
	void organizar(void);
	void respuesta(void);
};

void MayMen::leer(void)
{
	cout << "\n Cubo perfecto \n"
		 << endl;
	cout << "Ingrese el numero el cual desea saber si es un cubo perfecto,  no mayor a 5 cifras" << endl;
	cin >> numero;
	numeroIngresado=numero;
	
}
void MayMen::separar(void)
{

	while (numero > 0)
	{
		numeros[i] = numero % 10;
		numero = (numero / 10);
		i++;
	}
}
void MayMen::organizar(void)
{
	for (int j = i - 1; j >= 0; j--)
	{
		suma = suma + pow(numeros[j], 3);
	}

}
void MayMen::respuesta(void)
{
	if (suma==numeroIngresado)
	{
		cout << "\n Es un cubo perfecto; resultado: " << suma << " y el ingresado:  "<< numeroIngresado << endl;
	}
	else
	{
		cout << "\n No es un cubo perfecto, el resultado: " << suma << " y el ingresado: "<< numeroIngresado << endl;
	}
}


int main()
{

	MayMen cadenaObj;
	cadenaObj.leer();
	cadenaObj.separar();
	cadenaObj.organizar();
	cadenaObj.respuesta();

	return 0;
}
