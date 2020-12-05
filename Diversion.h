/*
*ProyectoFinal
*Diana Patricia Garcia Fernandez
*A01708048
*04/12/2020
*/

#ifndef DIVERSION_H_
#define DIVERSION_H_
#include "Varios.h"

#include <iostream>
using namespace std;

/*
Clase desayuno que calcula el presupuesto, el gasto y sobrante tomando el cuenta el presupuesto de varios
*/
class Diversion:public Varios{
	private:
		 float gastoDi;
		 float porcentajeVD;
		 float pptoDi;
		 float acum2Di;		 
	public:
		//Constructor default
		Diversion(){};
		Diversion(float,string,int,float,float,float,float,float,float,float);
		float get_gastoDi();
		float get_acum2Di();
		float sobranteDi();
		float pptoVD();
		void mostrar_pptoDi();
		
};

//Constructor
Diversion::Diversion(float pptoT,string n,int c,float p,float _porcentajeV,float _pptoV,float _gastoDi,float _porcentajeVD,float _pptoDi,float _acum2Di): Varios (pptoT,n,c,p,_porcentajeV,_pptoV){
	gastoDi=_gastoDi;
	porcentajeVD=_porcentajeVD;
	pptoDi=_pptoDi;
	acum2Di=_acum2Di;
}

//getters

float Diversion::get_gastoDi(){
	return gastoDi;
}

float Diversion::get_acum2Di(){
	return acum2Di;
}
/*
funcion calcula_pptoVD 
calcula el presupuesto de diversiones tomando el porcentaje y el presupuesto que se destino a Varios
usando variables que estan declaras en el main con 0 para que no afecte

@param
@return el presupuesto de diversiones 
*/
float Diversion:: pptoVD(){
	pptoDi=(calcula_porcentajeV()*(porcentajeVD/100));
	return pptoDi;
}
/*
funcion calcula_sobranteDi
se calcula el sobrante en el gasto introducido y el presupuesto que se acaba de calcular 

@param
@return el sobrante de diversiones
*/
float Diversion::sobranteDi(){
	acum2Di=pptoVD()-gastoDi;
	return acum2Di;
}
/*
funcion mostrar_pptoDi
muestra el presupuesto de diversion usando la variable de pptoVD ademas de que imprime el gasto y el sobrante con las variables indicadas
@param
@return
*/
void Diversion::mostrar_pptoDi(){
	cout<<"El presupuesto para diversion fue de: "<<pptoVD()<<endl;
	cout<<"El gasto fue de: "<<gastoDi<<"por lo tanto el sobrante de diversion fue de: "<<sobranteDi()<<endl;
}
#endif

