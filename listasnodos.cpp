
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
}


void Lista::mostrarse(){
	Nodo *tmp = head;
	while(tmp!=NULL){
		cout<<tmp->info<<" ";
		tmp= tmp->siguiente;
	}
	cout<<endl;
}


void Lista::adicionar (int valor){
	Nodo *n = crearNodo(valor);
	if(Lista::vacia()==true){
		head=n;
		tail=n;
	}
	
	else{
		tail->siguiente=n;
		tail = n;
	}
}
	

bool Lista::vacia (){
	return(head==NULL && tail == NULL);
}


int Lista::longitud (){
	Nodo *tmp= head;
	int k=1;
	while(tmp != tail){
		k++;
	}
	return k;
}

void Lista::insertar(int pos, int valor){
	Nodo *n = crearNodo(valor);
	Nodo *tmp;
	
	if(pos==0){
		n->siguiente=head;
		head = n;
	}
	
	else{
		Nodo *prox;
		int i = 0;
		while(i==pos-1){
			cout<<"bucle";
			tmp= tmp->siguiente;
			i++;
		}
		
		int k=0;
		while(k==pos){
			prox= prox->siguiente;
			k++;
		}
		
		tmp->siguiente=n;
		n->siguiente= prox;
	}
	/*
	if(pos>0){
		cout<<"last";
		int k=1;
		Nodo *tmp = head;
		while(k < pos-1){
			k+=1;
			tmp=tmp->siguiente;
			cout<<"iteracion";
		}
		n->siguiente = tmp->siguiente;
		tmp->siguiente=n;
	}
	
	if(pos==Lista::longitud()-1){
		tail->siguiente=n;
		tail=n;
	}
	*/
}
	
/*
	else if(pos == Lista::longitud()-1){
		cout<<"-_-";
		Lista::adicionar(valor);
	}
	
	else{
		cout<<"last";
		int k=1;
		Nodo *tmp = head;
		while(k < pos-1){
			k++;
			tmp=tmp->siguiente;
		}
		
		n->siguiente = tmp->siguiente;
		tmp->siguiente=n;
	}
}




void Lista::insertar(int pos, int valor){

	
	if(pos>0){
		
		//posicion 1
		if (pos==1){
			head->siguiente=&Nuevo;
		}
		
		//posicion final
		if(pos+1==Lista::longitud()){
			tail->siguiente=&Nuevo;
			tail = &Nuevo;
		}
		//medio
		else{
			for(int i=1; i<pos;i++){
				Temp=Temp->siguiente;
				if(pos == pos-1){
					before = Temp;
				}
			}
					
			before->siguiente = &Nuevo;
			Nuevo.siguiente=Temp;
		}
	}
		

}




void Lista::adicionar (int valor){
	Nodo *n = crearNodo(valor);
	if(Lista::vacia()==true){
		head=n;
		tail=n;
	}	
	if(tail->siguiente==NULL){
		tail->siguiente= &Nuevo;
		tail=&Nuevo;
		tail->siguiente=NULL;
		cout<<"*W*";
	}
}


bool Lista::vacia (){
	return(head==NULL && tail == NULL);
}

int Lista::longitud (){
	Nodo *Temp=tail;
	int count = 1;
	if(Temp->siguiente == NULL){
		cout<<"retorna 0";
		return 0;
	}
	
	if(Temp->siguiente != NULL){
		
		while(Temp->siguiente != tail){
			Temp=Temp->siguiente;
			count +=1;
			cout<<Temp->siguiente;
		}	
		
		if(Temp != tail){
			return count;
		}
	}
	cout<<"fail";
	return -1;
}

void Lista::adicionar (int valor){
	Nodo *Temp = tail;
	Nodo Nuevo;
	Nuevo.info = valor;
		
	if(tail->siguiente==NULL){
		tail->siguiente= &Nuevo;
		tail=&Nuevo;
		tail->siguiente=NULL;
		cout<<"*W*";
	}
	
	else{
		tail->siguiente=&Nuevo;
		tail=&Nuevo;
		tail->siguiente=NULL;	
	}
	
	cout<<"adiciono";
}


void Lista::insertar(int pos, int valor){
	Nodo Nuevo;
	Nodo *Temp=head->siguiente;
	Nodo *before;
	Nuevo.info=valor;
	
	//vacia
	if(Lista::longitud()==0){
		head=&Nuevo;
		tail=&Nuevo;
		Nuevo.siguiente=NULL;
	}
	
	//comienzo
	if(pos==0){
		Nuevo.siguiente=head;
		head=&Nuevo;
	}
		
	//medio
	if(pos>0){
		
		//posicion 1
		if (pos==1){
			head->siguiente=&Nuevo;
		}
		
		//posicion final
		if(pos+1==Lista::longitud()){
			tail->siguiente=&Nuevo;
			tail = &Nuevo;
		}
		//medio
		else{
			for(int i=1; i<pos;i++){
				Temp=Temp->siguiente;
				if(pos == pos-1){
					before = Temp;
				}
			}
					
			before->siguiente = &Nuevo;
			Nuevo.siguiente=Temp;
		}
	}
		

}



void Lista::mostrarse(){
	cout<<"bucleeeeee";
	Nodo *Temp = head;
	int count=0;
	while(count<Lista::longitud()){
		cout<<"bucle";
		cout<<Temp->info;
		Temp= Temp->siguiente;
		count+=1;
	}
	cout<<endl;
}

void Lista::eliminar(int pos);
int getElemento (int x);
void setElemento (int valor, int x);
int longitud ();
bool vacia ();
int buscarElemento (int valor);
bool existeElemento (int valor);
*/
