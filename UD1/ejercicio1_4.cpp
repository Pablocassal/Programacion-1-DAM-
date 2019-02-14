/* Este programa calcula los resultados de las formulas del ejercicio 1.4 */

#include <iostream>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	double a,b;
	a=5;
	b=3;
	
	//CALCULOS Y RESULTADOS
	//cout << 5 + a * b + a / b * 4 << endl; // Da un valor de: 26.6667
	cout << 6 * (5 - b) + a - b / (5 - a) << endl; // Sale infinito, ya que cualquier numero dividido entre cero dara como resultado infinito

	return 0;
}
