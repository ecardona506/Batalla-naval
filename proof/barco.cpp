/*************************************
***********     Barco   **************
***********				**************
**************************************/

#include "barco.h"
#include "ListaCoordenadas.h"
#include <stdlib.h>
#include "lista.h"
#include "lista.cpp"

Barco::Barco(){
	this->tipo="barco";
	this->direccion = 0;
	this->longitud = 2;
	this->simbolo='b';
}

ListaCoordenadas Barco::generarCoordenadas (Coordenada pos)
{
	Lista <Coordenada> lc;
	Coordenada c(-1,-1);
	for (int i = 0; i < this->longitud; ++i)
	{
		lc.adicionar(c);
	}
}

