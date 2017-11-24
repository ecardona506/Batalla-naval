#ifndef __LISTASNODOS_H__
#define __LISTASNODOS_H__

template<typename T>
struct Nodo{
    T info;
    Nodo *siguiente;
};

template<class T>
class Lista{
public:
	Nodo<T> *head;
	Nodo<T> *tail;
    //Nodo *head, *tail;
public:
    Lista();
	void adicionar(T valor);
	void insertar(int pos, T valor);
	void mostrarse();
	void eliminar(int pos);
	T getElemento (int x);
	void setElemento (T valor, int x);
	int longitud ();
	bool vacia ();
	int buscarElemento (T valor);
	bool existeElemento (T valor);
};

#endif
