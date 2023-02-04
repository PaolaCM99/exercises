#include <iostream>

using std::cout; using std::endl;
using std::cin;

class cumple{
    int numeroPersonas;
    float noCumple, probCumple;
    public:
        void leer(void);
        void procesar(void);
        void mostrar(void);
};

void cumple::leer(void){
	cout << "Digite el numero de personas \n";
	cin >> numeroPersonas;
}

void cumple::procesar(void){
	probCumple = 1.0;
	for (int i = 0; i < numeroPersonas; i++){
		numeroPersonas = probCumple * ((365.0 - i) / 365);
		noCumple = probCumple;
	}
	probCumple = 100 * (1 - probCumple);
}

void cumple::mostrar(void){
	int noCumplen= noCumple * 100 ;
	cout  << noCumplen << "%"<< " no cumplen el mismo dia y para "  << numeroPersonas << " personas existe una probabilidad de " << probCumple << "%" << endl;
	cout << "para que dos personas cumplan el mismo dia \n";
}

int main(){
	cumple cumpleanos;
	
    cumpleanos.leer();
	cumpleanos.procesar();
	cumpleanos.mostrar();
	
    return 0;
}