#include <iostream>
using namespace std;

class clDivisores
{
private:
	int numberOne, numberTwo, counterOne = 0, counterTwo = 0;

public:
	void leer(void);
	void identificacion(void);
	void resultado(void);
};
void clDivisores::leer(void)
{
	cout << "Ingrese los numeros solicitados\n"
		 << endl;
	cout << "Ingresa el primer numero" << endl;
	cin >> numberOne;
	cout << "Ingresa el segundo numero" << endl;
	cin >> numberTwo;
}
void clDivisores::identificacion(void)
{
	// Hallando los divisores del primer numero y segundo numero
	for (int i = 0; i < numberOne; i++)
	{

		if (numberOne % (i + 1) == 0)
		{
			//cout <<"Divisores del primer numero"<< i+1 <<endl;
			counterOne = counterOne + 1; // Contador de divisores
		}
	}

	for (int i = 0; i < numberTwo; i++)
	{

		if (numberTwo % (i + 1) == 0)
		{
			//cout <<"Divisores del segundo numero"<< i+1 <<endl;
			counterTwo = counterTwo + 1; // Contador de divisores
		}
	}
}
void clDivisores::resultado(void)
{
	if (counterOne < counterTwo)
	{
		cout << numberTwo << " tiene " << counterTwo << " divisores" << endl;
		cout << numberOne << " tiene " << counterOne << " divisores" << endl;
		cout << "CONCLUSION: " << numberTwo << " tiene mas divisores que " << numberOne << endl;
	}
	if (counterOne > counterTwo)
	{
		cout << numberOne << " tiene " << counterOne << " divisores" << endl;
		cout << numberTwo << " tiene " << counterTwo << " divisores" << endl;
		cout << "CONCLUSION: " << numberOne << " tiene mas divisores que " << numberTwo << endl;
	}
	if (counterOne == counterTwo)
	{
		cout << "CONCLUSION: Los numeros ingresados tienen la misma cantidad de divisores" << counterOne << endl;
	}
}

int main()
{
	clDivisores divisores;
	divisores.leer();
	divisores.identificacion();
	divisores.resultado();
	return 0;
}
