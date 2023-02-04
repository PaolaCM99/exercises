#include <iostream>

using std::cout; using std::cin;
using std::endl;

class primosRelativos{
    private:
        int numeroA, numeroB;
        bool primoA=true;
        bool primoB=true;

    public:
        void leer(void);
        void procesar(void);
        void mostrar(void);
};

void primosRelativos::leer(void){
	cout << "\t PRIMOS RELATIVOS \n" << endl;
	cout << "Ingrese el primer numero" << endl;
	cin >> numeroA;
	cout << "Ingrese el segundo numero" << endl;
	cin >> numeroB;
}

void primosRelativos::procesar(void){

	for (int i = 2; i < numeroA; i++){
		if (numeroA % i == 0) primoA = false;
	}

	for (int i = 2; i < numeroB; i++){
		if (numeroB % i == 0) primoB = false;
	}
	
}

void primosRelativos::mostrar(void){
	if (primoA==false && primoB==false||primoA==true && primoB==false||primoA==false && primoB==true){
		cout << numeroA<<" y "<< numeroB<<" no son primos relativos" << endl;
	}else{
		cout << numeroA<<" y "<< numeroB<<" son primos relativos" << endl;
	}
}

int main(){
	primosRelativos primos;

	primos.leer();
	primos.procesar();
	primos.mostrar();
	
    return 0;
}