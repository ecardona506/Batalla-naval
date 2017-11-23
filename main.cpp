#include <iostream>
#include "listasnodos.h"
using namespace std;


int main() {
	Lista buffer;
	cout<<buffer.longitud()<<endl;
	buffer.adicionar(1);
	buffer.adicionar(2);
	buffer.adicionar(3);
	buffer.adicionar(4);
	buffer.adicionar(5);
	buffer.adicionar(6);
	buffer.adicionar(7);
	buffer.eliminar(1);
	cout<<buffer.longitud()<<endl;
	buffer.mostrarse();
	return 0;
//	buffer.mostrarse();
}

