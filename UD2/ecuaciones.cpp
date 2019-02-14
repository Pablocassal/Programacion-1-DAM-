/* Este programa calcula los dos valores de una ecuación de segundo grado */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	double a = 0.0, b = 0.0, c = 0.0, res_mas = 0.0, res_menos = 0.0;
	double raiz = 0, e1 = 0.0;

	//INTRODUCCIÓN
	cout << "Este programa calcula los resultados de una ecuación de 2ºGrado" << endl;
	cout << "(ax²+bx+c)" << endl;
	cout << "Introduce el valor real de a:";
	cin >> a;
	cout << "Introduce el valor real de b:";
	cin >> b;
	cout << "Introduce el valor real de c:";
	cin >> c;

	//CALCULOS
	raiz = pow(b,2) - (4 * a * c);
	res_mas = ( (-b) + sqrt(raiz) ) / (2 * a);
	res_menos = ( (-b) - sqrt(raiz) ) / (2 * a);	
	e1 = -c / b;	

	//RESPUESTAS
	if (a == 0) {
		if (b != 0){
			cout << "La ecuación es de primer grado: " << e1 << endl;
		}else {
			cout << "Los valores propuestos son imposibles. Si a y b son 0 no hay ecuación. "  << endl;	
		}
	}else if (raiz < 0) {
		cout << "No hay resultados (numeros complejos)." << endl;	
	}else{
	cout << "Sus valores seran:" << endl;
	cout << "(+)" << res_mas << " y (-)" << res_menos << endl;
	}
}
