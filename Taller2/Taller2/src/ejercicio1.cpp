#include <iostream>

using std::cout; using std::cin;
using std::endl;

class Cadena{
    private:
        int size, *ptrSize;
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
    cout<<"Ingresa el tamanio deseado para la cadena de texto"<<endl;
    cin>>size;
    size = size + 1;
    ptrSize = &size;
    text = new char[size];
};

Cadena::~Cadena(){
    cout<<"Fin del programa"<<endl;
};

void Cadena::leer(){
    cin.ignore();
    cout<<"Ingresa un texto "<<endl;
    cin.getline(text, *ptrSize);
};

void Cadena::procesar(){
    for(int i=0;i<=size;i++){
		if(text[i]>=65 & text[i]<=90){
		    text[i]=text[i]+32;
	    }else if(text[i]>=97 & text[i]<=122){
            text[i]=text[i]-32;
	    }else{
            continue;
        }
	}
};

void Cadena::mostrar(){
    cout<<"Texto invertido: "<<endl;
    for(int i=0; i<=size; i++ ){
        cout<<text[i];
    }
    cout<<endl;
};

int main(){
    Cadena temp;

    temp.leer();
    temp.procesar();
    temp.mostrar();

    return 0;
}