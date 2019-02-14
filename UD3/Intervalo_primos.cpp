/* Programa que lee un intervalo y devuelve la cantidad de primos correspondiente a esta (MODULARIZADO) */

#include <iostream>
#include <math.h>

using namespace std;


/*
 @brief El usuario define el intervalo [\a parm1,\a param2]
 @param parm1 Valor de la primera "x" vease: [parm1, ...]  
 @param parm2 Valor de la segunda "x" vease: [parm2, ...]
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void DeclaraIntervalo (int &parm1, int &parm2){

	cout << "Introduzca el primer numero de la serie \"[a,\" : ";
	cin >> parm1;
	cout << "Introduzca el segundo numero de la serie \"[b,\" : ";
	cin >> parm2;
}

/*
 @brief Calcula la cantidad de numeros primos dados entre [\a parm1,\a param2]
 @param parm1 Valor de la primera "x" vease: [parm1, ...]  
 @param parm2 Valor de la segunda "x" vease: [parm2, ...]
 @pre ninguna
 @post ninguna
 @return La cantidad de numeros primos calculados
 @autor Pablo
 @version 1.0 FP DAM
 */
int CalculaPrimos (int parm1, int parm2){

	int res; //La cuenta de primos totales a retornar 

	for (res = 0; parm1 <= parm2; parm1++ ){

		bool primo = true; //Controla cuando un numero no es primo 
		int cuenta_0 = 0; //Cuenta las veces que da el resto 0 cuando se esta calculando el numero primo 
		bool salidarapida = false; //Sale del bucle una vez el numero no es primo
	
		for (int i = 2; (pow(i,2) <= parm1) && (!(salidarapida)); i++){

			if ((parm1 % i) == 0){
				cuenta_0++;
			}
			if (cuenta_0 == 1){
				salidarapida = true;
				primo = false;
			}

		}
		if (primo && parm1 <= parm2){
			res++;
			cout << "nº" << parm1 << ", ";
		}
	}

	return res;	
}


/**
 \brief Saca por pantalla el numero de resultados \a total
 \param total Numero de primos calculados
 */
void SalidaTotalPrimos(int total, int a, int b){

	cout << "El nº de primos de esta serie --> [" << a << "," << b << "] es de: " << total << endl;

}

int main (){

	int a = 0;
	int b = 0;

	DeclaraIntervalo(a, b);
	SalidaTotalPrimos(CalculaPrimos(a, b), a, b);	
}
