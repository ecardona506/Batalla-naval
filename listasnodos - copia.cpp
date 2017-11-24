
#include <cstddef>
#include<iostream>
#include "listasnodos.h"
using namespace std;

template<class T>
Lista<T> :: Lista(){
	head=NULL;
	tail=NULL;
}

template<class T>
Nodo* crearNodo(T valor){
	Nodo *n = new Nodo;
	n->info= valor;
	n->siguiente=NULL;
	return n;
}


template<class T>
void Lista<T>::adicionar (T valor){
	Nodo *n = crearNodo(valor);
	if(Lista<T>::vacia()==true){
		head=n;
		tail=n;
	}
	
	else{
		tail->siguiente = n;
		tail=n;
		n->siguiente=NULL;
	}
}
	
template<class T>
bool Lista<T>::vacia (){
	return(head==NULL && tail == NULL);
}

template<class T>
int Lista<T>::longitud (){
	if(Lista<T>::vacia()){
		return 0;
	}
	else{
		Nodo *tmp= head;
		int k=1;
		while(tmp != tail){
			tmp=tmp->siguiente;
			k++;
		}
	return k;
	}
}
template<class T>

void Lista<T>::mostrarse(){
	Nodo *tmp = head;
	while(tmp!=NULL){
		cout<<'<'<<tmp->info<<'>';
		tmp= tmp->siguiente;
	}
	cout<<endl;
}

template<class T>
void Lista<T>::eliminar(int pos){
	Nodo *tmp = head;
	Nodo *tmp2 = head;
	Nodo *previous = new Nodo;
	Nodo *sucessor = new Nodo;
	if(!Lista<T>::vacia()){
		int counter = 0;
		if(pos==0){
			tmp=head->siguiente;
			head->siguiente=NULL;
			head=tmp;
		//	delete(tmp);
		}
		
		else if(pos==Lista<T>::longitud()-1){
			tail=NULL;
			while(counter<pos-1){
				tmp=tmp->siguiente;
				counter++;
			}
			tmp->siguiente=NULL;
			counter=0;
			tmp=head;
			while(counter<pos-2){
				tmp=tmp->siguiente;
				counter++;	
			}
			tail=tmp;
		}
		
		else{
			while(counter<pos-1){
				tmp=tmp->siguiente;
				tmp2=tmp2->siguiente;
				counter++;
			}
			tmp2=tmp2->siguiente;;
			tmp->siguiente = tmp->siguiente->siguiente;
			tmp2->siguiente = NULL;
		}
	}
}

template<class T>
T Lista<T>::getElemento (int x){
	Nodo *tmp=head;
	for (int i = 0; i < x; i++)
	{
		tmp=tmp->siguiente;
	}
	return tmp->info;
}

template<class T>
void Lista<T>::setElemento (int valor, int x){
	Nodo *tmp=head;
	for (int i = 0; i < x; i++)
	{
		tmp=tmp->siguiente;
	}
	tmp->info=valor;
}
template<class T>
int Lista<T>::buscarElemento (int valor){
	Nodo* tmp =head;
	for(int i=0; i< Lista<T>::longitud();i++){
		if(tmp->info==valor){
			return i;
		}
		else{
			tmp=tmp->siguiente;
		}
	}
	return -1;
}
template<class T>
bool Lista<T>::existeElemento (int valor){
	Nodo* tmp =head;
	for(int i=0; i< Lista<T>::longitud();i++){
		if(tmp->info==valor){
			return true;
		}
		else{
			tmp=tmp->siguiente;
		}
	}
	return false;
}

template<class T>
void Lista<T>::insertar(int pos, T valor)
{
	Nodo *tmp = head;
	Nodo *tmp2 = new Nodo;
	if(!Lista<T>::vacia()){
		int counter = 0;
		if(pos==0){
			tmp2->info=valor;
			tmp2->siguiente=tmp;
			head=tmp2;
		}
		else{
		Nodo * pre =new Nodo ;
		Nodo * cur =new Nodo ;
		Nodo * tmp = new Nodo ;
		cur = head ;
		for( int i =0; i < pos ;i ++) {
			pre = cur ;
			cur = cur -> siguiente ;
		}
		temp -> info = valor ;
		pre -> siguiente = temp ;
		temp -> siguiente = cur ;
		}
	}
}

	/*
	Nodo *tmp = head;
	Nodo *tmp2 = new Nodo;
	if(!Lista<T>::vacia()){
		int counter = 0;
		if(pos==0){
			tmp2->info=valor;
			tmp2->siguiente=tmp;
			head=tmp2;
		}
		
		else if(pos==Lista::longitud()-1){
			Lista::adicionar(valor);
		}

		else{
			while(counter<pos){
				tmp=tmp->siguiente;
				tmp2=tmp2->siguiente;
				counter++;
			}
			tmp2->info=valor;
			tmp2->siguiente=tmp->siguiente;
			tmp->siguiente=tmp2;
		}
	}
}
*/

