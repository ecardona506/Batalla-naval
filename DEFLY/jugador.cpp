#include "jugador.h"

 Jugador::Jugador (string nombre){
	this->tblPrincipal= Tablero PR;
	this->tblSecundario = Tablero SC;
	this->nombre=nombre;
	this->*lstNaves=new ListaNaves;
}
