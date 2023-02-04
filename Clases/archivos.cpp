//Hecho por Paola Castro
#include <iostream>
#include <fstream>

using namespace std;

class archivo{
    
    public:
    void crearArchivo(void);
    void abrirArchivo(void);
    };
    
    void archivo::crearArchivo(void){
    // ofstream crearA("mayo19.txt");
    // crearA<<"Primer archivo plano wuuu";
    // crearA<<"creado en c++"<<endl;
    // crearA<<"procesado de forma secuencial"<<endl;
    // crearA<<"fin"<<endl;


    cout<<"Digite su nomble"<<endl;
    cin.getline(nom, 60);
    crearA<<nom<<endl;
    };

    void archivo::abrirArchivo(void){
    ifstream apertura("mayo19.txt",ios::app); //apertura es un objeto 

    char a[60],b[60], c[60];
   
    char letra;
    char nom[60];
    apertura>>c;
    cout <<c<<endl;

    cout<<"Digite su nomble"<<endl;
    cin.getline(nom, 60);
    crearA<<nom<<endl;
    while(!apertura.eof()){ 
    
    //     // apertura.getline(c, sizeof(c));
    //     // //letra=apertura.get(); //imprimir letras separadas
    //     // //cout<<letra<<" ";
    //     // //apertura>>c; //imprimir por line
    //     // cout<<c<<" "<<endl;
    //     // 
    }
    };

    int main(){
    archivo uno;
    uno.crearArchivo();
    uno.abrirArchivo();
    };


