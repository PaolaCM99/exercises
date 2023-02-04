#include <iostream>

using std::cout; using std::cin;
using std::endl;

class calcu{
    private:
        int  m, n , res, opc;
    public:
        calcu();
        ~calcu();

        void calculadora(void);
};

calcu::calcu(void){
    cout<<"Iniciando programa"<<endl;
    m=n=opc=0;
}

calcu::~calcu(){
    cout<<"Fin del programa"<<endl;
};

void calcu::calculadora(){
    do{
        cout<<"Ingresa el primer numero"<<endl;
        cin>>m;
        cout<<"Ingresa el segundo numero"<<endl;
        cin>>n;
        cout<<"Ingresa el numero la opcion deseada"<<endl;
        cout<<" 1.Suma\n 2.Resta\n 3.Producto\n 4.Divicion\n 5.Salir"<<endl;
        cin>>opc;
        switch (opc){
            case 1:
                res = m + n;
                cout<<m<<"+"<<n<<"="<<res<<endl;
                break;
            case 2:
                res = m - n;
                cout<<m<<"-"<<n<<"="<<res<<endl;
                break;
            case 3:
                res = m * n;
                cout<<m<<"*"<<n<<"="<<res<<endl;
                break;
            case 4:
                res = m / n;
                cout<<m<<"/"<<n<<"="<<res<<endl;
                break;
            case 5:
                cout<<"Gracias vuelda pronto"<<endl;
                break;
            default:
                cout<<"Opcion no valida"<<endl;
                break;
        }
    } while (opc != 5);
    
};

int main(){
    calcu temp;

    temp.calculadora();

    return 0;
}