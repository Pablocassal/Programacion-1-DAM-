/**
 * File:   Cliente.h
 * Author: neozizou
 * Version: 1.0
 *
 * Created on 24 de abril de 2012, 8:49
 */

#include <iostream>
#include "Cliente.h"

#define restaurar "\033[1;0m"
#define debug "\033[1;31m"

using namespace std;
Cliente::~Cliente() {
	cout << debug << "Debug: Destructor Cliente\n" << restaurar;
}

void Cliente::print() const{
	cout << debug << "Debug: Print(); Cliente\n" << restaurar;
	cout << "Impresión de Cliente: " << endl;
	this->Persona::print();
}

