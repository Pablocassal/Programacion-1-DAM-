/* Este programa calcula el MCD de entre dos numeros */

#include <iostream>

using namespace std;

/*
 @brief Pide al usuario dos numeros \a num1 y \a num2 
 @param num1 Numero a introducir (1)
 @param num2 Numero a introducir (2)
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void PideNumeros(int &, int &);

/*
 @brief intercambia de valor \a num1 y \a num2 si es necesario
 @param num1 Numero a introducir (1)
 @param num2 Numero a introducir (2)
 @pre ninguna
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void Cambiador(int &, int &);

/*
 @brief Calcula el MCD de \a num1 y \a num 2
 @param num1 Numero a introducir (1)
 @param num2 Numero a introducir (2)
 @return Resultado final(MCD)
 @pre ninguna
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
int CalculaMCD(int, int);

/*
 @brief Da el resultado MCD de los numeros introducidos
 @param resultado
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void Resultado(int);

int main () {

	int a = 0, b = 0; //Los dos numeros a introducir 
	int MCD = 0; //El resultado del MCD

	PideNumeros(a, b);
	if (a > b){
		Cambiador(a, b);
	}
	MCD = CalculaMCD(a, b);	
	
	Resultado(MCD);
}


void PideNumeros (int &num1, int &num2) {

	cout << "Introduce el primer numero: ";
	cin >> num1;
	cout << "Introduce el segundo numero: ";
	cin >> num2;
}

void Cambiador (int &num1, int &num2) {

	int aux = 0; //Variable auxiliar para hacer el cambio

	aux = num1;
	num1 = num2;
	num2 = aux;
}

int CalculaMCD (int a, int b) {

	bool MCDcalculado = false; //Controla cuando el calculo ha finalizado 
	int MCD = a;

	do{
		if ( ((b % MCD) == 0) && ((a % MCD) == 0) ){			
			MCDcalculado = true;	
		}else{
			if (MCD == 1){
				MCDcalculado = true;
			}else{
				MCD--;
			}
		}
	}while(!(MCDcalculado));

	return MCD;
}

void Resultado (int resultado) {

	if (resultado == 1){
		cout << "Los numeros introducidos no tienen MCD (default = 1)\n";
	}else{
		cout << "El Máximo Común Divisor es: " << resultado << endl;
	}
}
