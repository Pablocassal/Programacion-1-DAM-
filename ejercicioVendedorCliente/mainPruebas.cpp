#include <iostream>
#include "Persona.h"
#include "Cliente.h"
#include "Vendedor.h"
using namespace std;

int main () {
/*
	Persona p("P","P",18);
cout << "Persona creada" << endl;
	Cliente c("C","C",15.2);
cout << "Cliente creado" << endl;
	Vendedor v("V","V",-9);
cout << "Vendedor creado" << endl;
	p.print();
	c.print();
	v.print();
	Persona p1(p);
	Cliente c1(c);
	Vendedor v1(v);
	p1.print();
	c1.print();
	v1.print();
	//ESTO FUNCIONA
*/
/*
	Cliente c1("123123123H","Marta",15);
	Cliente c2("111111111H","Pepe", 28);
	Cliente c3("222222222H","Maria", 32);
	Cliente c4;
	Cliente c5("789789789H","Pablo", 18);



	Vendedor v1("444444444H", "Ana", 24);
	Vendedor v2;

	cout << "Declaracion finalizada.\n\n"; 

	v1.vender(c1);
	v1.vender(c2);
	v1.vender(c3);


	cout << "Clientes v1 añadidos.\n\n"; 
 
	v2.vender(v1.getCliente(0));//en este caso deberia de ser c1
	v2.vender(c4);

	cout << "Clientes v2 añadidos.\n\n"; 

	v1.print();
	v2.print();
	c5.print();
	//ESTO FUNCIONA
*/

	Cliente c1("123123123H","Marta",15);
	Cliente c2;
	Cliente c3("111111111G","Dynamic_cast",1); 

	Vendedor v1("444444444H", "Ana", 24);
	v1.vender(c1);
	Vendedor v2;

	Persona p1("789789789H","Pablo", 18);
	Persona p2;

	cout << "\nDECLARADOS TODOS LOS CLIENTES; VENDEDORES Y PERSONAS \n\n";

	//....................................................................

	Persona vector_estatico_polimorfico_a_personas[5];
	cout << "\nvector_estatico_polimorfico_a_personas DECLARADO\n";
	vector_estatico_polimorfico_a_personas[0] = c1;
	vector_estatico_polimorfico_a_personas[1] = v1;
	vector_estatico_polimorfico_a_personas[2] = p1;


	cout << "\t PRUEBA: ";
	//vector_estatico_polimorfico_a_personas[1].getCliente(0).print(); /* ESTE NO FUNCIONA DEBIDO AL AMBITO (CERRADO) EN EL QUE SE ENCUENTRA */
	//v1.getCliente(0).print(); /* ESTE EN CAMBIO FUNCIONA CON NORMALIDAD */
	cout << "\t FIN_PRUEBA: ";
	for(int i = 0; i < 3; i++){
		vector_estatico_polimorfico_a_personas[i].print();
	}
	cout << "TERMINAMOS CON EL vector_estatico_polimorfico_a_personas\n";
/**/
	//....................................................................

	Persona * vector_estatico_polimorfico_a_puntero_de_personas[5];
	cout << "\nvector_estatico_polimorfico_a_puntero_de_personas DECLARADO\n";
	vector_estatico_polimorfico_a_puntero_de_personas[0] = new Cliente("DNI", "Nombre", 0);
	vector_estatico_polimorfico_a_puntero_de_personas[1] = new Vendedor("DNI", "Nombre", 0);
	vector_estatico_polimorfico_a_puntero_de_personas[2] = new Persona("DNI", "Nombre", 0);

	for(int i = 0; i < 3; i++){
		vector_estatico_polimorfico_a_puntero_de_personas[i]->print();
	}

	//delete [] vector_estatico_polimorfico_a_puntero_de_personas;
	
	cout << "TERMINAMOS CON EL vector_estatico_polimorfico_a_puntero_de_personas\n";
/**/
	//....................................................................

	Persona * vector_dinamico_polimorfico_a_personas;
	vector_dinamico_polimorfico_a_personas = new Persona[5];
	cout << "\nvector_dinamico_polimorfico_a_personas DECLARADO\n";
	vector_dinamico_polimorfico_a_personas[0] =  c1;
	vector_dinamico_polimorfico_a_personas[1] =  v1;
	vector_dinamico_polimorfico_a_personas[2] =  p1;

	for(int i = 0; i < 3; i++){
		vector_dinamico_polimorfico_a_personas[i].print();
	}


	cout << "TERMINAMOS CON EL vector_dinamico_polimorfico_a_personas\n";
/**/
	//....................................................................

	Persona ** vector_dinamico_polimorfico_a_personas_dinamicas;
	vector_dinamico_polimorfico_a_personas_dinamicas = new Persona * [5];
	cout << "\nvector_dinamico_polimorfico_a_personas DECLARADO\n";
	vector_dinamico_polimorfico_a_personas_dinamicas[0] = new Cliente("DNI", "Nombre", 0);
	vector_dinamico_polimorfico_a_personas_dinamicas[1] = new Vendedor("DNI", "Nombre", 0);
	vector_dinamico_polimorfico_a_personas_dinamicas[2] = new Persona("DNI", "Nombre", 0);

	for(int i = 0; i < 3; i++){

	//PROBAMOS LA FUNCIÓN DYNAMIC_CAST

		if(Vendedor * v = dynamic_cast<Vendedor*>(vector_dinamico_polimorfico_a_personas_dinamicas[i])){

			v->vender(c3);
		}
		vector_dinamico_polimorfico_a_personas_dinamicas[i]->print();
	}

	

	//deletes del punterillos
	cout << "TERMINAMOS CON EL vector_dinamico_polimorfico_a_personas\n";
/**/
	//....................................................................

		cout << "\n\nDESTRUCTURES!!! AL ATAQUEEEE!!! \n\n";

}
