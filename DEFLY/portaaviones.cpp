#include "portaaviones.h"
#include "listacoordenadas.h"
// Sobreescribe el constructor de nave asignando el tipo "portaaviones",
// la longitud=4, el simbolo='p' y adicionando a la lista  de coordenadas 
// 4 coordenadas negativas (-1,-1)
Portaaviones::Portaaviones(){
	this->longitud=4;
	this->tipo="portaaviones";
	this->simbolo = 'p';
	Coordenada c(-1,-1);
	for(int i=0;i<4;i++){
		lp.adicionarCoordenada(c);
	}
	
	lp.mostrarCordenadas();	
}
