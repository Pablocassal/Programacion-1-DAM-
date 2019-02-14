/* Este programa crea plantillas de las funciones de tu archivo *.cpp */

#include <iostream>
#include <string> //
#include <fstream> // Abre los archivos
#include <sstream> //transforma un string a chars

using namespace std;

/**
 * @brief Función que lee el nombre del archivo que se quiera documentar
 * @param string (E/S) NombreArchivo Variable que guarda el nombre del archivo
 * @pre El fichero es ".cpp"
 * @post \a NombreArchivo incluira '.cpp' dentro del nombre
 * @autor Pablo
 * @version QuMa 1.0  
 */
void PideNombreArchivo(string &);

/**
 * @brief Función que ABRE y CIERRA un archivo que se quiera documentar y copia el texto dentro de un vector de chars
 * @param char (E/S) Vector con el contenido del archivo y separado por intros como 'ª' 
 * @param int (E/S) Letras_util Variable que actualiza la capacidad utilizada por el \a Vector
 * @param int (E) Letras Variablo con la capacidad maxima de \a Vector
 * @param string (E/S) NombreArchivo Variable que guarda el nombre del archivo
 * @pre \a NombreArchivo incluira '.cpp' dentro del nombre
 * @post El vector separa los intros con simbologia 'ª'
 * @autor Pablo
 * @version QuMa 1.0  
 */
void LeerCaracteres(char[], int&, int, string);

/**
 * @brief LA FUNCIONALIDAD NO ES CLARA TODAVIA
 * @param int (E/S) NumeroFunciones
 * @pre Ya se ha guardado el vector de chars
 * @post 
 * @autor Pablo
 * @version QuMa 1.0  
 */
void DatosImportantes(int &);



int main () {

	const int Letras = 2000000; //Capacidad maxima de lectura
	char Codigo_char[Letras] = {0}; //Codigo separada el letras
	int Letras_util = 100; //Capacidad utilizada por el vector
	int NumeroFunciones = 0;
	string NombreArchivo;
	
	PideNombreArchivo(NombreArchivo);
	LeerCaracteres(Codigo_char, Letras_util, Letras, NombreArchivo);
	DatosImportantes(NumeroFunciones);
	
}

void PideNombreArchivo(string &NombreArchivo){

//	bool CPP = false;
//	do{
	
		cout << "Introduzca el nombre del archivo: ";
		cin >> NombreArchivo;
//		if (size_t index = NombreArchivo.find (".cpp")){
//			CPP = false;
//			cout << "No olvide acabar con \".cpp\"";
//		}else {
//			CPP = true;
//		}
//	}while (!(CPP));
}	

void LeerCaracteres (char Codigo_char[], int &Letras_util, int Letras, string NombreArchivo) {

	string archivo_total; // String con el archivo en su totalidad y separado con "ª" a cada intro
	string linea; // String que recoge cada linea del archivo una a una
	
	ifstream archivo (NombreArchivo.c_str());
	if (archivo.is_open()){
		while (getline (archivo, linea)){
			archivo_total += linea + "ª";
		}
		archivo.close();
	}

	char Letra_a_Letra = '0'; // "string archivo_total" pero en char
	istringstream conversor(archivo_total); // Conversor de string a char
	while ( (Letras_util < Letras) && (conversor >> Letra_a_Letra) ) {
		
		Codigo_char[Letras_util] = Letra_a_Letra;
		Letras_util++;
	}


//DEBUG VECTOR
	for (int i = 0; i < Letras_util; i++){
		cout << Codigo_char[i];
	}
//DEBUG VECTOR

}

void DatosImportantes (int &NumeroFunciones) {

//	cout << "\nCuantas funciones desea documentar: ";
//	cin >> NumeroFunciones;
}
