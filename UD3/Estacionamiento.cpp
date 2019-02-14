/* Este programa calcula una tabla de valores relacionada con un lugar de estacionamiento de veiculos */

#include <iostream>
#include <iomanip>

using namespace std;

/*
 @brief Pide al usuario el numero de coches que estan estacionados
 @return El numero de coches que estan estacionados
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
int CantidadCoches();

/*
 @brief llama a los modulos que crean la tabla de resultados final
 @param int (E) n_coches El numero de coches que hay estacionados
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void TablaCoches(int);

/*
 @brief Pregunta en una misma linea las horas que han estado cada coche y crea la tabla (sin contar los totales)
 @param int (E) n_coches El numero de coches que hay estacionados
 @param double (E/S) horas Cada hora propuesta
 @param double (E/S) precios El precio al que corresponde cada hora
 @pre Salidas y entradas predeterminadas activas
 @post Horas dentro de una linea
 @autor Pablo
 @version 1.0 FP DAM
 */
void LineaCoche (int, double &, double &);

/*
 @brief Hace el calculo de del precio al que corresponde cada hora
 @param hora (E) horas Cada hora propuesta
 @return El precio al que corresponde cada hora
 @pre Salidas y entradas predeterminadas activas
 @post Dependiendo de la hora, un diferente precio
 @autor Pablo
 @version 1.0 FP DAM
 */
double CalcularPrecio(double);

/*
 @brief Saca por pantalla la ultima linea de la tabla, con los valores totales
 @param double (E) horas Horas totales
 @param double (E) precios Precio total
 @pre Salidas y entradas predeterminadas activas
 @post ninguna
 @autor Pablo
 @version 1.0 FP DAM
 */
void LineaFinal (double, double);

int main () {

	int coches_estacionados = 0;

	coches_estacionados = CantidadCoches();
	TablaCoches(coches_estacionados);
}

int CantidadCoches () {

	int coches_estacionados = 0;

	cout << "Introduzca el numero de coches estacionados: ";
	cin >> coches_estacionados;

	return coches_estacionados;
}

void TablaCoches (int n_coches) {

	double hora_total = 0.0;
	double precio_total = 0.0;

	LineaCoche(n_coches, hora_total, precio_total);
	LineaFinal(hora_total, precio_total);
}

void LineaCoche (int n_coches, double &horas, double &precios){

	double i = 1.0;
	double hora = 0.0;

	cout << "\nIntroduzca en una linea (separados por espacios) \nlas horas de cada coche: ";
	while ( (i <= n_coches) && (cin >> hora) ){
		
		if (i == 1){
			cout << "\tAutomovil\t\tHoras\t\tPrecios\n";
		}

		double precio = 0.0;
		precio = CalcularPrecio(hora);
	
		cout << "\tCoche nº" << i << "\t\t" << hora << "\t\t" << precio << endl;
		if (hora > 24){
			hora = 0;
		}
		horas += hora;
		precios += precio;
		i++;
	}
}

double CalcularPrecio(double hora){

	double precio = 0;

	if (hora <= 3.0){
		precio = 2.0;
	}else if (hora <= 24){
		precio = 2.0;
		for (int i = 3.0; (i <= 18.0) && (i <= hora);i++){
			precio += 0.5;
		}
	}else{
		precio = 0;
	}

	return precio;
}

void LineaFinal (double horas, double precios){

	cout << "\tTOTAL\t\t\t[" << horas << "]\t\t[" << precios << "]\n\n";
}

