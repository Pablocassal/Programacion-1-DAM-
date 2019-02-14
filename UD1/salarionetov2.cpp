/* Este programa calcula el sueldo neto a partir del bruto, a demas, le dice cuales son sus perdidas por irpf,contingencias comunes y desmpleo 
y tambien le dice cuanto a ahorrado si añade mas datos tales como: hipoteca, ocio, agua... */

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
	cout << "Este programa le calcula automaticamente su salario neto a partir de su salario bruto."<<endl;
	cout << "Introduzca su salario bruto por favor:";
	cin >> s_bruto;

   	//calculos
	irpf = 17 * s_bruto / 100;
	c_comunes = 25 * s_bruto / 1000;
	f_desempleo = 15 * s_bruto / 1000;
	s_neto = s_bruto - (irpf + c_comunes + f_desempleo);
	
   	//respuesta
	cout << "Su salario neto es de:" << s_neto << " $"<< endl;
	cout << "Este se ha visto reducido dado el irpf (" << irpf << "$), dadas las contingencias comunes (" << c_comunes << "$) y dada la Formación y desempleo (" << f_desempleo << "$)" << endl << endl;
	
	//DECLARACIÓN DE OTRAS VARIABLES
	double hipoteca, luz, agua, internet, gasolina, comida, ocio, tabaco, gasto_comunitario, ahorro;

	//2ªINTRODUCCIÓN	
	cout << "Ahora le calculara automaticamente su ahorro a partir de sus gastos y el salario neto."<<endl;
	cout<< "Introduzca sus gastos en hipoteca: ";
	cin >> hipoteca;	
	cout << endl;


	cout<< "Introduzca sus gastos en luz: ";
	cin >> luz;	
	cout << endl;

	cout<< "Introduzca sus gastos en agua: ";
	cin >> agua;	
	cout << endl;

	cout<< "Introduzca sus gastos en internet: ";
	cin >> internet;	
	cout << endl;

	cout<< "Introduzca sus gastos en gasolina: ";
	cin >> gasolina;	
	cout << endl;

	cout<< "Introduzca sus gastos en comida: ";
	cin >> comida;	
	cout << endl;

	cout<< "Introduzca sus gastos en ocio: ";
	cin >> ocio;	
	cout << endl;

	cout<< "Introduzca sus gastos en tabaco: ";
	cin >> tabaco;	
	cout << endl;

	cout<< "Introduzca sus gastos en gastos comunitarios: ";
	cin >> gasto_comunitario;	
	cout << endl;

	//CALCULOS Y RESPUESTAS
	ahorro = s_neto -(hipoteca + luz + agua + internet + gasolina + comida + ocio + tabaco + gasto_comunitario);
	cout << "Usted ahorra un total de: " << ahorro << " euros." << endl;
	cout << "¡Gracias por usar el programa!" << endl;			
}
