
#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <locale>
using namespace std;

class operaciones
{

	double a, b;
	int salir, opcion, suma, resta, multiplicacion, division;

public:
	void leer(void);
	void menu(void);
};

void operaciones::leer(void)
{
	cout << "Ingrese el primer numero" << endl;
	cin >> a;
	cout << "Ingrese el segundo numero" << endl;
	cin >> b;
}

void operaciones::menu(void)
{
	do
	{
		cout << "Que operacion va a realizar con los numero ingresados? \n"
			 << endl;
		cout << "Menu principal\n"
			 << endl;
		cout << "1. Suma" << endl;
		cout << "2. Resta" << endl;
		cout << "3. Producto" << endl;
		cout << "4. Division" << endl;
		cout << "5. Salir" << endl;

		cin >> opcion;
		
		suma = a + b;
		resta = a - b;
		division = a / b;
		multiplicacion = a * b;
		switch (opcion)
		{
		case 1:
			cout << " Suma \n resultado: " << suma << endl;
			break;
		case 2:
			cout << " Resta \n resultado: " << resta << endl;
			break;
		case 3:
			cout << " Multiplicacion \n resultado: " << multiplicacion << endl;
			break;
		case 4:
			cout << " Division \n resultado: " <<division<< endl;
			break;
			case 5:
			getch();
			break;

		default:
			cout << "saliendo..." << endl;
			break;
		}

	} while (salir = !5);
}

int main()
{
	setlocale(LC_ALL, "spanish");
	operaciones operacion;
	operacion.leer();
	operacion.menu();
	return 0;
}
