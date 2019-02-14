/* Calculadora de dos numeros presentados con un Menu (Modularización) */

#include <iostream>

using namespace std;

/*
 @brief Da al usuario la seleccion del programa en un menú
 @param a a = 1
 @param b b = 2
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @return Da el resultado final
 @autor Pablo
 @version 1.0 FP DAM
 */
double Menu(int, int);

/*
 @brief Hace la suma de \n a y \b
 @param a a = 1
 @param b b = 2
 @pre ninguna
 @post ninguna
 @return Da el resultado final
 @autor Pablo
 @version 1.0 FP DAM
 */
int Suma(int, int);

/*
 @brief Hace la resta de \n a y \b
 @param a a = 1
 @param b b = 2
 @pre ninguna
 @post ninguna
 @return Da el resultado final
 @autor Pablo
 @version 1.0 FP DAM
 */
int Resta(int, int);

/*
 @brief Hace la multiplicación de \n a y \b
 @param a a = 1
 @param b b = 2
 @return Da el resultado final
 @pre ninguna
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
int Multiplicacion(int, int);

/*
 @brief Hace la división de \n a y \b
 @param a a = 1
 @param b b = 2
 @return Da el resultado final
 @pre ninguna
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
double Division(int, int);

/*
 @brief Imprime por pantalla el resultado final
 @param resultado Tiene el valor final
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void DarResultado (double);

int main (){

	int a = 1, b = 2; //Los numeros propuestos para hacer las cuentas 
	double resultado = 0; //El resultado de la cuenta propuesta 

	resultado = Menu(a, b);
	DarResultado(resultado);
}


double Menu(int a, int b){

	char letra = '0'; //Letra de selección
	double resultado = 0; //El resultado de la cuenta propuesta 

	cout << "Sus numeros son: " << a << " y " << b << endl;
	cout << "Que operación quiere hacer | [S]uma [R]esta [M]ultiplicación [D]ivisión\n";
	cin >> letra;

	switch (letra){

		case 's': case 'S':
		resultado = Suma(a, b);
		break;

		case 'r': case 'R':
		resultado = Resta(a, b);
		break;

		case 'm': case 'M':
		resultado = Multiplicacion(a, b);
		break;

		case 'd': case 'D':
		resultado = Division(a, b);
		break;
	}
	
	return resultado;
}

int Suma (int a, int b){

	int resultado = 0;

	resultado = a + b;

	return resultado;
}

int Resta (int a, int b){

	int resultado = 0;

	resultado = a - b;

	return resultado;
}

int Multiplicacion (int a, int b){

	int resultado = 0;

	resultado = a * b;

	return resultado;
}

double Division (int a, int b){

	double c = 1.0;
	double resultado = 0;

	resultado = (a * c) / (b * c);

	return resultado;
}

void DarResultado (double resultado){

	cout << "El resultado final es : " << resultado << endl;
}
