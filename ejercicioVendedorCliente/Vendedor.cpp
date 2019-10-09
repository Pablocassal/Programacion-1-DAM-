/**
 * File:   Vendedor.cpp
 * Author: neozizou
 * Version: 1.0
 * 
 * Created on 24 de abril de 2012, 9:23
 */

#include <iostream>
#include <stdlib.h>
#include "Vendedor.h"


#define restaurar "\033[1;0m"
#define debug "\033[1;31m"

using namespace std;

Vendedor::Vendedor() : Persona (){
	cout << debug << "Debug: Constructor Vendedor (Def.)\n" << restaurar;
    this->dim_actual = 1;
    this->utiles = 0;
    this->vector_clientes = new Cliente[dim_actual];
    if (!this->vector_clientes){
		cerr << "Error en la creación del vector de clientes" << endl;
		exit(-1);
	}
};

Vendedor::Vendedor(string DNI, string nombre, int edad) : Persona (DNI, nombre, edad){
	cout << debug << "Debug: Constructor Vendedor (Param.)\n" << restaurar;
    this->dim_actual = 1;
    this->utiles = 0;
    this->vector_clientes = new Cliente[dim_actual];
    if (!this->vector_clientes){
		cerr << "Error en la creación del vector de clientes" << endl;
		exit(-1);
	}
};

Vendedor::Vendedor(const Vendedor &v) : Persona (v.getDNI(), v.getNombre(), v.getEdad()){
	cout << debug << "Debug: Constructor Vendedor (Cp.)\n" << restaurar;

	dim_actual = v.dim_actual;
	utiles = v.utiles;
	this->vector_clientes = new Cliente[dim_actual];
    if (!this->vector_clientes){
		cerr << "Error en la creación del vector de clientes" << endl;
		exit(-1);
    }
	for(int j = 0; j <= this->utiles; j++){
		 this->vector_clientes[j] = v.vector_clientes[j];
	}
};

Vendedor::~Vendedor(){
	cout << debug << "Debug: Destructor Vendedor\n" << restaurar;
    this->DNI = "NULL";
    this->nombre = "NULL";
    this->edad = 0;
	cout << debug << "Destruimos los clientes asociados al vendedor: \n" << restaurar; 
	for (int i = 0; i <= this->getUtiles(); i++){
		this->vector_clientes[i].~Cliente();
	}
	cout << debug << "Final de la destruccion del los clientes asociados \n" << restaurar; 
}

Vendedor& Vendedor::operator=(const Vendedor &v){
	cout << debug << "Debug: operator=(); persona\n" << restaurar;
    this->DNI = v.getDNI();
    this->nombre = v.getNombre();
    this->edad = v.getEdad();

    if (v.getDim_Actual() > this->dim_actual){ //redimensiono el vector_clientes
    }else{//borro y reservo el nuevo espacio y copio los valores
        //Primero borro
        delete [] this->vector_clientes;
        //Reservo con el tamaño del array del vendedor que me pasar
        this->vector_clientes = new Cliente[v.getDim_Actual()];
        if (!this->vector_clientes){
            cerr << "Error en la creación del vector de clientes" << endl;
            exit(-1);
        }
        //Asigno las útiles y la dimensión
        this->dim_actual = v.getDim_Actual();
        this->utiles = v.getUtiles();
        //Copio los valores
        for (int i=0; i < this->dim_actual; i++){
	    	this->vector_clientes[i] = v.getCliente(i);
		}
    }
}

void Vendedor::print() const{
	cout << debug << "Debug: Print(); Vendedor\n" << restaurar;
    cout << "Impresión de Vendedor: " << endl;
	Persona::print();
	if (this->utiles != 0){
	cout << "Clientes: \n";
		for (int i = 0; i < utiles; i++){
			cout << "\tCliente " << i << ": " << vector_clientes[i].getNombre() << "(" << vector_clientes[i].getDNI() << ")" << " - " << vector_clientes[i].getEdad() << endl;
		}
	}
}


//Funcionalidad Avanzada
/**
 *@brief Añade un cliente al vector de clientes del objeto
 */
void Vendedor::vender(const Cliente &c){

	this->vector_clientes[utiles] = c;
	this->resiceV_clientesAumento();
}

/**
 *@brief Me devuelve el cliente que está en la posición "pos"
  * del vector de clientes del objeto
 */
Cliente Vendedor::getCliente(int pos) const{
	return this->vector_clientes[pos];
}

void Vendedor::resiceV_clientesAumento(){
	cout << debug << "debug: resiceV_clientes" << restaurar << endl;

	Cliente * auxiliar = new Cliente[this->dim_actual+1];
	if (auxiliar == 0){
		cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
		exit(-1);
	}
	for(int j = 0; j <= this->utiles; j++){
		auxiliar[j] = vector_clientes[j];
	}

	delete [] vector_clientes;

	this->vector_clientes = 0;
	this->vector_clientes = auxiliar;
	auxiliar = 0;
	this->dim_actual++;
	this->utiles++;
}

