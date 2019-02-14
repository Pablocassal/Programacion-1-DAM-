/* Este programa calcula la nota (y dice si tiene un suspenso, aprovado, notable o sobresaliente) de un alumno a partir de su puntuación y sobre cuanto esta puntuado el examen */

#include <iostream>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	double nota = 0;
	double puntuacion = 0, sobre = 0;

	//INTRODUCCIÓN
	cout << "Este programa calculara la nota del examinado a partir de: la puntuacion sacada y sobre cuanto estaba puntuado el examen." << endl;
	cout << "Puntuación sacada: ";
	cin >> puntuacion;
	cout << "Sobre cuanto putua el examen: ";
	cin >> sobre;

	//CALCULOS
	nota = ((puntuacion * 10) / sobre);

	//CONDICIONALES Y RESULTADOS
	if (nota < 0) {
	cout << "La puntuación introducida es negativa, ¡¿Tan mal ha hecho el examen?!" << endl;
	cout << "En este caso digamos simplemente que corresponde con un: Suspenso" << endl;
	}
	else	 if ((nota >= 0) && (nota < 5)) {
		cout << "Ha sacado un " << nota << ", lo que corresponde con un: Suspenso." << endl;
		}
		else 	if ((nota >=5) && (nota < 7)) {
			cout << "Ha sacado un " << nota << ", lo que corresponde con un: Aprobado." << endl;
			}
			else 	if ((nota >=7) && (nota < 9)) {
				cout << "Ha sacado un " << nota << ", lo que corresponde con un: Notable." << endl;
				}
				else 	if ((nota >=9) && (nota <= 10)) {
					cout << "Ha sacado un " << nota << ", lo que corresponde con un: Sobresaliente." << endl;
					}
					else	if (nota >10) {
						cout << "¿A caso se puede sacar un " << puntuacion << " sobre " << sobre << "?" << endl;
						cout << "En este caso digamos simplemente que corresponde con un: Sobresaliente" << endl;
						}
}
