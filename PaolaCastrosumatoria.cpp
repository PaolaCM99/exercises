#include <iostream>
//Ejercicio 2.: Haga un programa en C que lea dos n�meros enteros (m,n), hallar la sumatoria desde 'm' hasta 'n', 
//halle la cantidad de n�meros pares y diga cu�les son, halle la cantidad de n�meros impares y diga cu�les son, que diga  el total de n�meros 
//desde 'm' hasta 'n'. (eje. m= 3 y n = 6. la sumatoria desde 3 hasta 6  es = 18, hay dos n�meros pares (4 y 6), 
//hay dos n�meros impares (3 y 5) y hay en total 4 n�meros entre 3 y 6.
//
//NOTA1: si el usuario entra el n�mero mayor primero, el programa debe organizarlos de forma ascendente.

using namespace std;

int enteroUno, enteroDos, menor, mayor;
int suma = 0;
int pares[100];
int impares[100];
void identificacionMM(int, int), sumatoria();

int main(){
	
	cout<< "Escriba dos numeros enteros segun las indicaciones \n" <<endl;
	cout<<"Digite el primero numero, preferiblemete que sea menor al siguiente \n";
	cin>> enteroUno;
	
	cout <<"Digite el segundo numero, preferiblemete que sea mayor al anterior \n";
	cin>> enteroDos;
	
	identificacionMM(enteroUno, enteroDos);
	
	return 0;
}

void identificacionMM(int enteroUno, int enteroDos){
	if(enteroUno<enteroDos){
		menor=enteroUno;
		mayor=enteroDos;
	}
	if(enteroUno>enteroDos){
		mayor=enteroUno;
		menor=enteroDos;
	}
	if(enteroUno==enteroDos){
		mayor=enteroUno;
		menor=enteroDos;
		cout << "Son iguales\n"<<endl;
	}
	
//	cout << "Numero mayor " << mayor << "\n"<< "Numero menor " <<menor <<endl;
	
  sumatoria();	
}
void sumatoria(){
	
	int kp = 0;
	int ki = 0;
	for(int i=menor; i<=mayor; i++){
		suma = suma + i;
		
		if(i%2==0){
			pares[kp]=i;
			kp++;		
		}else{
            impares[ki]=i;
            ki++;
		}
	}
	
	cout <<"\n La sumatoria es de: " <<suma <<endl;
	cout <<"\n -----------------------------------\n "  <<endl;
	cout << "\n Hay " << kp << " numeros pares y son los siguientes:" <<endl;
	for(int j=0; j<=kp-1; j++){
		cout << "\t"<< pares[j] <<endl;	
	}
	cout <<"\n Hay " << ki << " numeros impares y son los siguientes: " <<endl;
	for(int j=0; j<=ki-1; j++){
		cout << "\t"<<impares[j] <<endl;	
	}
	
	cout <<"\n -----------------------------------\n "  <<endl;
	
	cout <<"\n En total hay " << ki+kp << " n�meros entre " <<menor <<" y " <<mayor <<endl;
	return;
}
