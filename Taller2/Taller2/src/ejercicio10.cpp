#include <iostream>

//using namespace std;
using std::cout; using std::endl;
using std::cin;

class Factorial{
    int m, n, temp, res, aux, auxM, auxN, *fac;
    public:
        Factorial();
        ~Factorial();

        void proceso(void);
        void salida(void);
};

Factorial::Factorial(){
    cout<<"Iniciando programa"<<endl;
    m=n=aux=temp=0;
    res=1;
    cout<<"Ingrese el valor #1"<<endl;
    cin>>m;
    cout<<"Ingrese el valor #2, tiene que ser mayor al #1"<<endl;
    cin>>n;
    fac = new int[n-m];
}

Factorial::~Factorial(){
    cout<<"Fin del programa"<<endl;
    delete fac;
}

void Factorial::proceso(){
    temp=0;
    auxM = m;
    auxN = n;
    for(auxM; auxM<=auxN; auxM++){
        aux = auxM;
        while(aux > 1){
            res *= aux--;
        }
        fac[temp] = res;
        res = 1;
        temp++;
    }
}

void Factorial::salida(){
    temp=0;
    auxM = m;
    auxN = n;
    for(auxM; auxM<=auxN; auxM++){
        cout<<"El factorial de "<<auxM<<" es "<<fac[temp]<<endl;
        temp++;
    }
}

int main(){
    Factorial aux;

    aux.proceso();
    aux.salida();

    return 0;
}