#include <iostream>

using std::cout; using std::endl;
using std::cin;

class cuboPerfecto{
    int i, num, auxNum, count, res, *numeros;
    public:
        cuboPerfecto();
        ~cuboPerfecto();

        void leer(void);
        void procesar(void);
        void salida(void);
};

cuboPerfecto::cuboPerfecto(){
    cout<<"Iniciando programa"<<endl;
    num=auxNum=count=i=res=0;
}

cuboPerfecto::~cuboPerfecto(){
    cout<<"Fin del programa"<<endl;
}

void cuboPerfecto::leer(){
    cout<<"Ingresa un numero"<<endl;
    cin>>num;
    auxNum=num;
}

void cuboPerfecto::procesar(){
    while(auxNum > 0){
        auxNum /= 10;
        count++;
    }

    auxNum=num;
    numeros = new int[count];

    while(auxNum > 0){
        numeros[i] = auxNum % 10;
        auxNum /= 10;
        i++;
    }

    for(int j=0; j<count; j++){
        res += ((numeros[j] * numeros[j]) * numeros[j]);
        cout<<"res "<<res<<endl;
    }
}

void cuboPerfecto::salida(){
    if(res == num){
        cout<<num<<" es un cubo perfecto "<<res<<endl;
    }else{
        cout<<num<<" no es un cubo perfecto "<<res<<endl;
    }
}

int main(){
    cuboPerfecto aux;

    aux.leer();
    aux.procesar();
    aux.salida();

    return 0;
}