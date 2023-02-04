#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
//jercicio 0.: Haga un programa en C que lea dos números y halle los divisores de cada uno, que diga cuál tiene más divisores
//(eje. 8 y 9; los divisores de 8: 1,2,4,y 8; 8 tiene 4 divisores.  Los divisores de 9: 1,3 y 9; 9 tiene 3 divisores. Ocho tiene más divisores que 9).  
//Se debe imprimir los datos entrados y los resultados obtenidos.

using namespace std;

int numberOne, numberTwo, counterOne=0, counterTwo=0;
void respuestaDivisores(), hallandoDivisores(int, int);


int main() {
	cout<<"Ingrese los numeros solicitados\n"<<endl;
	cout<<"Ingresa el primer numero"<<endl;
	cin >> numberOne;
	cout<<"Ingresa el segundo numero"<<endl;
	cin >> numberTwo;

    
	hallandoDivisores(numberOne, numberTwo)	;			
	return 0;

}
void hallandoDivisores(int numberOne, int numberTwo){
	
		
//Hallando los divisores del primer numero y segundo numero
	for (int i = 0; i < numberOne; i++){
				
		if(numberOne%(i+1)==0){
//		cout <<"Divisores del primer numero"<< i+1 <<endl;	
		counterOne= counterOne+1; //Contador de divisores
	
		}
	}				

	for (int i = 0; i < numberTwo; i++){
		
		if(numberTwo%(i+1)==0){
//   	cout <<"Divisores del segundo numero"<< i+1 <<endl;	
        counterTwo= counterTwo+1; //Contador de divisores
        }
    }
	respuestaDivisores();	
}
void respuestaDivisores(){
	
		if(counterOne<counterTwo){
						cout << numberTwo<<  " tiene " << counterTwo << " divisores" <<endl;
						cout << numberOne << " tiene " << counterOne << " divisores" <<endl;
						cout << "CONCLUSION: "<<numberTwo << " tiene mas divisores que " << numberOne<<endl;
					}
					if(counterOne>counterTwo){
					    cout << numberOne<<  " tiene " << counterOne << " divisores" <<endl;
						cout << numberTwo << " tiene " << counterTwo << " divisores" <<endl;
						cout << "CONCLUSION: "<<numberOne << " tiene mas divisores que " << numberTwo<<endl;
					}
					if(counterOne==counterTwo){
						cout <<"CONCLUSION: Los numeros ingresados tienen la misma cantidad de divisores" << counterOne <<endl;
					}
	}
