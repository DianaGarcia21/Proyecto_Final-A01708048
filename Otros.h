/*
*ProyectoFinal
*Diana Patricia Garcia Fernandez
*A01708048
*04/12/2020
*/

#ifndef OTROS_H_
#define OTROS_H_
#include "Varios.h"

#include <iostream>
using namespace std;

/*
Clase otros que calcula el presupuesto, el gasto y sobrante tomando el cuenta el presupuesto de varios
*/
class Otros:public Varios{
	private:
		float gastoO;
		float porcentajeVO;
		float acumOt;
		float acum2Ot;
	public: 
		//Constructor default
		Otros(){};
		Otros(float,string,int,float,float,float,float,float,float,float);
		float get_gastoOt();
		float get_acum2Ot();
		float pptoVO();
		float sobranteOt();
		void mostrar_pptoOt();
};

//Constructor
Otros::Otros (float pptoT,string n,int c,float p,float _porcentajeV,float _pptoV,float _gastoO,float _porcentajeVO,float _acumOt,float _acum2Ot): Varios (pptoT,n,c,p,_porcentajeV,_pptoV){
	gastoO =_gastoO;
	porcentajeVO = _porcentajeVO;
	acumOt = _acumOt;
	acum2Ot = _acum2Ot;
}

//getters

float Otros::get_gastoOt(){
	return gastoO;
}

float Otros::get_acum2Ot(){
	return acum2Ot;
}
/*
funcion calcula_pptoVO
calcula el presupuesto de otros tomando el porcentaje y el presupuesto que se destino a Varios
usando variables que estan declaras en el main con 0 para que no afecte

@param
@return el presupuesto de otros 
*/
float Otros::pptoVO(){
	acumOt=(calcula_porcentajeV()*(porcentajeVO/100));
	return acumOt;
}
/*
funcion calcula_sobranteOt
se calcula el sobrante en el gasto introducido y el presupuesto que se acaba de calcular 

@param
@return el sobrante de otros 
*/
float Otros::sobranteOt(){
	acum2Ot=pptoVO()-gastoO;
	return acum2Ot;
}
/*
funcion mostrar_pptooT
muestra el presupuesto de otros usando la variable de pptoVD ademas de que imprime el gasto y el sobrante con las variables indicadas

@param
@return
*/
void Otros::mostrar_pptoOt(){
	cout<<"El presupuesto para otros fue de: "<<pptoVO()<<endl;
	cout<<"El gasto fue de: "<<gastoO<<endl<<"por lo tanto el sobrante de otros fue de: "<<sobranteOt()<<endl;
}
#endif

