/* Esta programa calcula la nota media del alumno. Basado en su nota en teoria, practica y problemas */

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	//DECLARACIÓN DE VARIABLES
	double nota, teoria, practicas, problemas;
	
	//INTRODUCCIÓN
	cout << "(En el siguiente orden y separado por espacios)Introduce las notas de : teoria, practicas y problemas"<<endl;
	cin >> teoria >> practicas >> problemas;

	//CALCULOS
	nota= (teoria*0.7)+(practicas*0.2)+(problemas*0.1);

	//RESPUESTAS
	cout <<"La nota total del alumno es: " << nota <<endl;

	return 0;
}
