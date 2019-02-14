#include <iostream>
#include <math.h>

using namespace std;

string entero_a_cadena (int numero){

    string a, b;//variable para cada unidad. Variable para la string final
    int n_divisiones = 0; //dicta la unidad (unidad, decena, centena...)
    int n = numero;//Guarda el valor de numero para poder calcular el n_divisiones
    int m = 0;//restador de la (unidad, decena, centena...)
    int poder = 0;//calcula el pow de cada n_división 

    while (n >= 10) {// Bucle para el contador de la unidad
        n = n/10;
        n_divisiones++;
    }

    while (n_divisiones >= 0){
	poder = pow(10,n_divisiones);//Actualiza poder cada  "*10"

	    if ( (numero >= (0 * poder)) && (numero < (1 * poder)) ){
                a = "0";
		m = 0;
            }else if ( (numero >= (1 * poder)) && (numero < (2 * poder)) ){
                a = "1";
                m = 1 * poder;
            }else if ( (numero >= (2 * poder)) && (numero < (3 * poder)) ){
                a = "2";
                m = 2 * poder;
            }else if ( (numero >= (3 * poder)) && (numero < (4 * poder)) ){
                a = "3";
                m = 3 * poder;
            }else if ( (numero >= (4 * poder)) && (numero < (5 * poder)) ){
                a = "4";
                m = 4 * poder;
            }else if ( (numero >= (5 * poder)) && (numero < (6 * poder)) ){
                a = "5";
                m = 5 * poder;
            }else if ( (numero >= (6 * poder)) && (numero < (7 * poder)) ){
                a = "6";
                m = 6 * poder;
            }else if ( (numero >= (7 * poder)) && (numero < (8 * poder)) ){
                a = "7";
                m = 7 * poder;
            }else if ( (numero >= (8 * poder)) && (numero < (9 * poder)) ){
                a = "8";
                m = 8 * poder;
            }else if ( (numero >= (9 * poder)) && (numero < (10 * poder)) ){
                a = "9";
                m = 9 * poder;
            }

		b += a ; 
		numero = numero - m; 

		n_divisiones--;
	}

	return b;
}

int main () {

	int a;
	string b;

	for (int i = 0; true; i++){

		cin >> a;

       		b += entero_a_cadena(a) + " , ";

        	cout << b << endl;
    	}
}
