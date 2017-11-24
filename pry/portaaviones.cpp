#include <iostream>
#include <stdio.h>
#include "portaaviones.h"
#include "nave.h"
#include "string.h"

Portaaviones::Portaaviones()
{
	Nave("portaaviones");
	this->tipo = "portaaviones";
	this->longitud = 4;
	this->simbolo = "p";
}