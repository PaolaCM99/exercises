#include <iostream>
using namespace std;

class Datos{

 int n, i, j, aux, *copia;
 char *num;
 
 public:
 	Datos();
 	~Datos();
 	
 	void entrarDatos(void);
 	void procesarDatos(void);
 	void mostrarDatos(void);
};

Datos::Datos(){
	cout << "Construyendo"<<endl;
	n=i=aux=0;
	cout << "Tamaño"<<endl;
	cin>>n;
	
	num= new char[n];
	if (num==NULL){
		cout << "Error 1"<<endl;
	}
	
	copia= new int[n];
	if(copia==NULL){
		cout << "Error 2"<<endl;
	}
}

Datos::~Datos(){
	cout << "Liberando..."<<endl;
	
	delete num;
	delete copia;
}


void Datos::entrarDatos(void){
	for(int i=0; i<n;i++){
		cout << "De dato " << i <<endl;
		cin>>num[i];
		copia[i]=num[i];
	}
};
void Datos::procesarDatos(void){
	for(int i=0; i<n;i++){
		for(int j=0; j<n;j++){
			
			if (num[i]>num[j]){
			aux=num[i];
			num[i]=num[j];
			num[j]=aux;
			}
		}	
		
	}
};

void Datos::mostrarDatos(void){
	cout << "DATOS ORIGINALES" <<endl;
	
	for(int i=0; i<n;i++){
		cout << copia[i] << " "<< endl;
		
	}
	cout << "DATOS PROCESADOS" <<endl;
	
	for(int i=0; i<n;i++){
		cout << num[i] << " "<< endl;
		
		}
	};
	
	int main(){
	Datos D;
	D.entrarDatos();
	D.procesarDatos();
	D.mostrarDatos();
	return 0;
	}











