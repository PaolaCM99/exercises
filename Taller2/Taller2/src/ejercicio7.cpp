#include <iostream>

using std::cout; using std::cin;
using std::endl;

class Traspuesta{
    int **matriz, **copia, f, c, count;
    public:
        Traspuesta();
        ~Traspuesta();
        
        void entrada(void);
        void proceso(void);
        void salida(void);
};

Traspuesta::Traspuesta(){
    cout<<"Iniciando programa"<<endl;
    f=c=count=1;
    
    cout<<"Ingrese la cantidad de filas"<<endl;
    cin>>f;
    cout<<"Ingrese la cantidad de columnas"<<endl;
    cin>>c;
    
    matriz = new int* [f];
    copia = new int* [f];
    if(matriz == NULL & copia == NULL){
        cout<<"ERROR de asignacion de memoria en filas"<<endl;
    }
    for(int i=0; i<f; i++){
        matriz[i] = new int [c];
        copia[i] = new int [c];
        if(matriz == NULL & copia == NULL){
            cout<<"ERROR de asignacion de memoria en columnas"<<endl;
        }
    }
}

Traspuesta::~Traspuesta(){
    cout<<"Fin del programa"<<endl;
}

void Traspuesta::entrada(){
    cout<<"La matriz se llena automaticamente"<<endl;
    for(int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            matriz[i][j] = count;
            count++;
        }
    }
}

void Traspuesta::proceso(){
    for(int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            copia[j][i] = matriz[i][j];
        }
    }
}

void Traspuesta::salida(){
    cout<<"Matriz original"<<endl;
    for(int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cout<<matriz[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<"Matriz traspuesta"<<endl;
    for(int i=0; i<f; i++){
        for (int j=0; j<c; j++){
            cout<<copia[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main(){
    Traspuesta aux;

    aux.entrada();
    aux.proceso();
    aux.salida();

    return 0;
}