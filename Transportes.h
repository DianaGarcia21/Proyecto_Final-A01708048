/*
*ProyectoFinal
*Diana Patricia Garcia Fernandez
*A01708048
*04/12/2020
*/

#ifndef TRANSPORTES_H_
#define TRANSPORTES_H_
#include "PresupuestoTotal.h"
#include <iostream>
using namespace std;
/*
Clase Transportes que calcula el presupuesto, el gasto y sobrante tomando el cuenta el presupuesto total
*/
class Transportes:public PresupuestoTotal{ 
	private:
		float porcentajeT;
		float montoT;
		float acumT;
		float acum2T;
	public:
		//Constructor default
		Transportes(){};
		Transportes(float,string,int,float,float,float,float,float);
		float get_montoT();
		float get_acum2T();
		float calcula_porcentajeT();
		float calcula_sobrante();
		void mostrar_pptoT();

};
//Constructor
Transportes::Transportes(float pptoT,string n,int c,float p,float _porcentajeT,float _montoT,float _acumT,float _acum2T): PresupuestoTotal(pptoT,n,c,p){
	porcentajeT=_porcentajeT;
	montoT=_montoT;
	acumT=_acumT;
	acum2T=_acum2T;
}

//getters

float Transportes::get_montoT(){
	return montoT;
}

float Transportes::get_acum2T(){
	return acum2T;
}
/*
funcion calcula_porcentajeT 
calcula el presupuesto de transportes tomando el porcentaje y el presupuesto total
usando variables que estan declaras en el main con 0 para que no afecte

@param
@return el presupuesto de transportes 
*/
float Transportes::calcula_porcentajeT(){
	acumT=(get_pptoTotal()*(porcentajeT/100));
	return acumT;
}
/*
funcion calcula_sobrante
se calcula el sobrante en el gasto introducido y el presupuesto que se acaba de calcular 

@param
@return el sobrante de transportes 
*/
float Transportes::calcula_sobrante(){
	acum2T=calcula_porcentajeT()-montoT;
	return acum2T;
}
/*
funcion mostrar_pptoT
muestra el presupuesto de Transportes usando la variable de acumT ademas de que imprime el gasto (montoT) y el sobrante (acum2T) con las variables indicadas

@param
@return
*/
void Transportes::mostrar_pptoT(){
	cout<<"El presupuesto para transportes es de: "<<calcula_porcentajeT()<<endl;
	cout<<"El gasto en transportes fue de: "<<montoT<<"por lo tanto elsobrante en Transportes fue de: "<<calcula_sobrante()<<endl;
}

#endif



