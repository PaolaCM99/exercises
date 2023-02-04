#include <iostream>

using std::cout; using std::cin;
using std::endl;

class ArregloInv{
    int *num, n, aux;
    public:
        ArregloInv();
        ~ArregloInv();
        void entrada(void);
        void proceso(void);
        void salida(void);
};

ArregloInv::ArregloInv(){
    cout<<"Construyendo"<<endl;
    n=aux=0;
    cout<<"Ingrese el tamanio deseado para el Arreglo"<<endl;
    cin>>n;
    num = new int [n];
    if(num == NULL){
        cout<<"ERROR"<<endl;
    }
}

ArregloInv::~ArregloInv(){
    cout<<"Liberando memoria"<<endl;
    delete num;
}

void ArregloInv::entrada(void){
    for(int i=0; i<n; i++){
        cout<<"Ingrese un numero para la pocision "<<i<<endl;
        cin>>num[i];
    }
}

void ArregloInv::proceso(){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=i+1; j--){
            if(num[j-1]<num[j]){
                aux = num[j];
                num[j] = num[j-1];
                num[j-1] = aux;
            }
        }
    }
}

void ArregloInv::salida(){
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
}

int main(){
    ArregloInv a;

    a.entrada();
    a.proceso();
    a.salida();
    
    return 0;
}