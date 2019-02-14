/* Este programa calcula los dos valores de una ecuación de segundo grado */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	double a,b,c,res_mas,res_menos;

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
	res_mas = ( (-b) + sqrt(pow(b,2) - (4 * a * c)) ) / (2 * a);
	res_menos = ( (-b)-sqrt(pow(b,2) - (4 * a * c)) ) / (2 * a);

	//RESPUESTAS
	cout << "Sus valores seran:" << endl;
	cout << "(+)" << res_mas << " y (-)" << res_menos << endl;
	
//Si a=0, nos saltara error por intentar dividir entre 0 (pero tambien es verdad que seria una ecuación de 1ºGrado y no de 2ºGrado).
//Si a=+ y c=+ y b²<a*b*(-4), dara un error porque la raiz seria negativa
//Si a=- y c=- y b²<a*b*(-4), dara un error porque la raiz seria negativa
	
	return 0;
}
