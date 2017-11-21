#include "barco.h"
#include "coordenada.h"
#include "jugador.h"
#include "lista.h"
#include "listanaves.h"
#include "mitablero.h"
#include "nave.h"
#include "portaaviones.h"
#include "submarino.h"
#include "tablero.h"
#include <iostream>
using namespace std;


int main(){
	
	//----------------------------//
	//-------|JUGADOR_1|----------//
	Jugador j1("Esteban");
	j1.crearNaves (1,0,0);
	j1.ubicarNaves();
	j1.mostrarTableros();
	
	//----------------------------//
	//-------|JUGADOR_2|----------//
	Jugador j2("Anonimous");
	j2.crearNaves (1,0,0);
	j2.ubicarNaves();
	j2.mostrarTableros();
	
	
//--------------------------------------------------------------------------------//
//-------------------------------|JUEGO|------------------------------------------//
	do{
		system("cls");
		j2.mostrarTableros();
		j1.mostrarTableros();
		Coordenada c(0,0);
		bool hit;
		
//---------------------------------------------------------------------------------//			
//------------------------------|MUEVE JUGADOR 1|-------------------------------//
		do{
			j1.mostrarTableros();
			c = j1.leerMovimiento ();
			hit = j1.esHit(c);
			if (hit==true){
				j2.marcarHitTableroPrincipal(c);
				j1.marcarHitTableroSecundario(c);
			}
				
			if(j2.estaDerrotado()==true){
				system("cls");
				cout<<"Jugador 1 Gana"<<endl;
				return 0;
			}
		}while(j1.esHit(c)==true);
		
//------------------------------------------------------------------------------//
//------------------------------|MUEVE JUGADOR 1|-------------------------------//		
		do{
			j2.mostrarTableros();
			c = j2.leerMovimiento ();
			hit = j2.esHit(c);
			if (hit==true){
				j1.marcarHitTableroPrincipal(c);
				j2.marcarHitTableroSecundario(c);
			}
				
			if(j1.estaDerrotado()==true){
				system("cls");
				cout<<"Jugador 2 Gana"<<endl;
				return 0;
			}
		}while(j2.esHit(c)==true);
//------------------------------------------------------------------------------//

		
		
		
	}while(j1.estaDerrotado()!=true || j2.estaDerrotado()!=true);
	return 0;
	
}
