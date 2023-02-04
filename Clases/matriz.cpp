#include <iostream>
using namespace std;

class Numeros{
float **M, sum, pr;
int f,c,i,j;

public:
Numeros();
~Numeros();
void leerMatriz();
void procesoMatriz();
void mostrarDatos();

};

Numeros::Numeros(){
cout <<"Matriz"<<endl;

sum=pr=0.0;
f=c=j=i=0;

cout <<"De numero de filas"<<endl;
cin >>f;
cout <<"DE numero de columnas"<<endl;
cin >>c;

M=new float*[f];

if(M==NULL){
    cout <<"ERROR EN LA ASIGNACION DE MEMORIA"<<endl;
}

for(i=0; i<f;i++){
    M[i]=new float[c];
    if(M==NULL){
        cout <<"ERROR EN LA ASIGNACION DE MEMORIA 2"<<endl;
      }
    }
};

Numeros::~Numeros(){
   
cout <<"LIBERANDO MEMORIA"<<endl;

 for(int i=0; i<f;i++){    
        delete M[i];
      //  return M;
    }
};

void Numeros::leerMatriz(){

for(int i=0; i<f;i++){
    for(int j=0; j<f;j++){
        cout <<"Digite dato"<<endl;
        cin>>M[i][j];
    }
}
};


void Numeros::procesoMatriz(){

for(int i=0; i<f;i++){
    for(int j=0; j<f;j++){
        sum=sum+M[i][j];
        pr=sum/(f*c);
         }
    }
}

void Numeros::mostrarDatos(){

    cout<<endl;
    cout<<"----------------"<<endl;
    for(int i=0; i<f;i++){
    for(int j=0; j<f;j++){
        cout <<" "<<M[i][j]<<" ";
    }
    cout<<endl;
    }
    cout<<"----------------"<<endl;
};

int main(){
    Numeros numeros;
    numeros.leerMatriz();
    numeros.procesoMatriz();
    numeros.mostrarDatos();
    return 0;
}
