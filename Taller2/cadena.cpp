
#include <iostream>

using std::cout; using std::cin;
using std::endl; using std::string;

class Cadena{
    private:
        int tam, colums, temp, *ptrSize, *arrayDec;
        string res, *arrayDin;
        char *text;
    public:
        Cadena();
        ~Cadena();

        void leer(void);
        void procesar(void);
        void mostrar(void);
};

Cadena::Cadena(void){
    cout<<"Iniciando programa"<<endl;
	
    cout<<"Ingresa el tamano para la cadena de texto"<<endl;
    cin>>tam;
    tam = tam + 1;
    ptrSize = &tam;
    text = new char[tam];
    arrayDec = new int[tam];
    arrayDin = new string[tam];
};

Cadena::~Cadena(){
    cout<<"Fin del programa"<<endl;
};

void Cadena::leer(){
    cin.ignore();
    cout << "Ingrese el texto del que desea conocer el decimal y el binario de cada caracter" << endl;
    cin.getline(text, *ptrSize);
};

void Cadena::procesar(){
    for(int i=0; i<tam; i++){
        arrayDec[i] = text[i];
        temp = arrayDec[i];
        res = "";

        if(temp > 0){
            while(temp > 0){
                if(temp % 2 == 0){
                    res = "0" + res; 
                }else{
                    res = "1" + res;
                }
                temp /= 2;
            }
        }else if(temp == 0){
            res = "0" + res;
        }else{
            continue;
        }
        arrayDin[i] = res;
    }
};

void Cadena::mostrar(){
    cout<<"Salida: "<<endl;
    for (int i = 0; i < tam-1; i++){
        cout<<text[i]<<": "<<arrayDec[i]<<": "<<arrayDin[i]<<endl;
    }
};

int main(){
    Cadena temp;

    temp.leer();
    temp.procesar();
    temp.mostrar();

    return 0;
}