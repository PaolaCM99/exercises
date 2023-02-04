#include <iostream>
using namespace std;

class Dos{
  public:
    void  leer(int*, int*, int*);
    void proceso(int*, int*, int*, float*);
    void salida(int*, int*, int*, float*);
};

void Dos::leer(int *x, int *y, int *z) {
  cout<<"Leer tres enteros"<<endl;
  cin>>*x>>*y>>*z;
};

void Dos::proceso(int *a, int *b, int *c, float *p) {
  *p = (*a + *b + *c)/3;
}

void Dos::salida(int* uno, int* dos, int* tres, float* pr) {
  cout<<"El promedio de "<<*uno<<" + "<<*dos<<" + "<<*tres<<" es "<<*pr<<endl; 
}

int main() {
  Dos D;
  int a, b, c;
  float resp;
  
  D.leer(&a, &b, &c);
  D.proceso(&a, &b, &c, &resp);
  D.salida(&a, &b, &c, &resp);
  
  return 0;
}