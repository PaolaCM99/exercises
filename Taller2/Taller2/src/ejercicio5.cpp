#include <iostream>

using std::cout; using std::cin;
using std::endl;

class Arreglo{
    int *num, n, aux;
    public:
        Arreglo();
        ~Arreglo();
        void entrada(void);
        void proceso(void);
        void salida(void);
};

Arreglo::Arreglo(){
    cout<<"Construyendo"<<endl;
    n=aux=0;
    cout<<"Ingrese el tamanio deseado para el arreglo"<<endl;
    cin>>n;
    num = new int [n];
    if(num == NULL){
        cout<<"ERROR"<<endl;
    }
}

Arreglo::~Arreglo(){
    cout<<"Liberando memoria"<<endl;
    delete num;
}

void Arreglo::entrada(void){
    for(int i=0; i<n; i++){
        cout<<"Ingrese un numero para la pocision "<<i<<endl;
        cin>>num[i];
    }
}

void Arreglo::proceso(){
    for(int i=1; i<n; i++){
        for(int j=n-1; j>=i; j--){
            if(num[j-1] > num[j]){
                aux = num[j-1];
                num[j-1] = num[j];
                num[j] = aux;
            }
        }
    }
}

void Arreglo::salida(){
    for(int i=0; i<n; i++){
        cout<<num[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Arreglo a;

    a.entrada();
    a.proceso();
    a.salida();
    
    return 0;
}