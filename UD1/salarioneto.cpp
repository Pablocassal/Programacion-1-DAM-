/* Este programa calcula el sueldo neto a partir del bruto, a demas, le dice cuales son sus perdidas por irpf,contingencias comunes y desmpleo */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	double s_bruto;
	double s_neto;
	double irpf;
	double c_comunes;
	double f_desempleo;

   	//introduccion
	cout << "Este programa le calcula automaticamente su salario neto a partir de su salario bruto." << endl;
	cout << "Introduzca su salario bruto por favor:";
	cin >> s_bruto;

  	//calculos
	irpf = 17 * s_bruto / 100;
	c_comunes = 25 * s_bruto / 1000;
	f_desempleo = 15 * s_bruto / 1000;
	s_neto = s_bruto - (irpf + c_comunes + f_desempleo);
	
   	//respuesta
	cout << "Su salario neto es de:" << s_neto <<" $"<< endl;
	cout << "Este se ha visto reducido dado el irpf (" << irpf << "$), dadas las contingencias comunes (" << c_comunes << "$) y dada la Formación y desempleo ("<<f_desempleo<<"$)" << endl;
	cout << "¡Gracias por usar el programa!" << endl;			
}
