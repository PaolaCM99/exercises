#include <iostream>
using namespace std;

class Estudiante
{

private:
	char nombre[30];
	int long codigo;
	float estatura, edad, peso, subir;

public:
	void entrada(void);
	void proceso(void);
	void salida(void);
};

void Estudiante::entrada(void)
{
	cout << "Digite su nombre" << endl;
	cin.getline(nombre, 30);
	cout << "Digite su codigo" << endl;
	cin >> codigo;
	cout << "Digite su edad" << endl;
	cin >> edad;
	cout << "Digite su estatura en cm" << endl;
	cin >> estatura;
	cout << "Digite su peso en kilogramos" << endl;
	cin >> peso;
}
void Estudiante::proceso(void)
{
	cout << "\n ----------------------\n " << endl;
	
	float estaturaMetros = (estatura/100);
	float imc = (peso/(estaturaMetros*estaturaMetros));

	cout <<imc << endl;

	if (imc < 18.5)
	{
		cout << " Esta flaco, debes de subir "
			 << "kilos" << endl;
	}

	else if (imc >= 18.5 && imc <= 24.9)
	{
		cout << "Esta en el peso adecuado " << endl;
	}
	else if (imc >= 30.0)
	{
		cout << "Su peso esta superior al normal" << endl;
	}

	else
	{
		cout << "No hay resultados  " << endl;
	}
}

void Estudiante::salida(void)
{
	cout << "\n ----------------------\n " << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "codigo: " << codigo << endl;
	cout << "Edad: " << edad << endl;
	cout << "Estatura: " << estatura << endl;
	cout << "Peso: " << peso << endl;
}

int main()
{

	Estudiante pilo;
	pilo.entrada();
	pilo.proceso();
	pilo.salida();

	return 0;
};
