#include "miniwin.h"

using namespace miniwin;

int main(){
  
  vredimensiona(500, 500);
  
  color(ROJO);
  circulo_lleno(100, 100, 80);
  
  color(BLANCO);
  rectangulo_lleno(70, 250, 270, 350);
  
  color(VERDE);
  rectangulo_lleno(250, 70, 410, 230);
    
  refresca();
  
  return 0;
}
