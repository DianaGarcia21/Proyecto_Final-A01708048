/*
*ProyectoFinal
*Diana Patricia Garcia Fernandez
*A01708048
*04/12/2020
*/

#ifndef PRESUPUESTOTOTAL_H_
#define PRESUPUESTOTOTAL_H_
#include "Cliente.h"

#include <iostream>
using namespace std;
/*
Clase presupuesto que muestra el total, agrega un nuevo familiar a la lista de familia y muestra el estatus de cada uno
*/
class PresupuestoTotal{ 
	private:
		float ppto_total;
		Cliente familia[5];
		string nombre;
		int conSaldo;
		float porcentaje;
	public:
		//Constructor default
		PresupuestoTotal(){};
		PresupuestoTotal(float,string,int,float);
		float get_pptoTotal();
		void mostrar_pptoTotal();
		void agregaFamilia(float,string, int, int,float);
		string estatus_saldo();
};

//Constructor
PresupuestoTotal::PresupuestoTotal(float pptoT,string n,int c,float p){
	ppto_total=pptoT;
	nombre=n;
	conSaldo=c;
	porcentaje=p;
}
//getter
float PresupuestoTotal::get_pptoTotal(){
	return ppto_total;
} 
/*
funcion mostrar_pptoTotal
muestra el presupuesto total usando la variable de ppto_total introducido por el usuario 

@param
@return
*/
void PresupuestoTotal::mostrar_pptoTotal(){
	cout<<"El presupuesto total es de: "<<ppto_total<<endl;
}

void PresupuestoTotal::agregaFamilia(float ppto_total,string nombre, int conSaldo, int posicion,float porcentaje){
  familia[posicion]=Cliente(ppto_total,nombre,conSaldo,porcentaje);
}

string PresupuestoTotal::estatus_saldo(){
  stringstream aux;
    for(int i = 0 ; i <5; i++){
      aux <<"Familiar " << familia[i].Imprime_familiar()<< endl;
    }
    return aux.str();
}

#endif

