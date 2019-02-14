/* Este programa tiene por objetivo dar por pantalla el valor del radio introducido, el area y el perimetro que este tiene al formar un circulo. Ademas indica si el radio introducido es negativo */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	double radio = 0.0;
	double area = 0.0;
	double perimetro = 0.0;
	double potencia = 0.0;

	//INTRODUCCIÓN
	cout << "Introduce el radio en centimetros: ";
	cin >> radio;
	
	//CONDICIONAL
	if (radio < 0)	{
	cout << "El radio introducido es negativo" << endl;
	}
	else {
	
	//CALCULOS (else)
	area = 3.14 * pow (radio, 2);
	perimetro = 3.14 * radio * 2;

	//RESPUESTA (else)
	cout << "El radio introducido es de " << radio << " cm" << endl;
	cout << "El area de ese círculo es de " << area << " cm²" << endl;
	cout << "El perimetro de ese círculo es de " << perimetro << " cm" << endl;
	}
	



}
