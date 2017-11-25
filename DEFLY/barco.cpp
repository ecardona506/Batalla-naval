/*************************************
***********     Barco   **************
***********				**************
**************************************/

#include "barco.h"
#include "ListaCoordenadas.h"
#include "lista.h"


Barco::Barco(){
	this->tipo="barco";
	this->direccion = 0;
	this->longitud = 2;
	this->simbolo='b';
	Coordenada c(-1,-1);
	for(int i=0;i<3;i++){
		lb.adicionarCoordenada(c);
	}
	lb.mostrarCordenadas();	
}

