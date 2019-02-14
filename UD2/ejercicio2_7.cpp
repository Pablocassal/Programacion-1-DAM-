/* En este programa tu introduces 3 numeros reales y te dice el maximo */

#include <iostream>
#include <cmath>

using namespace std;

int main(){

	//DECLARACIÓN DE VARIABLES
	double numero1, numero2, numero3;
	
	//INTRODUCCIÓN
	cout <<	"Este programa calcula el numero mas grande de entre los 3 numeros reales que introduzcas" << endl;
	cout << "Introduce el primer numero: ";
	cin >> numero1;
	cout << "Introduce el segundo numero: ";
	cin >> numero2;
	cout << "Introduce el tercer numero: ";
	cin >> numero3;

	//IFS
	if ((numero1 == numero2) && (numero2 == numero3) && (numero1 == numero3)) {
		cout << "Los tres numeros son iguales (" << numero1 << ", " << numero2 << " y " << numero3 << ")" << endl;
	}
	
	if ((numero1 == numero2) && (numero2 > numero3) && (numero1 > numero3)) {
		cout << "El primer y segundo numero ("<< numero1 << " y " << numero2 << ") son igual de grandes" << endl;
	}

	if ((numero1 < numero2) && (numero2 == numero3) && (numero1 < numero3)) {
		cout << "El segundo y tercer numero ("<< numero2 << " y " << numero3 << ") son igual de grandes" << endl;
	}

	if ((numero1 > numero2) && (numero2 < numero3) && (numero1 == numero3)) {
		cout << "El primer y tercer numero ("<< numero1 << " y " << numero3 << ") son igual de grandes" << endl;
	}

	if ((numero1 > numero2) && (numero1 > numero3)) {
		cout << "El "<< numero1 << " es el más grande" << endl;
	}

	if ((numero1 < numero2) && (numero2 > numero3)) {
		cout << "El "<< numero2 << " es el más grande" << endl;
	}

	if ((numero2 < numero3) && (numero1 < numero3)) {
		cout << "El "<< numero3 << " es el más grande" << endl;
	}

}
