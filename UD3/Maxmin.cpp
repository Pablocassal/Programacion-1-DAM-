/* Este programa calcula el maximo y el minimo de entre una serie de numeros introducida por el usuario */

#include <iostream>

using namespace std;

/*
 @brief Pide al usuario un numero
 @param a Verifica el numero de vueltas dadas
 @return El valor dado por el usuario
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
int PedirNumero(int);

/*
 @brief Calcula si \a numero es el nuevo numero \a max
 @param numero El valor dado por el usuario
 @param max Actualizador del valor máximo
 @param a Verifica el numero de vueltas dadas
 @pre ninguna
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void CalculaMax(int, int, int &);

/*
 @brief Calcula si \a numero es el nuevo numero \a min
 @param numero El valor dado por el usuario
 @param max Actualizador del valor mínimo
 @param a Verifica el numero de vueltas dadas
 @pre ninguna
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void CalculaMin(int, int, int &);

/*
 @brief Pregunta al usuario si quiere dar otro numero más 
 @return (si/no \a finalizar)
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
bool PreguntaTerminar();

/*
 @brief Da el resultado del numero \a max y \a min
 @param max Valor máximo
 @param min Valor mínimo
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void DarResultado(int, int);

int main (){

	int n_vueltas = 0;
	bool Terminar = false;
	int numero = 0;
	int max = 0;
	int min = 0;

	do{

		numero = PedirNumero(n_vueltas);
		CalculaMax(n_vueltas, numero, max);
		CalculaMin(n_vueltas, numero, min);
		n_vueltas++;
		Terminar = PreguntaTerminar();
		
	}while (!(Terminar));

	DarResultado(max, min);
}

int PedirNumero(int a){
	
	int numero = 0;

	if (a == 0){
		cout << "Introduce un numero: ";
	}else {
		cout << "Introduce otro numero: ";
	}
	
	cin >> numero;

	return numero;
}

void CalculaMax(int a, int numero, int &max){

	if (a == 0){
		max = numero;
	}else if (numero > max){
		max = numero;
	}
}

void CalculaMin(int a, int numero, int &min){

	if (a == 0){
		min = numero;
	}else if (numero < min){
		min = numero;
	}
}

bool PreguntaTerminar(){
	
	char control = '0';
	bool finalizar = false;
	bool caracter_bien = false;

	do{
		cout << "Pulsa [1] para continuar o pulsa [2] para ver el resultado final\n";
		cin >> control;
		
		if (control == '2'){
			finalizar = true;
			caracter_bien = true;
		}else if(control == '1'){
			caracter_bien = true;
		}else if (control != '1'){
			cout << "El valor introducido no corresponde con [1] o [2]\n\n";
		}

		
	}while (!(caracter_bien));

	return finalizar;
}

void DarResultado(int max, int min){

	cout << "El maximo dentro de los numeros introducidos es: " << max << endl;
	cout << "El minimo dentro de los numeros introducidos es: " << min << endl;
}
