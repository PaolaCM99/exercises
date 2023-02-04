#include <iostream>
using namespace std;

class clSumatoria
{
private:
	int enteroUno, enteroDos, menor, mayor;
	int suma = 0;
	int pares[100];
	int impares[100];

public:
	void leer(void);
	void identificacion(void);
	void resultado(void);
};
void clSumatoria::leer(void)
{
	cout << "Escriba dos numeros enteros segun las indicaciones \n"
		 << endl;
	cout << "Digite el primero numero, preferiblemete que sea menor al siguiente \n";
	cin >> enteroUno;

	cout << "Digite el segundo numero, preferiblemete que sea mayor al anterior \n";
	cin >> enteroDos;
}
void clSumatoria::identificacion(void)
{
	if (enteroUno < enteroDos)
	{
		menor = enteroUno;
		mayor = enteroDos;
	}
	if (enteroUno > enteroDos)
	{
		mayor = enteroUno;
		menor = enteroDos;
	}
	if (enteroUno == enteroDos)
	{
		mayor = enteroUno;
		menor = enteroDos;
		cout << "Son iguales\n"
			 << endl;
	}
}
void clSumatoria::resultado(void)
{
	int kp = 0;
	int ki = 0;
	for (int i = menor; i <= mayor; i++)
	{
		suma = suma + i;

		if (i % 2 == 0)
		{
			pares[kp] = i;
			kp++;
		}
		else
		{
			impares[ki] = i;
			ki++;
		}
	}

	cout << "\n La sumatoria es de: " << suma << endl;
	cout << "\n -----------------------------------\n " << endl;
	cout << "\n Hay " << kp << " numeros pares y son los siguientes:" << endl;

	for (int j = 0; j <= kp - 1; j++)
	{
		cout << "\t" << pares[j] << ", ";
	}


	cout << "\n Hay " << ki << " numeros impares y son los siguientes: " << endl;
	for (int j = 0; j <= ki - 1; j++)
	{
		cout << "\t" << impares[j] << ", ";
	}

	cout << "\n -----------------------------------\n " << endl;
	cout << "\n En total hay " << ki + kp << " numeros entre " << menor << " y " << mayor << endl;
	
}

int main()
{
	clSumatoria sumatoria;
	sumatoria.leer();
	sumatoria.identificacion();
	sumatoria.resultado();
	return 0;
}
