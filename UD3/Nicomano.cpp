/* Este programa calcula el cubo de un numero con la precisión de Nicomano (Modulos) */

#include <iostream>

using namespace std;

/*
 @brief Pide al usuario un numero
 @return Numero dado por el usuario
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
int PedirNumero();

/*
 @brief Hace los calculos del primer inicial que necesita \a numero ³, para resolverlo con metodo Nicómano 
 @param numero Numero dado por el usuario
 @return Retorna el valor impar inicial
 @pre ninguna
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
int CalcularImparInicial(int);

/*
 @brief Calcula el cubo de \a numero, a través de el metodo Nicómano empezando por el impar \a impar
 @param numero Numero dado por el usuario
 @param impar Valor impar inicial para poder calcular con este método
 @return Retorna el valor final, (\a numero ³)
 @pre ninguna
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
int Nicomano(int, int);

/*
 @brief Imprime por pantalla el resultado final
 @param resultado Valor final
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void DarResultado(int);



int main () {

	int numero = 0; //Numero, a calcular el cubo
	int impar = 0; //Numero impar, por el que comienza Nicomeno();
	int resultado = 0;

	numero = PedirNumero();
	impar = CalcularImparInicial(numero);
	resultado = Nicomano(numero, impar);
	DarResultado(resultado);
}

int PedirNumero () {

	int numero = 0;

	cout << "Introduce el numero deseado para calcular su cubo con metodo \"Nicomano\": ";
	cin >> numero;

	return numero;
}

int CalcularImparInicial (int numero) {

	int impar = 0;

	impar = (numero * (numero - 1)) + 1;

	return impar;
}

int Nicomano (int numero, int impar) {

	int resultado = 0;

	for (int i = 1; i <= numero; i++ ){
		resultado += impar;
		impar += 2;
	}

	return resultado;
}

void DarResultado (int resultado) {

	cout << "El resultado es: " << resultado << endl;
}
