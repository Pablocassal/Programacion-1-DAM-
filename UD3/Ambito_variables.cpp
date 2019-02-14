/* Este programa sirve para identificar mejor el ambito de las variables */

#include <iostream>

using namespace std;

/*
 @brief Dadas las variables \n x e \n y hace unos calculos para probar el ambito de las variables
 @param x Numero con valor predefinido 1
 @param y Numero con valor predefinido 3
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */

void f1(double, double);

int main() {
	double x = 1.0;
	double y = 3.0;

	f1(x,y);
}

void f1(double x, double y){
	double i = 0.0;
	double j = 0.0;
	double z = 0.0;
	double J = 0.0;

	for(i=x; i<y; i++){
		double z;
		z= (i - x);
		double j= z/ (y - x);
		cout << "I (dentro)" << i << endl;
		cout << "Z (dentro)" << z << endl;
		cout << "X (dentro)" << x << endl;
		cout << "J (dentro)" << j << endl;
	}
		/*
		 * Dado a que hemos salido del ambito del for donde hemos declarado
		 * las variables "z" y "j" / (y hemos dejado libres "i" y "x"). Tendran
		 * que salir z = 0 && j = 0 / ( i = i_for+1 && x = x_for)
		 */
		cout << "\n\nI (fuera)" << i << endl;
		cout << "Z (fuera)" << z << endl;
		cout << "X (fuera)" << x << endl;
		cout << "J (fuera)" << j << endl;
}
