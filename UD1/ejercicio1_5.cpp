/* Este programa clacula un logaritmo, al que se le introduce la base y el valor de este */

#include <iostream>
#include <cmath>

using namespace std; // error: Esta no estaba

int main() {

	//DECLARACIÓN DE VARIABLES
	double	valor,base; 	// error: ponia "Double"
	
	//INTRODUCCIÓN
	cout << "Indique base: "; 
	cin >> base; // la ">>" del cin y el ;
	cout << "Indique el valor: "; 
	cin >> valor;
	
	//CALCULOS Y RESPUESTAS
	cout << "El log en base " << base << " de " << valor << " es:"; // error: la palabra es estaba sin comillas	
	cout << log(valor) / log(base) << endl; // error: el "<<" de cout
}
