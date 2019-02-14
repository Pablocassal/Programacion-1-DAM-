/* Este programa calcula los dos valores de una ecuación de segundo grado */

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	
	//DECLARACIÓN DE VARIABLES
	double a,b,c,res_mas,res_menos;
	double raiz_if;

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
	raiz_if = pow(b,2) - (4.0 * a * c);
	res_mas = ( (-b) + sqrt(pow(b,2) - (4.0 * a * c)) ) / (2.0 * a);
	res_menos = ( (-b)-sqrt(pow(b,2) - (4.0 * a * c)) ) / (2.0 * a);	

	//CONDICIONALES
	//Si a=0 y b!=0, nos saltara error por intentar dividir entre 0 (pero tambien es verdad que seria una ecuación de 1ºGrado y no de 2ºGrado).	
	//Si a=0 y b=0, Nos haria una ecuación de 1ºGrado y no deberia.
	if (a == 0) {
		if (b == 0) {
			cout << "Los valores introducidos no dan pie a una ecuación. Estos valores significarian: " << c << " = 0. Por lo que no hay incognita." << endl;
		}else {
			cout << "Esta ecuacion seria de 1ºGrado, aun asi el valor de esta ecuación es de " << -c/b << endl;
		}
	}
	//Si a=+ y c=+ y b²<a*b*(-4), dara un error porque la raiz seria negativa
	//Si a=- y c=- y b²<a*b*(-4), dara un error porque la raiz seria negativa	
	else if (raiz_if < 0) {
		cout << "No tiene soluciones" << endl;	
	}else {
		cout << "Sus valores seran:" << endl;
		cout << "(b+)" << res_mas << " y (b-)" << res_menos << endl;
	}
	return 0;
}
