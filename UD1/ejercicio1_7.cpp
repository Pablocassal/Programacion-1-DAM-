/* Este programa calcula con dos numeros enteros introducidos po el usuario, la suma, resta, multiplicación y división de estos */

#include <iostream>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	int numero, numero1, suma, resta, multiplicacion;
	double division;

	//INTRODUCCIÓN
	cout << "Introduce dos numeros enteros para obtener suma, resta, multiplicación y división entre estos" << endl;
	cout << "Introduce el primer entero: ";
	cin >> numero;
	cout << "Introduce el segundo entero: ";
	cin >> numero1;

	//CALCULOS Y RESPUESTAS
	
	//suma
	suma = numero + numero1;
	cout << endl <<"SUMA DE: (" << numero <<") + ("<< numero1<<") = "<<suma<<endl<<endl;
		
	//resta
	resta = numero - numero1;
	cout <<"RESTA DE: (" << numero <<") - ("<< numero1<<") = "<<resta<<endl;
	resta = numero1 - numero;
	cout <<"RESTA (valores intercambiados) DE: (" << numero1 <<") - ("<< numero<<") = "<<resta<<endl<<endl;
	
	//multiplicación
	multiplicacion = numero * numero1;
	cout << "MULTIPLICACIÓN DE: (" << numero <<") x ("<< numero1<<") = "<<multiplicacion<<endl<<endl;
	
	//división
	division = numero / numero1;
	cout << "DIVISIÓN DE: (" << numero <<") / ("<< numero1<<") = "<<division<<endl;
	division = numero1 / numero;
	cout << "DIVISIÓN (valores intercambiados) DE: " << numero1 <<" / "<< numero<<" = "<<division<<endl<<endl;

	/* puede dar un error en caso de que se quede un 0 en el denominador (división),
	tambien al solo poder preguntar por 2 numeros reales, si la división sale decimal esta estara incompleta */
	
	return 0;
}
