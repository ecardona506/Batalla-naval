/**********************************************
*****************    NAVE     *****************
***********************************************/

#include "nave.h"

//Nave::Nave();
// Operador << para imprimir con cout un objeto tipo nave
//friend ostream& operator<<(ostream& os, const Nave& nv);

// Asigna nuevas coordenadas a la nave
void setCoordenadas (ListaCoordenadas lc);

// Retorna la lista de coordenadas de la nave
ListaCoordenadas getCoordenadas ();

// Genera una lista de coordenadas de acuerdo a la posicion "pos" de entrada
// Estas coordenadas tienen en cuenta la direccion y el tamanho de la nave
ListaCoordenadas generarCoordenadas (Coordenada pos);

// Retorna el simbolo asociado al tipo de nave ('b', 's', o 'p')
char getSimbolo (); 
