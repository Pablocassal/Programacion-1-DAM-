/** 
 * File:   Persona.h
 * Author: PersonalCastro
 * Version: 1.0
 * 
 *
 * Created on 1 de mayo de 2019, 18:22
 */
#ifndef PERSONA_H
#define PERSONA_H

#include <iostream>
using namespace std;

class Persona {
    protected:
        string DNI;
        string nombre;
        int edad;
    public:
        //Funcionalidad Mínima
        Persona();
        Persona(const Persona& p);
        Persona(string DNI, string nombre, int edad);
        ~Persona();
        //Los SETS
        inline void setDNI(string DNI) { this->DNI = DNI; }
        inline void setNombre(string nombre) { this->nombre = nombre; }
        void setEdad(int edad);
        //Los GETS
        inline string getDNI() const { return this->DNI; }
        inline string getNombre() const { return this->nombre; }
        inline int getEdad() const { return this->edad; }
        //SOBRECARGA DE OPERADOR =
        /* No hace falta porque sólo tenemos variables estáticas */
        //PRINT
        virtual void print() const;
};

#endif
