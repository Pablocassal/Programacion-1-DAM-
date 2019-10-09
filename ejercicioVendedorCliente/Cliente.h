/** 
 * File:   Cliente.h
 * Author: neozizou
 * Version: 1.1
 * TAREAS: REMODELAR LA CLASE PARA PERFECCIONARLA SEGÚN NUESTRA METODOLOGÍA:  POR EJEMPLO HACER LAS
 * 			  SOBRECARGAS PERTINENTES.
 *
 * Created on 24 de abril de 2012, 8:49
 */
#ifndef CLIENTE_H
#define CLIENTE_H

#include "Persona.h"
#include <iostream>

#define restaurar "\033[1;0m"
#define debug "\033[1;31m"
using namespace std;

class Cliente : public Persona{
	public:
		//Constructores
		inline Cliente() : Persona (){ cout << debug << "Debug: Constructor Cliente (Def.)\n" << restaurar; }
		inline Cliente(const Cliente &c) : Persona (c.getDNI(),c.getNombre(), c.getEdad()){ cout << debug << "Debug: Constructor Cliente (Cp.)\n" << restaurar; }
		inline Cliente(string DNI, string nombre, int edad) : Persona (DNI, nombre, edad){ cout << debug << "Debug: Constructor Cliente (Param.)\n" << restaurar; }
        //Destructor
        ~Cliente();
        //Los SETS
	/* No hace falta porque la herencia (Persona) de estas es publica */
        //Los GETS
	/* No hace falta porque la herencia (Persona) de estas es publica */
        //SOBRECARGA DE OPERADOR =
    /* No hace falta porque sólo tenemos variables estáticas */
        //PRINT
        virtual void print() const;
};

#endif
