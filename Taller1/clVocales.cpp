#include <iostream>
using namespace std;


char vocales[] = "aeiouAEIOU";
int cont_vocales[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

class clVocales
{
private:
	string phrase;

	int posicionesa[100];
	void mensaje(), frase(string);

public:
	void leer(void);
	void procesar(void);
	void resultado(void);
};
void clVocales::leer(void)
{
	cout << "Ingrese una oracion para identificar las vocales" << endl;
	getline(cin, phrase);
}
void clVocales::procesar(void)
{
	for (int i = 0; i < phrase.size(); i++)
	{

		for (int j = 0; j < 10; j++)
		{

			if (vocales[j] == phrase[i])
			{

				cout << phrase[i] << "\t" << endl;
				cont_vocales[j]++;
				// cout<< " posicion " << i <<endl;
				if (phrase[i] == 'a')
				{
					posicionesa[cont_vocales[0] - 1] = i;
				}
			}
		}
	}
}
void clVocales::resultado(void)
{

	for (int k = 0; k < 10; k++)
	{
		if (cont_vocales[k] > 0)
		{
			cout << "\n"
				 << cont_vocales[k] << " vocales " << vocales[k] << " en posicion " << posicionesa[0] << endl;
		}
	}
}

int main()
{
	clVocales vocalesObj;
	vocalesObj.leer();
	vocalesObj.procesar();
	vocalesObj.resultado();
	return 0;
}
