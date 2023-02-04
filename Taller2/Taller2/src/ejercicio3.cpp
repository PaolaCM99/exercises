#include <iostream>

using std::cout; using std::cin;
using std::endl; 

class NumeroPerfecto{
    int num, aux;
    public:
        NumeroPerfecto();
        ~NumeroPerfecto();
        
        void leer();
        void procesar();
        void salida();
};

NumeroPerfecto::NumeroPerfecto(){
    cout<<"Creando Clase"<<endl;
    num, aux = 0;
}

NumeroPerfecto::~NumeroPerfecto(){
    cout<<"Destruyendo Clase"<<endl;
}

void NumeroPerfecto::leer(void){
    cout<<"Ingrese un numero"<<endl;
    cin>>num;
}

void NumeroPerfecto::procesar(void){
    for(int i=1; i < num; i++){
        if(num % i == 0){
            aux += i;
        }
    }
}

void NumeroPerfecto::salida(void){
    if(aux == num){
        cout<<num<<" Es un numero perfecto"<<endl;
    }else{
        cout<<num<<" No es un numero perfecto"<<endl;
    }
}

int main(){
    NumeroPerfecto test;

    test.leer();
    test.procesar();
    test.salida();

    return 0;
}
