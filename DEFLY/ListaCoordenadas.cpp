/******************************************************
**********************                *****************
**********************ListaCoordenadas*****************
**********************                *****************
******************************************************/
#include "lista.h"
#include "coordenada.h"
#include "listacoordenadas.h"


ListaCoordenadas::ListaCoordenadas(){
	int *i = new int;
}

void ListaCoordenadas::adicionarCoordenada(Coordenada c){
	LC.adicionar(c);
}

int ListaCoordenadas::longitud(){
	return LC.longitud();
}

void ListaCoordenadas::mostrarCordenadas(){
	Coordenada c;
	for(int i=0 ; i< LC.longitud();i++){
		c=LC.getElemento(i);
		cout<<'<'<<c.x<<','<<c.y<<'>';
	}
	cout<<endl;
}
