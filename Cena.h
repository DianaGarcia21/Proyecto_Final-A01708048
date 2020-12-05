/*
*ProyectoFinal
*Diana Patricia Garcia Fernandez
*A01708048
*04/12/2020
*/

#ifndef CENA_H_
#define CENA_H_
#include "Alimentos.h"

#include <iostream>
using namespace std;
/*
Clase cena que calcula el presupuesto, el gasto y sobrante tomando el cuenta el presupuesto de alimentos
*/
class Cena: public Alimentos{
	private:
		float gastoCe;
		float porcentajeCe;
		float pptoCe;
		float sobCe;
	public:
		//Constructor default
		Cena(){};
		Cena(float,string,int,float,float,float,float,float,float,float);
		float get_gastoCe();
		float get_sobCe();
		float pptoACE();
		float sobranteCe();
		void mostrar_pptoCe();
	
};
//Constructor 
Cena::Cena(float pptoT,string n,int c,float p,float _porcentajeA,float _pptoA, float _gastoCe,float _porcentajeCe, float _pptoCe, float _sobCe): Alimentos(pptoT,n,c,p,_porcentajeA,_pptoA){
	gastoCe = _gastoCe;
	porcentajeCe = _porcentajeCe;
	pptoCe = _pptoCe;
	sobCe=_sobCe;
}
//getters
float Cena::get_gastoCe(){
	return gastoCe;
}

float Cena::get_sobCe(){
	return sobCe;
}
/*
funcion calcula_pptoACE 
calcula el presupuesto de cena tomando el porcentaje y el presupuesto que se destino a Alimentos
usando variables que estan declaras en el main con 0 para que no afecte

@param
@return el presupuesto de cena 
*/
float Cena::pptoACE(){
	pptoCe=(calcula_pptoA()*(porcentajeCe/100));
	return pptoCe;
}
/*
funcion calcula_sobranteCe
se calcula el sobrante en el gasto introducido y el presupuesto que se acaba de calcular 

@param
@return el sobrante de cena 
*/
float Cena::sobranteCe(){
	sobCe=pptoACE()-gastoCe;
	return sobCe;
}

/*
funcion mostrar_pptoCe
muestra el presupuesto de cena usando la variable de pptoACE ademas de que imprime el gasto y el sobrante con las variables indicadas

@param
@return
*/

void Cena::mostrar_pptoCe(){
	cout<<"El presupuesto para los ceno es de: "<<pptoACE()<<endl;
	cout<<"El gasto fue de: "<<gastoCe<<" por lo tanto el sobrante fue de "<<sobranteCe()<<endl;
}

#endif 

