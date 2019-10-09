/** 
 * File:   Vendedor.h
 * Author: neozizou
 * Version: 1.1
 * TAREAS: REMODELAR LA CLASE PARA PERFECCIONARLA SEGÚN NUESTRA METODOLOGÍA:  POR EJEMPLO HACER LAS
 * 			  SOBRECARGAS PERTINENTES e IMPLEMENTAR LOS MÉTODOS QUE FALTAN.
 * Created on 24 de abril de 2012, 9:23
 */
#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include <stdlib.h>
#include "Persona.h"
#include "Cliente.h" //ojo que usa la Clase Cliente!!!
using namespace std;

class Vendedor : public Persona{
    private:
        Cliente* vector_clientes;
        int dim_actual;
        int utiles;

	protected:
		void resiceV_clientesAumento();

    public:
        //Funcionalidad Mínima
		Vendedor();
        Vendedor(const Vendedor &v);
        Vendedor(string DNI, string nombre, int edad);
        ~Vendedor();
        //Los SETS
	/* No hace falta porque la herencia (Persona) de estas es publica */
        //Los GETS
	/* No hace falta porque la herencia (Persona) de estas es publica */
        inline int getUtiles() const { return this->utiles; }
        inline int getDim_Actual() const { return this->dim_actual; }
        //SOBRECARGA DE OPERADOR =
        Vendedor& operator=(const Vendedor &v);
        //PRINT
        virtual void print() const;

        //Funcionalidad Avanzada
        /**
         *@brief Añade un cliente al vector de clientes del objeto
         */
        void vender(const Cliente &c);
         
        /**
         *@brief Me devuelve el cliente que está en la posición "pos"
          * del vector de clientes del objeto
         */
        Cliente getCliente(int pos) const;
};

#endif
