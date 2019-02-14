/* Combinatoria con anidación de funciones */

#include <iostream>
#include <cmath>

using namespace std;

/*
 @brief Dado el numero \a n, calcula su factorial
 @param n número de que se quiere el factorial
 @return el factorial de \a n
 @autor Pablo
 @version 1.0 FP DAM
 */
int factorial (int n){
	
	int res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
	}
	return res;
}

/*
 @brief Dado los numeros \a a y \a b, calcula su combinatorio
 @param a del que se quiere el combinatorio junto a \a b
 @param b del que se quiere el combinatorio junto a \a a
 @pre a > 0, b > 0 y a <= b
 @return El resultado de la combinatoria de \a a y \a b
 @autor Pablo
 @version 1.0 FP DAM
 */
double combinatoria (double a, double b){

	return factorial(a) / (factorial(b) * factorial(a - b));
}


int main () {

	int valor_a = 0, valor_b = 0;
	do{
		do{
			cout << "Introduce el digito entero positivo \"a\": ";
			cin >>  valor_a;
		}while (valor_a <= 0);
		do{
			cout << "Introduce el digito entero positivo \"b\": ";
			cin >>  valor_b;
		}while (valor_b <= 0);
		if (valor_a < valor_b){
			cout << "El valor \"a\" tiene que ser mayor que el valor \"b\"." << endl;
		}
	}while (valor_a < valor_b);

	cout << "\n--> Factorial de \"a\" : " << factorial(valor_a);
	cout << "\n--> Factorial de \"b\" : " << factorial(valor_b) << endl;

	cout << "\n--> Combinatoria de " << valor_a << " sobre " << valor_b << " es: " << combinatoria(valor_a, valor_b) << endl;

}
