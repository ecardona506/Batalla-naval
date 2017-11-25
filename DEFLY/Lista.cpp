#include <cstddef>
#include<iostream>
#include "Lista.h"
using namespace std;

template<class T>
Lista<T> :: Lista(){
	head=NULL;
	tail=NULL;
}

template<class T>
Nodo<T>* crearNodo(T valor){
	Nodo <T>*n = new Nodo <T>;
	n->info= valor;
	n->siguiente=NULL;
	return n;
}


template<class T>
void Lista<T>::adicionar (T valor){
	Nodo <T>*n = crearNodo(valor);
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
		Nodo <T>*tmp= head;
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
	Nodo <T>*tmp = head;
	while(tmp!=NULL){
		cout<<'<'<<tmp->info<<'>';
		tmp= tmp->siguiente;
	}
	cout<<endl;
}

template<class T>
void Lista<T>::eliminar(int pos){
	Nodo <T>*tmp = head;
	Nodo <T>*tmp2 = head;
	Nodo <T>*previous = new Nodo<T>;
	Nodo <T>*sucessor = new Nodo<T>;
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
	Nodo <T>*tmp=head;
	for (int i = 0; i < x; i++)
	{
		tmp=tmp->siguiente;
	}
	return tmp->info;
}

template<class T>
void Lista<T>::setElemento (T valor, int x){
	Nodo <T>*tmp=head;
	for (int i = 0; i < x; i++)
	{
		tmp=tmp->siguiente;
	}
	tmp->info=valor;
}
template<class T>
int Lista<T>::buscarElemento (T valor){
	Nodo<T>* tmp =head;
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
bool Lista<T>::existeElemento (T valor){
	Nodo<T>* tmp =head;
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
	Nodo <T>*tmp = head;
	Nodo <T>*tmp2 = new Nodo<T>;
	if(!Lista<T>::vacia()){
		int counter = 0;
		if(pos==0){
			tmp2->info=valor;
			tmp2->siguiente=tmp;
			head=tmp2;
		}
		else{
		Nodo <T>* pre =new Nodo<T> ;
		Nodo <T>* cur =new Nodo<T> ;
		Nodo <T>* tmp = new Nodo<T> ;
		cur = head ;
		for( int i =0; i < pos ;i ++) {
			pre = cur ;
			cur = cur -> siguiente ;
		}
		tmp -> info = valor ;
		pre -> siguiente = tmp ;
		tmp -> siguiente = cur ;
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

