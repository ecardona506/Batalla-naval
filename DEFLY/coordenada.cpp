#include "coordenada.h"

Coordenada::Coordenada(int x, int y){
	this-> x = x;
	this-> y = y;
}

Coordenada::Coordenada(){
	int* x= new int;
	int* y= new int;
}
/*
friend ostream& operator<<(ostream& os, const Coordenada& c);
bool operator==(const Coordenada& c);
*/
