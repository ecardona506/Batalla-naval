
#include <cstddef>
#include<iostream>
#include "listasnodos.h"
using namespace std;

Lista :: Lista(){
	head=NULL;
	tail=NULL;
}


Nodo* crearNodo(int valor){
	Nodo *n = new Nodo;
	n->info= valor;
	n->siguiente=NULL;
	return n;
}


void Lista::adicionar (int valor){
	Nodo *n = crearNodo(valor);
	if(Lista::vacia()==true){
		head=n;
		tail=n;
	}
	
	else{
		tail->siguiente = n;
		tail=n;
		n->siguiente=NULL;
	}
}
	

bool Lista::vacia (){
	return(head==NULL && tail == NULL);
}


int Lista::longitud (){
	if(Lista::vacia()){
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

void Lista::mostrarse(){
	Nodo *tmp = head;
	while(tmp!=NULL){
		cout<<'<'<<tmp->info<<'>';
		tmp= tmp->siguiente;
	}
	cout<<endl;
}


void Lista::eliminar(int pos){
	Nodo *tmp = head;
	Nodo *tmp2 = head;
	Nodo *previous = new Nodo;
	Nodo *sucessor = new Nodo;
	if(!Lista::vacia()){
		int counter = 0;
		if(pos==0){
			tmp=head->siguiente;
			head->siguiente=NULL;
			head=tmp;
		//	delete(tmp);
		}
		
		else if(pos==Lista::longitud()-1){
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
		/*
		else{
			Nodo* ant = new Nodo;
			while(counter<pos){
				if (counter==pos-1){
					ant = tmp;
				}
				tmp=tmp->siguiente;
				counter++;
			}
			ant=tmp;
			tmp=NULL;
		}
		*/
	}
}



/*
void Lista::insertar(int pos, int valor);
int getElemento (int x);
void setElemento (int valor, int x);
int longitud ();
bool vacia ();
int buscarElemento (int valor);
bool existeElemento (int valor);
*/
