#ifndef __LISTASNODOS_H__
#define __LISTASNODOS_H__


struct Nodo{
    int info;
    Nodo *siguiente;
};

class Lista{
public:
    Nodo *head, *tail;
public:
    Lista();
	void adicionar(int valor);
	void insertar(int pos, int valor);
	void mostrarse();
	void eliminar(int pos);
	int getElemento (int x);
	void setElemento (int valor, int x);
	int longitud ();
	bool vacia ();
	int buscarElemento (int valor);
	bool existeElemento (int valor);
};

#endif
