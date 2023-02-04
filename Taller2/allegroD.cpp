
#include <allegro.h>

int main() 
{	
    // inicializa el entorno del allegro
	allegro_init();
	install_keyboard();
	
	// se establece la resolucion grafica
	// modo ventana, 320x240
	set_color_depth(32);
	set_gfx_mode(GFX_AUTODETECT_WINDOWED, 320, 240, 0, 0);
	
	// se crea buffer para contener todo lo que se muestra en nuestra ventana
	// por eso se crea con la misma dimension que la resolucion
	BITMAP *buffer = create_bitmap(320, 240);
	// borra la imagen, rellenandola con un color
	clear_to_color(buffer, 0x999999);
	
    // muestra un texto, en una posicion x= 160, y=25, con unos colores
    // 0xFFFFFF = blanco   0x999999 = gris	
	textout_centre_ex(buffer, font, "Mi Primera Ventana", 160, 25, 0xFFFFFF, 0x999999);
	
    // Vuelca el contenido de nuestra imagen sobre la pantalla para mostrarlo	
	blit(buffer, screen, 0, 0, 0, 0, 320, 240);
	
	// para realizar una pausa, espera a que se pulse una tecla
	readkey();
	
	// antes de salir se debe liberar la memoria ocupada por la imagen
	// elimina la imagen creada
	destroy_bitmap(buffer);
	
	return 0;
}
END_OF_MAIN();

