/*
*ProyectoFinal
*Diana Patricia Garcia Fernandez
*A01708048
*04/12/2020
*/

#ifndef CLIENTE_H_
#define CLIENTE_H_


#include <sstream>
#include<iostream>
using namespace std;
/*
Clase cliente que es la composicion de Presupuesto total que imprime el arreglo de familiares
*/
class Cliente{
	private:
    string nombre;
    int conSaldo;
	float ppto_total;
	float porcentaje;

  public:
	//Constructor default
	Cliente(){};
    Cliente(float,string,int,float);
    void set_c( int);
    string Imprime_familiar();

};
//Constructor
Cliente::Cliente(float pptoT,string n, int c,float p){
	ppto_total=pptoT;
	nombre=n;
	conSaldo=c;
	porcentaje=p;
}
//setter
void Cliente::set_c(int c){
	conSaldo= c;
}
/*
Clase imprime_familiar que toma los datos de los arrgelos de familia y ademas calcula el dinero que es distino cada quien con el porcentaje y el presupuesto Total

@param
@return string de la lista familiar
*/
string Cliente::Imprime_familiar(){
    stringstream aux;
    aux << nombre << " dio " <<conSaldo<<"% del presupuesto total el cual es "<<ppto_total*porcentaje<<endl;
    return aux.str();
}
#endif

