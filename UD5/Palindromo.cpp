/* Este programa detecta cuando una palabra o frase es palindroma o no */

#include <iostream>
#define RESTORE "\033[1;0m"
#define DEBUG "\033[1;31m"

using namespace std;

/**
 * @brief Esta función saca por pantalla un nuevo vector derivado del vector \a v[], pero sin espacios
 * @param const int v_e[] (E/S) Vector con valores predeterminados
 * @param const int DIM (E) capacidad total del vector
 * @param int v_s[] (S) Vector con valores de salida (sin espacios)
 * @param int util_v_s (E/S) capacidad util del vector /a v_s[] 
 * @return nada
 * @pre vector de entrada predefinido con centinelas
 * @post ninguna
 * @autor Pablo
 * @version 1.0 Fp DAM
 */
void limpiaEspacios (const int DIM, const char v_e[], char v_s[], int &util_v_s);


/**
 * @brief Esta función saca por pantalla un nuevo vector derivado del vector \a v[], pero sin espacios
 * @param const int DIM (E) capacidad total del vector
 * @param int v_s[] (S) Vector con valores de salida (sin espacios)
 * @param int util_v_s (E/S) capacidad util del vector /a v_s[] 
 * @return Si el vector es palindromo (true) o si no lo es (false)
 * @pre vector de entrada predefinido con centinelas
 * @post ninguna
 * @autor Pablo
 * @version 1.0 Fp DAM
 */
bool CompruebaPalindromo (const int DIM, const char v_s[], const int util_v_s);

/**
 * @brief Esta función saca por pantalla si la palabro frase es Palindroma o no
 * @param bool  Palindromo (E) Si el vector es palindromo (true) o si no lo es (false)
 * @return nada
 * @pre ninguna
 * @post ninguna
 * @autor Pablo
 * @version 1.0 Fp DAM
 */	
void Resultado (bool Palindromo); 



int main () {

	const int DIM = 100; //Dimensión total de los vectores
	char v_e[DIM] = {'h','o','l','a','a',' ','l','o','h','\0'}; // vector con la frase o palabra la cual se vera si es palindroma o no 
	char v_s[DIM] = {0}; // vector con la frase o palabra (sin espacios) la cual se vera si es palindroma o no 
	int util_v_s = 0; //Dimension utilizada por el vector de salida y nº de siguente celda libre
	
	bool Palindromo = false;

	limpiaEspacios (DIM, v_e, v_s, util_v_s);
	Palindromo = CompruebaPalindromo (DIM, v_s, util_v_s);
	Resultado(Palindromo);
}



void limpiaEspacios (const int DIM, const char v_e[], char v_s[], int &util_v_s){

	int i = 0; //iteration variable

	do{

		if (v_e[i] != ' '){
			v_s[util_v_s] = v_e[i];
			util_v_s++;
		}
		i++;

	}while (v_e[i] != '\0' && i < DIM);
	cout << "-" << util_v_s << endl;
}

bool CompruebaPalindromo (const int DIM, const char v_s[], const int util_v_s){
	
	bool Palindromo = true; // Variable que controla si la palabra o frase es palindroma

	for (int i = 0; (i < DIM) && (i <= (util_v_s / 2)); i++){
	
		if (v_s[i] != v_s[util_v_s - i - 1]){
	//cout << DEBUG << "Debug = v_s[i]: " << v_s[i] << endl << "Debug = v_s[util_v_s - i - 1]: " << v_s[util_v_s - i] << RESTORE << endl; 
			Palindromo = false;
		}
	
	}

	return Palindromo;
}

void Resultado (bool Palindromo){

	if (Palindromo){
		cout << "La frase es Palindroma\n";
	}else {
		cout << "La frase no es Palindroma\n";
	}
}
