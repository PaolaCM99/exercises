#include <iostream>
//Ejercicio 1.: Haga un programa en C que lea un arreglo tipo char y diga cuantas vocales tiene (mayúsculas -  minúsculas) 
//y su posición dentro del arreglo. (eje. H o l a  M u n d o  A l e g r e: 2 vocales 'A' en posicon 3 y 11, etc; 
//contando desde cero).  Se debe imprimir la frase que entró y los resultados obtenidos.


using namespace std;
string phrase;
char vocales[]="aeiouAEIOU";
int cont_vocales[] = {0,0,0,0,0,0,0,0,0,0};
int posicionesa[100];
void mensaje(), frase(string);

int main(){
	
	cout<<"Ingrese una oracion para identificar las vocales"<< endl;
	
	getline(cin, phrase);
	frase(phrase);
	return 0;
}

void frase(string phrase){
	for(int i=0; i< phrase.size(); i++){
		
		for (int j=0; j< 10; j++){
				
			if(vocales[j]==phrase[i]){
				
				cout<< phrase[i] << "\t" <<endl;
				cont_vocales[j]++;		
			   //cout<< " posicion " << i <<endl;
				if(phrase[i] == 'a'){					
			        posicionesa[cont_vocales[0]-1] = i;
				}
				}
		}
	}
	mensaje();
}
void mensaje(){
	
	for(int k=0; k< 10; k++){
		if(cont_vocales[k]>0){
			cout<< "\n"<<cont_vocales[k]<< " vocales " << vocales[k] << " en posicion " << posicionesa[0] <<endl;
			
		}	
	}
}
