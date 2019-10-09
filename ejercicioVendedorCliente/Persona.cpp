/**
 * File:   Persona.h
 * Author: PersonalCastro
 * Version: 1.0
 *
 * Created on 1 de mayo de 2019, 18:32
 */
#include <iostream>
#include "Persona.h"

#define restaurar "\033[1;0m"
#define debug "\033[1;31m"

using namespace std;

Persona::Persona(){
	cout << debug << "Debug: Constructor Persona (Def.)\n" << restaurar;
    this->setDNI("NULL");
    this->setNombre("NULL");
    this->setEdad(0);
}
Persona::Persona(const Persona &p){
	cout << debug << "Debug: Constructor Persona (cp.)\n" << restaurar;
    this->setDNI(p.getDNI());
    this->setNombre(p.getNombre());
    this->setEdad(p.getEdad());
}
Persona::Persona(string DNI, string nombre, int edad){
	cout << debug << "Debug: Constructor Persona (Param.)\n" << restaurar;
    this->setDNI(DNI);
    this->setNombre(nombre);
    this->setEdad(edad);
}
Persona::~Persona(){
	cout << debug << "Debug: Destructor Persona\n" << restaurar;
    //no hace nada porque sólo tiene variables estáticas
    this->DNI = "NULL";
    this->nombre = "NULL";
    this->edad = 0;
}
void Persona::setEdad (int edad){
	if (edad >= 0){
		this->edad = edad;
	}else{
		cout << "No existen edades negativas, se pondra el valor por defecto (0).\n";
		this->edad = 0;
	}

}
void Persona::print() const{
	cout << debug << "Debug: Print(); Persona\n" << restaurar;
    cout << "DNI: " << this->DNI << endl;
    cout << "Nombre: " << this->nombre << endl;
    cout << "Edad: " << this->edad << endl;
}
