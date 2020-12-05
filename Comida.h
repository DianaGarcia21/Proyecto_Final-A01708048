/*
*ProyectoFinal
*Diana Patricia Garcia Fernandez
*A01708048
*04/12/2020
*/

#ifndef COMIDA_H_
#define COMIDA_H_
#include "Alimentos.h"

#include <iostream>
using namespace std;
/*
Clase comida que calcula el presupuesto, el gasto y sobrante tomando el cuenta el presupuesto de alimentos
*/
class Comida:public Alimentos{
	private:
		float gastoCo;
		float porcentajeCo;
		float pptoCo;
		float sobCo;
	public:
		//Constructor default
		Comida(float,string,int,float,float,float,float,float,float,float);
		float get_gastoCo();
		float get_sobCo();
		float pptoAC();
		float sobranteCo();
		void mostrar_pptoCo();
	
};
//Constructor 
Comida::Comida(float pptoT,string n,int c,float p,float _porcentajeA,float _pptoA, float _gastoCo,float _porcentajeCo, float _pptoCo, float _sobCo): Alimentos(pptoT,n,c,p,_porcentajeA,_pptoA){
	gastoCo = _gastoCo;
	porcentajeCo = _porcentajeCo;
	pptoCo = _pptoCo;
	sobCo=_sobCo;
}
//getters
float Comida::get_gastoCo(){
	return gastoCo;
}

float Comida::get_sobCo(){
	return sobCo;
}
/*
funcion calcula_pptoAC 
calcula el presupuesto de comida tomando el porcentaje y el presupuesto que se destino a Alimentos
usando variables que estan declaras en el main con 0 para que no afecte

@param
@return el presupuesto de comida 
*/
float Comida::pptoAC(){
	pptoCo =(calcula_pptoA()*(porcentajeCo/100));
	return pptoCo;	
}
/*
funcion calcula_sobranteCo
se calcula el sobrante en el gasto introducido y el presupuesto que se acaba de calcular 

@param
@return el sobrante de comida 
*/
float Comida::sobranteCo(){
	sobCo=pptoAC()-gastoCo;
	return sobCo;
}
/*
funcion mostrar_pptoCo
muestra el presupuesto de comidas usando la variable de pptoAC ademas de que imprime el gasto y el sobrante con las variables indicadas

@param
@return
*/
void Comida::mostrar_pptoCo(){
	cout<<"El presupuesto para los comidas es de: "<<pptoAC()<<endl;
	cout<<"El gasto fue de: "<<gastoCo<<" por lo tanto el sobrante fue de "<<sobranteCo()<<endl;
	
}

#endif

