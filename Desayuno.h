/*
*ProyectoFinal
*Diana Patricia Garcia Fernandez
*A01708048
*04/12/2020
*/

#ifndef DESAYUNO_H_
#define DESAYUNO_H_
#include "Alimentos.h"

#include <iostream>
using namespace std;
/*
Clase desayuno que calcula el presupuesto, el gasto y sobrante tomando el cuenta el presupuesto de alimentos
*/
class Desayuno: public Alimentos{
	private:
		float gastoDe;
		float porcentajeDe;
		float pptoDe;
		float sobDe;
	public:
		//Constructor default
		Desayuno(){};
		Desayuno(float,string,int,float,float,float,float,float,float,float);
		float get_gastoDe();
		float get_sobDe();
		float pptoAD();
		float sobranteDe();
		void mostrar_pptoDe();
	
};
//Constructor
Desayuno::Desayuno(float pptoT,string n,int c,float p,float _porcentajeA,float _pptoA, float _gastoDe,float _porcentajeDe, float _pptoDe, float _sobDe): Alimentos(pptoT,n,c,p,_porcentajeA,_pptoA){
	gastoDe = _gastoDe;
	porcentajeDe = _porcentajeDe;
	pptoDe = _pptoDe;
	sobDe=_sobDe;
}

//getters

float Desayuno::get_gastoDe(){
	return gastoDe;
}

float Desayuno::get_sobDe(){
	return sobDe;
}
/*
funcion calcula_pptoAD 
calcula el presupuesto de desayuno tomando el porcentaje y el presupuesto que se destino a Alimentos
usando variables que estan declaras en el main con 0 para que no afecte

@param
@return el presupuesto de desayuno 
*/
float Desayuno::pptoAD(){
	pptoDe =(calcula_pptoA()*(porcentajeDe/100));
	return pptoDe;
}
/*
funcion calcula_sobranteDe
se calcula el sobrante en el gasto introducido y el presupuesto que se acaba de calcular 

@param
@return el sobrante de desayuno
*/
float Desayuno::sobranteDe(){
	sobDe=pptoAD()-gastoDe;
	return sobDe;	
}
/*
funcion mostrar_pptoDe
muestra el presupuesto de desayunos usando la variable de pptoAD ademas de que imprime el gasto y el sobrante con las variables indicadas

@param
@return
*/
void Desayuno::mostrar_pptoDe(){
	cout<<"El presupuesto para los desayunos es de: "<<pptoAD()<<endl;
	cout<<"El gasto fue de: "<<gastoDe<<" por lo tanto el sobrante fue de "<<sobranteDe()<<endl;
}

#endif

