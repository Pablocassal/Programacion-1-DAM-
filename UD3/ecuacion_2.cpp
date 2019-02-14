/* Este programa calcula una ecuacion de 2ºGrado (Modularmente) */

#include <iostream>
#include <cmath>

using namespace std;

/*
 @brief Pide al usuario las tres variables necesarias (\a x2, \a x, \a a)
 @param x2 Corresponde con el valor de la x²
 @param x1 Corresponde con el valor de la x¹
 @param a Corresponde con el "termino independiente"
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void PedirEcuacion(double &, double &, double &);

/*
 @brief Calcula tanto una de 1º como de 2º
 @param x2 Corresponde con el valor de la x² y uno de los resultados posteriormente
 @param x1 Corresponde con el valor de la x¹ y uno de los resultados posteriormente
 @param a Corresponde con el "termino independiente"
 @param ec_1 Verifica que la ecuación es de 1º
 @param ec_mal Filtra las ecuaciones sin soluciones
 @return Los resultados dentro de \a x2 y \a x
 @pre Salidas y entradas predeterminadas activas
 @post Se filtrara el tipo de ecuación
 @autor Pablo
 @version 1.0 FP DAM
 */
void CalcularEcuacion(double &, double &, double &, bool &, bool &);

/*
 @brief Da el resultado correspondiente al usuario. Recordemos, dentro de \a x2 y \a x
 @param x2 Corresponde con el valor de la x²
 @param x1 Corresponde con el valor de la x¹
 @param ec_1 Verifica que la ecuación es de 1º
 @param ec_mal Filtra las ecuaciones sin soluciones
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void DarResultado(double, double, bool, bool);

int main () {

	/* Variables de la ecuación */
	double x2 = 0.0;
	double x = 0.0;
	double a = 0.0;

	bool ec_1 = false;
	bool ec_mal = false;

	
	PedirEcuacion(x2, x, a);
	CalcularEcuacion(x2, x, a, ec_1, ec_mal);
	DarResultado(x2, x, ec_1, ec_mal);
}

void PedirEcuacion(double &x2, double &x, double &a){

	cout << "\nEcuación de segundo grado (x²+x+a = 0)\n\n";
	cout << "Introduce x²: ";
	cin >> x2;
	cout << "Introduce x: ";
	cin >> x;
	cout << "Introduce a: ";
	cin >> a;
}

void CalcularEcuacion(double &x2,double &x,double &a, bool &ec_1, bool &ec_mal){

	double segundo_calculo = 0.0; //calcula la segunda posibilidad de una ec de 2º "buena"

	if (x2 == 0){
		cout << "Esta ecuación es de primer grado...\n";
		x2 = (-a / x);
		ec_1 = true;
	}else if (a == 0){
		x2 = (-x / x2);
		x = -x2;
	}else if ((pow(x,2) - (4 * x2 * a)) < 0){
		ec_mal = true;
	}else if (x == 0){		
		x2 = sqrt(-a / x2);
		x = -x2;
	}else{ 			// ec 2º "buena"
		segundo_calculo =  (-x + sqrt(pow(x,2) - (4 * x2 * a))) / (2 * x2);
		x =  (-x - sqrt(pow(x,2) - (4 * x2 * a))) / (2 * x2);
		x2 = segundo_calculo;
	}
	
}

void DarResultado(double res1, double res2, bool ec_1, bool ec_mal){

	if (ec_1){
		cout << "\nAun asi, el resultado es: " << res1 << endl;
	}else if (ec_mal){
		cout << "\nLa ecuacion introducida no tiene soluciones\n";
	}else{
		cout << "\nEl resultado es: " << res1 << " y " << res2 << endl;
	}
}
