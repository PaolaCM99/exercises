#include <iostream>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
class divisor{
	private:
		int numero;
	public:
        void leer();
};

void divisor::leer(){
	cout << "Escriba un numero para obtener sus divisores"<<endl;
};

int main(int argc, char** argv) {
	divisor divisores;
	divisores.leer();
	return 0;
}
