/* Este programa calcula una aproximación de la raiz de esta ecuación (x³+x-1 = 0) */

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


/*
 @brief Pregunta al usuario la cantidad de Iteraciones que desea que se realicen
 @return cantidad de Iteraciones
 @autor Pablo
 @version 1.0 FP DAM
 */
int NumeroDeAproximaciones();

/*
 @brief Calcula la mitad de un intervalo \a x1 , \a x2
 @param x1 Valor de la primera x vease: [x, ...] 
 @param x2 Valor de la segunda x vease: [... ,x] 
 @return \a mitad = resultado de la mediatriz
 @autor Pablo
 @version 1.0 FP DAM
 */
double Bolzano(double, double);


/*
 @brief Calcula si la aproximación de la \a mitad se le actualiza a \n x1 o a \n x2
 @param x1 Valor de la primera x vease: [x, ...] 
 @param x2 Valor de la segunda x vease: [... ,x] 
 @param mitad resultado de la mediatriz ya calculada
 @autor Pablo
 @version 1.0 FP DAM
 */
void AproximacionDeIntervalo(double &, double &, double, bool &);

/*
 @brief Da el resultado final al usuario
 @param x1 Valor de la primera x vease: [x, ...] 
 @param x2 Valor de la segunda x vease: [... ,x] 
 @param mitad resultado de la mediatriz ya calculada
 @autor Pablo
 @version 1.0 FP DAM
 */
void DarResultado(double, double, double, bool);



int main () {

	double x1 = 0.0, x2 = 1.0; // [0,1]
	double mitad = 0.0; // Resultado de Bolzano
	bool raiz_encontrada = false; // Quien sabe, a lo mejor la encontramos...

	for (int i = NumeroDeAproximaciones(); ((i > 0) && (!(raiz_encontrada))) ; i--){

		mitad = Bolzano(x1, x2);
		AproximacionDeIntervalo(x1, x2, mitad, raiz_encontrada);
	}

	DarResultado(x1, x2, mitad, raiz_encontrada);
}

int NumeroDeAproximaciones () {

	int i = 0; // numero de iteraciones

	cout << "Introduce el numero de iteraciones (la precisión) requerida de resultado: ";
	cin >> i;	

	return i;
}

double Bolzano (double x1, double x2) {

	double mitad = 0;

	mitad = (x1 + x2) / 2.0;

	return mitad;
}

void AproximacionDeIntervalo (double &x1, double &x2, double mitad, bool &raiz_encontrada) {

	double signo_encontrado = 0.0;

	signo_encontrado = pow(mitad, 3.0) + mitad - 1;

	if (signo_encontrado == 0){
		raiz_encontrada = true;
	}else if (signo_encontrado < 0){
		x1 = mitad;
	}else if (signo_encontrado > 0){
		x2 = mitad;
	}
}

void DarResultado (double x1, double x2, double mitad, bool raiz_encontrada) {

	if (raiz_encontrada){
		cout << "El resultado se encuentra en: " << mitad << endl;
	}else{
		cout << "El resultado aproximado es de: " << setprecision(10) << mitad << endl;
		cout << "Se encuentra entre [" << x1 << " , " << x2 << "]\n";
	}
}
