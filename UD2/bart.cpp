/* Escribe "No debo copiar en clase" diez veces */

#include <iostream>

using namespace std;

int main() {

	int veces = 0;

	do {		
		veces = veces + 1;		
		cout << veces << ". No debo copiar en clase." << endl;
	}while (veces < 10);
}
