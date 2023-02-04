#include <iostream>
#include <fstream>

using namespace std;
//cree un programa que lea un archivo letra por letra, lo grabe en un arreglo construido dinamicament, 
//Desde ese arreglo ver el tamaño del archivo, vocales, palabras,
// cuantas mayusculas tiene. La salida de los datos sera con nuestro nombre, 
//las estadisticas (N cantidad de letras, N cantidad de vocales A)

class Texto{
    private:
    char letras[30];
    char vocales[5];
    char mayusculas[5];
    char palabras[30];
    int contador=0;

    public:
    void crearArchivo(void);
    void leerArchivo(void);
    void estadisticaArchivo(void);
};

void Texto::crearArchivo(void){
  ofstream crearA("miNombre.txt");
  crearA<<"Leidy Paola Castro"<<endl;
};

void Texto::leerArchivo(void){
char letra;

  ifstream abrirA("miNombre.txt");
  abrirA>>palabras;
  //cout<<palabras<<endl;

 while(!abrirA.eof()){ 
    letra=abrirA.get();
    cout<<letra;
 }
  
};


void Texto::estadisticaArchivo(){

};

int main(){
    Texto texto;
    texto.crearArchivo();
    texto.leerArchivo();
};
