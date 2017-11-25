#ifndef __LISTACOORDENADAS_H__
#define __LISTACOORDENADAS_H__
#include "Lista.h"
#include "Lista.cpp"

#include "coordenada.h"
/*
class ListaCoordenadas<Coordenadas>{
	public:
		ListaCoordenadas();
		void adicionar(Coordenada c);
};
*/


class ListaCoordenadas{
	public:
		Lista <Coordenada> LC;
	public:
		void adicionarCoordenada(Coordenada c);
		void mostrarCordenadas();
		int longitud();
		ListaCoordenadas();
};


#endif
