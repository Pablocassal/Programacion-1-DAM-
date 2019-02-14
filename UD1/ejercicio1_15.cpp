/* Este programa calcula la sucesion propuesta por Browning */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES	
	double pi0;
	double pi1, x0, x1, y1;
	double pi2, x2, y2;

	//CALCULOS
	
	//π.0	
	pi0 = 2 + sqrt(2);
	
	//π.1
	x0 = sqrt(2);
	x1 = (0.5) * ( sqrt(x0) + (1 / sqrt(x0)) );
	y1 = pow (2, 0.25);
	pi1 = ( (pi0) * ((x1) + 1) ) / ((y1) + 1);
	
	//π.2
	x2 = (0.5) * ( sqrt(x1) + (1 / sqrt(x1)) );
	y2 = ( (y1 * sqrt(x1)) +(1 / sqrt(x1)) ) / (y1 + 1);
	pi2 = (pi1 * (x2 + 1)) / (y2 + 1);

	//RESPUESTAS
	cout << "π0 = " << pi0 << endl;
	cout << "π1 = " << pi1 << endl;
	cout << "π2 = " << pi2 << endl << endl;
	cout << "y1 = " << y1 << endl;
	cout << "y2 = " << y2 << endl;
	cout << "x1 = " << x1 << endl;
	cout << "x2 = " << x2 << endl;
	
	return 0;
}
