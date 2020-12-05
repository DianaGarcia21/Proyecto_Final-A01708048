/*
*ProyectoFinal
*Diana Patricia Garcia Fernandez
*A01708048
*04/12/2020
*/

#include "Transportes.h"
#include "Varios.h"
#include "Diversion.h"
#include "Otros.h"
#include "Alimentos.h"
#include "Desayuno.h"
#include "Comida.h"
#include "Cena.h"
#include "PresupuestoTotal.h"
#include <iostream>
using namespace std;

//main principal
int main(){
	float ppto_total,porcentajeT,montoT,porcentajeV,porcentajeVD,gastoDi;
	float porcentajeVO,gastoO,porcentajeA,porcentajeDe,gastoDe,porcentajeCo,gastoCo;
	float gastoCe,porcentajeCe;
	cout<<" ---------------------------------------";cout<<"  "<<endl;
	cout<<"PROYECTO FINAL C++";
	cout<<"  "<<endl;
	cout<<"Este programa consiste en una familia en la que le metes el presupuesto total y eso lo divide en tres secciones las cuales son Alimentos, Transportes y Varios";
	cout<<"despues te esas clases se dividen en otras de las cuales te pedira el porcentaje que les destinaras";
	cout<<"pero el porcentaje que metas sera del presupuesto que se defina en las 3 principales.";
	cout<<"  "<<endl;
	cout<<"Despues te pedira el gasto realizado en cada una de las clases y finalmente te mostrara el pantalla tanto el presupuesto de cada uno de los familiares como el de las clases";
	cout<<"asi como el gasto realizado y lo que te sobro de cada uno de las clases.";
	cout<<"  "<<endl;
	cout<<"Las clases principales son:";
	cout<<"Alimentos-se divide en Desayuno,Comida y Cena";
	cout<<"Transporte-no se divide en nada";
	cout<<"Varios-se divide en Diversion y Otros(tienditas,gastos adicionales)";
	cout<<"  "<<endl;
	cout<<" ---------------------------------------";cout<<"  "<<endl;
	//Asigno todas las variables para el uso de las clases 
	cout<<"Cual es tu presupuesto de todo: ";
	cin>>ppto_total;
	cout<<"  "<<endl;
	cout<<"Cual es tu porcentaje destinado a Alimentos: ";
	cin>>porcentajeA;
	cout<<"  "<<endl;
	cout<<"Cual fue tu porcentaje destinado a Desyunos: ";
	cin>>porcentajeDe;
	cout<<"Cual fue tu gasto en Desyunos: ";
	cin>>gastoDe;
	cout<<"  "<<endl;
	cout<<"Cual fue tu porcentaje destinado a Comidas: ";
	cin>>porcentajeCo;
	cout<<"Cual fue tu gasto en Comidas: ";
	cin>>gastoCo;
	cout<<"  "<<endl;
	cout<<"Cual fue tu porcentaje destinado a Cenas: ";
	cin>>porcentajeCe;
	cout<<"Cual fue tu gasto en Cenas: ";
	cin>>gastoCe;
	cout<<"  "<<endl;	
	cout<<"Cual es tu porcentaje destinado a Transportes: "; 
	cin>>porcentajeT;
	cout<<"Cual fue tu gasto en Transportes: ";
	cin>>montoT;
	cout<<"  "<<endl;
	cout<<"Cual es tu porcentaje destinado a Varios: ";
	cin>>porcentajeV;
	cout<<"Cual es tu porcentaje destinado a diversion: ";
	cin>>porcentajeVD;
	cout<<"Cual fue tu porcentaje destinado a otros: ";
	cin>>porcentajeVO;
	cout<<"Cual fue tu gasto en Diversiones: ";
	cin>>gastoDi;
	cout<<"Cual fue tu gasto en otros: ";
	cin>>gastoO;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	cout<<"  "<<endl;
	
	//Configuro mis objetos con las varibales de arriba
	
	Alimentos p5=Alimentos(ppto_total," ",0,0,porcentajeA,0.0);
	Desayuno p6=Desayuno(ppto_total," ",0,0,porcentajeA,0.0,gastoDe,porcentajeDe,0.0,0.0);
	Comida p7=Comida(ppto_total," ",0,0,porcentajeA,0.0,gastoCo,porcentajeCo,0.0,0.0);
	Cena p8=Cena(ppto_total," ",0,0,porcentajeA,0.0,gastoCe,porcentajeCe,0.0,0.0);
	Transportes p1=Transportes(ppto_total," ",0,0,porcentajeT,montoT,0.0,0.0);
	Varios p2=Varios(ppto_total," ",0,0,porcentajeV,0.0);
	Diversion p3=Diversion(ppto_total," ",0,0,porcentajeV,0.0,gastoDi,porcentajeVD,0.0,0.0);
	Otros p4=Otros(ppto_total," ",0,0,porcentajeV,0.0,gastoO,porcentajeVO,0.0,0.0);
	PresupuestoTotal p9;
	
	//Mando a llamar las funciones llevandose los objetos ya creados
	
	cout<<" ---------------------------------------";cout<<"  "<<endl;
	p5.mostrar_pptoA(); //alimentos
	p6.mostrar_pptoDe(); //desayuno
	p7.mostrar_pptoCo(); //comida
	p8.mostrar_pptoCe(); //cena
	p1.mostrar_pptoT(); //transporte
	p2.mostrar_pptoV(); //varios
	p3.mostrar_pptoDi(); //diversion
	p4.mostrar_pptoOt(); //otros
	
	p9.agregaFamilia(ppto_total,"Papa",50,0,0.5);
	p9.agregaFamilia(ppto_total,"Mama",30,1,0.3);
	p9.agregaFamilia(ppto_total,"Hija",5,2,0.05);
	p9.agregaFamilia(ppto_total,"Hijo",5,3,0.05);
	p9.agregaFamilia(ppto_total,"Tia",10,4,0.1);
	
	cout<<" ---------------------------------------";cout<<"  "<<endl;
	cout<<p9.estatus_saldo();
	cout<<" ---------------------------------------";cout<<"  "<<endl;
	
	return 0;
}