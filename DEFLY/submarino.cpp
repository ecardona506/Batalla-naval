#include "submarino.h"
Submarino::Submarino(){
	this->longitud=3;
	this->tipo="submarino";
	this->simbolo = 's';
	Coordenada c(-1,-1);
	for(int i=0;i<3;i++){
		ls.adicionarCoordenada(c);
	}
	ls.mostrarCordenadas();	
}
