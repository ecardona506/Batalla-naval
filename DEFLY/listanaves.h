#ifndef __LISTANAVES_H__
#define __LISTANAVES_H__
#include "lista.h"
#include "nave.h"

class ListaNaves{
	public:
		Lista <Nave> LN;
	public:
		void adicionarNave(Nave n);
		void mostrarListaNaves();
		ListaNaves();
};
#endif
