
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
	}
}

int Lista::getElemento (int x){
	Nodo *tmp=head;
	for (int i = 0; i < x; i++)
	{
		tmp=tmp->siguiente;
	}
	return tmp->info;
}


void Lista::setElemento (int valor, int x){
	Nodo *tmp=head;
	for (int i = 0; i < x; i++)
	{
		tmp=tmp->siguiente;
	}
	tmp->info=valor;
}

int Lista::buscarElemento (int valor){
	Nodo* tmp =head;
	for(int i=0; i< Lista::longitud();i++){
		if(tmp->info==valor){
			return i;
		}
		else{
			tmp=tmp->siguiente;
		}
	}
	return -1;
}

bool Lista::existeElemento (int valor){
	Nodo* tmp =head;
	for(int i=0; i< Lista::longitud();i++){
		if(tmp->info==valor){
			return true;
		}
		else{
			tmp=tmp->siguiente;
		}
	}
	return false;
}

void Lista::insertar(int pos, int valor)
{
	Nodo * pre =new Nodo ;
	Nodo * cur =new Nodo ;
	Nodo * temp = new Nodo ;
	cur = head ;
	for( int i =0; i < pos ;i ++) {
		pre = cur ;
		cur = cur -> siguiente ;
	}
	temp -> info = valor ;
	pre -> siguiente = temp ;
	temp -> siguiente = cur ;
}

	/*
	Nodo *tmp = head;
	Nodo *tmp2 = new Nodo;
	if(!Lista::vacia()){
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

