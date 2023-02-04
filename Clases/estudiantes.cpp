#include<iostream>
#include<stdio.h>


using namespace std;

class Estudiante{

private: 
char nombre[30];
double codigo;
int estatura;
int edad;
int peso;

public:
void entrada(void);
void proceso(void);
void salida(void);



};

void Estudiante::entrada(void){
cout << "Digite su nombre" << endl;
cin.getline(nombre,30);
cout << "Digite su codigo" << endl;
cin>> codigo;
cout << "Digite su edad" << endl;
cin>> edad;
cout << "Digite su estatura en cm" << endl;
cin>> estatura;
cout << "Digite su peso en kilogramos" << endl;
cin>> peso;

}
void Estudiante::proceso(void){
	
	float estaturaMetros= 100/estatura;
    float imc= peso/(estaturaMetros*estaturaMetros)
	
	if(imc<18.2){
		cout<<"Esta flaco, debes de subir "<< "kilos"<<endl;
		}
		
	else if(){
		cout<<"Esta en el peso adecuado "<<endl;
		}
		
	else{
		cout<<"Tiene sobre peso, debe bajar  "<< "kilos"<<endl;
		}

}

void Estudiante::salida(void){
cout<<"Nombre: "<<nombre<<endl;
cout<<"codigo: "<<codigo<<endl;
}

int main(){

Estudiante pilo;
pilo.entrada();
pilo.salida();

return 0;
};
