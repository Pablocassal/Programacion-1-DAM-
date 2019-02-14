/* Este programa calcula la vuelta que ha de darse a un cliente cuanto te da mas dinero de lo acordado en el precio del articulo  */

#include <iostream>

using namespace std;

int main() {

	/* 
	double precio, pagado;
	int centimos;
	cout << "Escriba el precio del articulo en euros: ";
	cin >> precio;
	cout << endl;
	cout << "Escriba cuanto le ha pagado en euros: ";
	cin >> pagado;	
	cout << endl;
	centimos = 100 * (pagado - precio);
	cout << "Ha de devolver: " << centimos << " centimos." << endl; 
	*/

//El problema esta en que de esta forma si hay que devolver 4 euros (por ejemplo) nos dira que tenemos que darle 400 centimos lo que no es logico para el usuario
//SOLUCIÓN:

	//DECLARACIÓN DE VARIABLES
	double precio, pagado;
	int euros;
	int centimos;
		//int centimos;

	//INTRODUCCIÓN	
	cout << "Escriba el precio del articulo en euros: ";
	cin >> precio;
	cout << endl;
	cout << "Escriba cuanto le ha pagado en euros: ";
	cin >> pagado ;	
	cout << endl;

	//CLACULOS	
	euros =	pagado - precio;
	centimos = ( 100.0 * ((pagado - precio) - euros) );

		//duda (int vs. double)
		//centimos = ( 1000.0 * ((pagado - precio) - euros) );
		//centimos = ( 10000.0 * ((pagado - precio) - euros) );
		//centimos = ( 100000.0 * ((pagado - precio) - euros) );
	
	//RESPUESTAS
	cout << "Ha de devolver: " << euros << " euros con " << centimos << " centimos." << endl ;
}
