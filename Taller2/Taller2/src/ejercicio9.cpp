#include <iostream>

using std::cout; using std::endl;
using std::cin;

class Factorial{
    int num, res, temp, n, res2;
    public:
        Factorial();
        ~Factorial();

        void entrada(void);
        void factorialIterativa(void);
        void funcionGatillo(void);
        int factorialRecursiva(int);
        void salida(void);
};

Factorial::Factorial(){
    cout<<"Construyendo"<<endl;
    num=res=res2=temp=1;
}

Factorial::~Factorial(){
    cout<<"Destruyendo"<<endl;
}

void Factorial::entrada(){
    cout<<"Ingresa el numero al que quieres calcular el factorial: "<<endl;
    cin>>num;
}

void Factorial::factorialIterativa(){
    temp = num;
    while(temp > 1)
        res *= temp--;
}

void Factorial::funcionGatillo(){
    n = num;
    res2 = factorialRecursiva(n);
}

int Factorial::factorialRecursiva(int n){
    if(n > 1)
        return factorialRecursiva(n-1) * n;
    return 1;
}

void Factorial::salida(){
    cout<<"El factorial iterativo de "<<num<<" es igual a "<<res<<endl;
    cout<<"El factorial recurcivo de "<<num<<" es igual a "<<res2<<endl;
}

int main(){
    Factorial aux;

    aux.entrada();
    aux.factorialIterativa();
    aux.funcionGatillo();
    aux.salida();

    return 0;
}