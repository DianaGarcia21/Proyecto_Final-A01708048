/*
*ProyectoFinal
*Diana Patricia Garcia Fernandez
*A01708048
*04/12/2020
*/

#ifndef ALIMENTOS_H_
#define ALIMENTOS_H_
#include "PresupuestoTotal.h"

#include <iostream>
using namespace std;

//Clase alimentos que calcula el presupuesto total de alimentos con el porcentaja dado.
class Alimentos: public PresupuestoTotal{
	private:
		float porcentajeA;
		float pptoA;
	public:
		//Constructor default
		Alimentos(){};
		Alimentos(float,string,int,float,float,float);
		float get_pptoA();
		float get_porcentajeA();
		float calcula_pptoA();
		void mostrar_pptoA();
};
//Constructor
Alimentos::Alimentos(float pptoT,string n,int c,float p,float _porcentajeA,float _pptoA): PresupuestoTotal(pptoT,n,c,p){
	porcentajeA = _porcentajeA;
	pptoA = _pptoA;
}

float Alimentos::get_pptoA(){
	return pptoA;
}

float Alimentos::get_porcentajeA(){
	return porcentajeA;
}
/*
funcion calcula_porcentaje 
calcula el presupuesto de alimentos tomando el porcentaje y el presupuesto total 
usando variables que estan declaras en el main con 0 para que no afecte

@param
@return el presupuesto de alimentos 
*/
float Alimentos::calcula_pptoA(){
	pptoA=(get_pptoTotal()*(porcentajeA/100));
	return pptoA;
}

/*
funcion mostrar_pptoA 
llama a la funcion de mostrar ppto_Total que muestra el presupuesto total
muestra el presupuesto de alimentos usando la funcion de calcula_pptoA
usando variables que estan declaras en el main con 0 para que no afecte

@param
@return
*/

void Alimentos::mostrar_pptoA(){
	mostrar_pptoTotal();
	cout<<"El presupuesto que destinaste a Alimentos fue de "<<calcula_pptoA()<<endl;
}

#endif