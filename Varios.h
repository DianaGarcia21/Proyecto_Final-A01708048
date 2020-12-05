/*
*ProyectoFinal
*Diana Patricia Garcia Fernandez
*A01708048
*04/12/2020
*/

#ifndef VARIOS_H_
#define VARIOS_H_
#include "PresupuestoTotal.h"

#include <iostream>
using namespace std;
/*
Clase varios que calcula el presupuesto de varios tomando el presupuesto total 
*/
class Varios: public PresupuestoTotal{
	private:
		float porcentajeV;
		float pptoV;
	public:
		//Constructor default
		Varios(){};
		Varios(float,string,int,float,float,float);
		float get_pptoV();
		float get_porcentajeV();
		float calcula_porcentajeV();
		void mostrar_pptoV();
};
//Constructor
Varios::Varios(float pptoT,string n,int c,float p,float _porcentajeV,float _pptoV): PresupuestoTotal(pptoT,n,c,p){
	porcentajeV=_porcentajeV;
	pptoV=_pptoV;
}

//getters

float Varios:: get_pptoV(){
	return pptoV;	
}
float Varios::get_porcentajeV(){
	return porcentajeV;
}
/*
funcion calcula_porcentajeV 
calcula el presupuesto de varios tomando el porcentaje y el presupuesto total
usando variables que estan declaras en el main con 0 para que no afecte

@param
@return el presupuesto de varios
*/
float Varios::calcula_porcentajeV(){
	pptoV=(get_pptoTotal()*(porcentajeV/100));
	return pptoV;
}
/*
funcion mostrar_pptoV
muestra el presupuesto de Varios usando la variable de pptoV
@param
@return
*/
void Varios::mostrar_pptoV(){
	cout<<"Tu presupuesto en Varios es de: "<<calcula_porcentajeV()<<endl;
}

#endif