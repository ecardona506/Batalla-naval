#include <iostream>
#include "listasnodos.h"
using namespace std;


int main() {
	Lista buffer;
	cout<< "La longitud es: "<<buffer.longitud()<<endl;
	buffer.adicionar(1);
	buffer.adicionar(2);
	buffer.adicionar(3);
	buffer.adicionar(4);
	buffer.adicionar(5);
	buffer.adicionar(6);
	buffer.adicionar(7);
	buffer.setElemento(9,1);
	cout<<"El numero 7 esta en la posicion: " << buffer.buscarElemento(7) << endl;
	cout<< "La longitud es: "<<buffer.longitud()<<endl;
	buffer.mostrarse();
	cout << "El cuarto elemento es: " << buffer.getElemento(4) << endl;
	cout<<"El numero 7 existe? " << buffer.existeElemento(7) << endl;
	buffer.insertar(4,99);
	buffer.mostrarse();
	return 0;
//	buffer.mostrarse();
}

