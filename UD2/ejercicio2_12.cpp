/* Este programa calcula con dos numeros introducidos por el usuario, la suma, resta, multiplicación o división de estos */

#include <iostream>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	double numero = 0, numero1 = 0, suma = 0, resta = 0, multiplicacion = 0, division = 0;
	char operacion;

	//INTRODUCCIÓN
	cout << "Introduce dos numeros para hacer una suma, resta, multiplicación o división entre estos" << endl;
	cout << "Introduce el primer numero: ";
	cin >> numero;
	cout << "Introduce el segundo numero: ";
	cin >> numero1;
	cout << endl << "[S]uma" << endl << "[R]esta" << endl << "[M]ultiplicación" << endl << "[D]ivisión" << endl;
	cout << "¿Que operación quieres hacer? Introduce la letra correspondiente: ";
	cin >> 	operacion;
	

	//CALCULOS, IFS y RESPUESTAS
	switch (operacion){
		//suma
		case 'S':
		case 's':		
			suma = numero + numero1;
			cout << endl << "SUMA DE: (" << numero << ") + (" << numero1 << ") = " << suma << endl;
		break;
		//resta
		case 'R':
		case 'r':
			resta = numero - numero1;
			cout <<"RESTA DE: (" << numero << ") - (" << numero1<< ") = " << resta << endl;
			resta = numero1 - numero;
			cout <<"RESTA (valores intercambiados) DE: (" << numero1 << ") - (" << numero << ") = " << resta << endl;
		break;
		//multiplicación
		case 'M':
		case 'm':
 			multiplicacion = numero * numero1;
			cout << "MULTIPLICACIÓN DE: (" << numero << ") x (" << numero1 << ") = " << multiplicacion << endl;
		break;
		//división
		case 'D':
		case 'd':			
	 	if ((numero != 0) && (numero1 != 0)) {
			division = numero / numero1;
			cout << "DIVISIÓN DE: (" << numero << ") / (" << numero1 << ") = " << division << endl;
			division = numero1 / numero;
			cout << "DIVISIÓN (valores intercambiados) DE: " << numero1 << " / " << numero << " = " << division << endl;
		}	//division 0/n1
		else if ((numero != 0) && (numero1 == 0)) {
			division = numero1 / numero;
			cout << "DIVISIÓN (valores intercambiados) DE: (" << numero1 << ") / (" << numero <<") = " << division << endl;
		}	//division 0/n
		else if ((numero == 0) && (numero1 != 0)) {
			division = numero / numero1;
			cout << "DIVISIÓN DE: (" << numero << ") / (" << numero1 << ") = " << division << endl;
		}	//division 0/0
		else if ((numero == 0) && (numero1 == 0)) {
			cout << "No se puede hacer una division con un cero en el denominador" << endl;
		}
		break;
	}
	return 0;
}
