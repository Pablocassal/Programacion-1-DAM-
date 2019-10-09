/** Programa-didactico: Polinomios
 *@author PersonalCastro
 *@version 1.0 pc
 */

#include <iostream>
#include <stdlib.h>
#include <fstream>

#define restaurar "\033[1;0m"
#define debug "\033[1;31m"
#define Azul "\033[1;34m"
#define Morado "\033[1;35m"
#define fondoBlanco "\033[1;7m"

using namespace std;


	/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	 *  Declaracion de la clase Polinomio * * Atributos & Metodos  *
	 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

class Polinomio {

	private:
		float * coef;
		int grado;
		int max_grado;

		/**
		 *@brief Este metodo cambia (aumenta o disminulle, dependiendo del caso propuesto al setCoeficiente) la dimensión del vector de coeficientes de una clase Polinomio
		 *@param const int i Variable con el valor del nuevo max_grado
		 *@pre i > max_grado
		 *@post coef [max_grado + 1]
		 *@post max_grado = i
		 *@author PersonalCastro
		 *@version 1ºDAM 1.3
		 */
		void resize(const int i);


	public:
		/**
		 *@brief Metodo que inicializa los valores de los atributos de una nueva variable Polinomio por defecto (se inicializa al crear la variable automaticamente)
		 *@post Dim_coef == 10
		 *@post max_grado == 9
		 *@post grado == 0
		 *@author PersonalCastro
		 *@version 1ºDAM 1.2 (setCoeficiente)
		 */
		Polinomio(); // Constructor por defecto

		/**
		 *@brief Metodo que inicializa los valores de los atributos de una nueva variable Polinomio por parametros (se inicializa al crear la variable automaticamente)
		 *@param int maxGrado (E) Parametro dado al declarar una variable de tipo Polinomio para decidir la dimensión de coef inicial
		 *@pre maxGrado >= 0
		 *@post coef = new float[maxGrado + 1]
		 *@post max_grado = maxGrado
		 *@post grado == 0
		 *@author PersonalCastro
		 *@version 1ºDAM 1.0
		 */
		Polinomio(int maxGrado); // Constructor por parametros

		/**
		 *@brief Metodo que inicializa los valores de los atributos de una nueva variable Polinomio por copia de otra variable de tipo Polinomio (se inicializan al crear la variable automaticamente)
		 *@param const Polinomio & p (E) Parametro dado al declarar una variable de tipo Polinomio de la que usaremos los valores de sus atributos para hacer el copiado de estos
		 *@post coef != p.coef
		 *@post coef[] == p.coef[]
		 *@post max_grado = p.max_grado
		 *@post grado == p.grado
		 *@author PersonalCastro
		 *@version 1ºDAM 1.0
		 */
		Polinomio(const Polinomio & p); // Constructor por copia

		/**
		 *@brief Metodo que añade por pimera vez o reemplaza a un coeficiente ya existente con un coeficiente dado. El numero del grado se asemeja con con la posicion dentro del vector de coeficientes. Si ese grado es mayor que la dimension vector se aumentara el espacio, si el grado introducido es mayor que el actual se guardara el nuevo parametro y si el nuevo grado es menor que la dimension vector se disminuira el espacio de este.
		 *@param int i (E) Contiene el valor de la posicion en la que se quiere añadir (la cual coincide con el grado del monomio) 
		 *@param float c (E) Contiene el valor numerico del coeficiente a introducir 
		 *@pre i >= 0
		 *@pre i <= max_grado
		 *@post La dimension puede haber cambiando
		 *@author PersonalCastro
		 *@version 1ºDAM 1.3
		 */
		void setCoeficiente(int i, float c);

		/**
		 *@brief Devuelve el coeficiente de una posicion del atributo vector de coeficientes de una clase Polinomio
		 *@param int i (E) Contiene el valor de la posicion del vector del que se quiere obtener su coeficiente (la cual coincide con el grado del monomio)
		 *@pre i >= 0
		 *@pre i <= grado
		 *@author PersonalCastro
		 *@version 1ºDAM 1.0
		 */
		float getCoeficiente(int i) const;

		/**
		 *@brief Devuelve el atributo max_grado de una clase Polinomio
		 *@post max_grado != "Dim_VectorCoef"
		 *@author PersonalCastro
		 *@version 1ºDAM 1.0
		 */
		int getMax_grado() const;

		/**
		 *@brief Devuelve el atributo grado de una clase Polinomio
		 *@pre if (grado == 0) then: (coef[0] != 0)
		 *@author PersonalCastro
		 *@version 1ºDAM 1.0
		 */
		int getGrado() const;

		/**
		 *@brief Saca por pantalla el polinomio actual
		 *@pre if (grado == 0) then: (coef[0] != 0)
		 *@author PersonalCastro
		 *@version 1ºDAM 1.0
		 */
		void print() const;
		
		/**
		 *@brief Metodo que reestablace los valores de los atributos a 0 de las variables Polinomio existentes en el programa (se reestablecen al terminar el programa automaticamente)
		 *@post se hara un borrado de los coeficientes y del puntero
		 *@author PersonalCastro
		 *@version 1ºDAM 1.0
		 */
		~Polinomio(); // Destructor
		
		/**
		 *@brief Metodo que suma los coeficientes de una clase Polinomio (Parametro) y sobre otro Polinomio (desde donde se llamara a la funcion)
		 *@param const Polinomio & p (E) Polinomio que contiene el valor de los coeficientes que seran sumados y/o añadidos al Polinomio principal
		 *@post El resultado se guardara en el polinomio que lance el metodo
		 *@author PersonalCastro
		 *@version 1ºDAM 1.1
		 */
		void sumarV1(const Polinomio & p);

		/**
		 *@brief Metodo que suma los coeficientes de dos clases Polinomio (Parametro) y sobre otro Polinomio (desde donde se llamara a la funcion)
		 *@param const Polinomio & p_1 (E) Polinomio que contiene el valor de los coeficientes que seran sumados y/o añadidos al Polinomio principal
		 *@param const Polinomio & p_2 (E) Polinomio que contiene el valor de los coeficientes que seran sumados y/o añadidos al Polinomio principal
		 *@post El resultado se guardara en el polinomio que lance el metodo (No tiene por que se uno de los sumados)
		 *@author PersonalCastro
		 *@version 1ºDAM 1.2
		 */
		void sumarV2(const Polinomio & p_1, const Polinomio & p_2);

		/**
		 *@brief Metodo que suma los coeficientes de una clase Polinomio (Parametro) y otro Polinomio (desde donde se llamara a la funcion) para devolver el valor del resultado a traves de un return
		 *@param const Polinomio & p (E) Polinomio que contiene el valor de los coeficientes que seran sumados y/o añadidos al Polinomio principal
		 *@post El valor retornado se debe guardar en una variable Polinomio (dado el valor de este)
		 *@post Debe de dar un error de ejecución de "glibc"
		 *@return resultado de la suma resultante de los Polinomios
		 *@author PersonalCastro
		 *@version 1ºDAM 1.3
		 */
		Polinomio operator+(const Polinomio & p);

		/**
		 *@brief Reprogramacion del operador "=". Metodo que permite igualar dos objetos de la clase Polinomio (sin conflictos con la memoria dinámica de alguno de sus atributos)
		 *@param const Polinomio & p (E) Objeto de la clase polinomio del que se obtiene a la información de sus atributos
		 *@return objeto ee clase Polinomio copia del parametro(exceptuando las posiciones de memoria de sus atributos)
		 *@author PersonalCastro
		 *@version 1ºDAM 1.3
		 */
		Polinomio& operator=(const Polinomio & p); //Reprogramamos la funcion "="

		/**
		 *@brief Reprogramacion del operador "<<". Metodo que permite sacar por pantalla objetos de la clase Polinomio
		 *@param ostream &flujo
		 *@param const Polinomio & p (E) Objeto de la clase polinomio del que se obtiene a la información de sus atributos
		 *@return devuelve 
		 *@author PersonalCastro
		 *@version 1ºDAM 1.3
		 */
		friend ostream& operator<<(ostream &flujo, const Polinomio & p);

		/**
		 *@brief Reprogramacion del operador ">>". Metodo que permite sacar por pantalla objetos de la clase Polinomio
		 *@param istream &flujo
		 *@param const Polinomio & p (E) Objeto de la clase polinomio del que se obtiene a la información de sus atributos
		 *@return devuelve 
		 *@author PersonalCastro
		 *@version 1ºDAM 1.3
		 */
		friend istream& operator>>(istream &flujo, Polinomio & p);


		void guardarPolinomioEnFichero();

		void cargarPolinomioDeFichero();

};

	/* * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	 *  Implementacion de los metodos de la clase Polinomio  *
	 * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

Polinomio::Polinomio(){
	cout << debug << "debug: constructor def. | Polinomio" << restaurar << endl;

	grado = 0;
	max_grado = 9;
	coef = 0;
	coef = new float[max_grado+1];
	if (coef == 0){
		cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
		exit(-1);
	}

	for(int i = 0; i <= max_grado; i++){
		coef[i] = 0;
	}
}
Polinomio::Polinomio(int maxGrado){
	cout << debug << "debug: constructor pre. | Polinomio" << restaurar << endl;

	if (maxGrado < 0){
		cout << Morado << "\nNo se admiten los monomios de grado negativo." << endl << restaurar;
		cout << "Se pondra \"maxGrado\" en modo default (9):" << endl << endl << restaurar;
		maxGrado = 9;
	}

	grado = 0;
	max_grado = maxGrado;
	coef = 0;
	coef = new float[max_grado + 1];
	if (coef == 0){
		cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
		exit(-1);
	}
	for(int i = 0; i <= max_grado; i++){
		coef[i] = 0;
	}
}
Polinomio::Polinomio(const Polinomio & p){
	cout << debug << "debug: constructor cop. | Polinomio" << restaurar << endl;

	grado = p.getGrado();
	max_grado = p.getMax_grado();
	coef = 0;
	coef = new float[max_grado+1];
	if (coef == 0){
		cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
		exit(-1);
	}

	for(int i = 0; i <= max_grado; i++){
		coef[i] = p.getCoeficiente(i);
	}

}
void Polinomio::setCoeficiente(int i, float c){
	cout << debug << "debug: set coeficiente | Polinomio" << restaurar << endl;
	if (i < 0){
		cout << Morado << "\nNo se admiten los monomios de grado negativo\n\n" << restaurar;
	}else{
		if (i > max_grado){
		cout << debug << "debug: AUMENTO" << restaurar << endl;
			resize(i);
		}
		coef[i] = c;
		if (i >= grado){
			grado = i;
			if (c == 0){
				for (int j = grado; j != -1 && grado == i; j--){
					if(coef[j] != 0 || j == 0){
						grado = j;
					}
				}
			}
		}
		if (grado < max_grado){
		cout << debug << "debug: DISMINUCIÓN" << restaurar << endl;
			resize(grado);
		}
	}
}
void Polinomio::resize(const int i){
	cout << debug << "debug: resize | Polinomio" << restaurar << endl;

	max_grado = i;
	float * auxiliar = new float[max_grado+1];
	if (coef == 0){
		cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
		exit(-1);
	}
	for(int j = 0; j <= max_grado; j++){
		if(j <= grado){
			auxiliar[j] = coef[j];
			coef[j] = 0;
		}else {
			auxiliar[j] = 0;
		}
	}
	delete [] coef;
	coef = 0;
	coef = auxiliar;
	auxiliar = 0;
}
float Polinomio::getCoeficiente(int i) const{
	//cout << debug << "debug: get coeficiente | Polinomio" << restaurar << endl;
	if (i < 0){
		cout << Morado << "\nNo se admiten los monomios de grado negativo, como:" << restaurar;
		return i;
	}else{
		if (i <= grado){
			return coef[i];
		}else{
			return 0;
		}
	}
}
int Polinomio::getMax_grado() const{
	cout << debug << "debug: get max_grado | Polinomio" << restaurar << endl;

	return max_grado;
}
int Polinomio::getGrado() const{
	cout << debug << "debug: get grado | Polinomio" << restaurar << endl;

	return grado;
}
void Polinomio::print() const{
	cout << debug << "debug: print | Polinomio" << restaurar << endl;

	cout << Azul << "/ */ *Polinomio actual* \\ *\\\n\n" << Morado;
	cout << "p(x)= ";
	if (grado == 0 && coef[0] == 0){
		 cout << "0";
	}else{
		for (int i = grado; i >= 0; i--){
			if(i != grado){
				if (coef[i] > 0){
					cout <<  " +";
				}else if (coef[i] < 0){
					cout <<  " ";
				}
			}
			if (coef[i] == 1){
				if (i == 1){
					cout << "x";
				}else if (i != 0){
					cout << "x^" << i;
				}else{
					cout << coef[i];
				}
			}else if (coef[i] != 0){
				if (i == 1){
					cout << coef[i];
					cout << "·x";
				}else if (i != 0){
					cout << coef[i];
					cout << "·x^" << i;
				}else{
					cout << coef[i];
				}
			}
		}
	}
	cout << restaurar << endl << endl;
}
Polinomio::~Polinomio(){
	cout << debug << "debug: destructor | Polinomio" << restaurar << endl;

	for (int i = grado; i != 0; i--){
		coef[i] = 0;
	}
	delete [] coef;
	coef = 0;
	grado = 0;
	max_grado = 0;
}
void Polinomio::sumarV1(const Polinomio & p){
	cout << debug << "debug: suma (v1) | Polinomio" << restaurar << endl;	

	int grado_mayor = this->grado;
	if (grado_mayor < p.getGrado()){
		grado_mayor = p.grado;
	}
	for(int i = grado_mayor; i != -1 ;i--){
		this->setCoeficiente( i,(this->getCoeficiente(i) + p.getCoeficiente(i)) );
	}
}
void Polinomio::sumarV2(const Polinomio & p_1, const Polinomio & p_2){
	cout << debug << "debug: suma (v2) | Polinomio" << restaurar << endl;	

	int grado_mayor = p_1.grado;
	if (grado_mayor < p_2.getGrado()){
		grado_mayor = p_2.grado;
	}
	for(int i = grado_mayor; i != -1 ;i--){
		this->setCoeficiente( i,(p_1.getCoeficiente(i) + p_2.getCoeficiente(i)) );
	}
}
/*
Polinomio* Polinomio::sumarV4(const Polinomio *p, Polinomio *aux){
	cout << debug << "debug: suma (v4) | Polinomio" << restaurar << endl;	

	int grado_mayor = this->grado;

	if (grado_mayor < p->getGrado()){
		grado_mayor = p->grado;
	}
	for(int i = grado_mayor; i != -1 ;i--){
		aux->setCoeficiente( i,(this->getCoeficiente(i) + p->getCoeficiente(i)) );
	}
	return aux;
	delete aux;
}
*/
Polinomio Polinomio::operator+(const Polinomio & p){
	cout << debug << "debug: suma (v3) / operator \"+\"  | Polinomio" << restaurar << endl;	

	Polinomio aux (0);
	int grado_mayor = this->grado;
	if (grado_mayor < p.getGrado()){
		grado_mayor = p.grado;
	}
	for(int i = grado_mayor; i != -1 ;i--){
		aux.setCoeficiente( i,(this->getCoeficiente(i) + p.getCoeficiente(i)) );
	}
	return aux;
}
Polinomio& Polinomio::operator=(const Polinomio & p){
	cout << debug << "debug: operator \"=\" | Polinomio" << restaurar << endl;	

	if (&p != this){
		for (int i = 0; i <= this->max_grado; i++){
			this->coef[i] = 0;
		}
		delete [] this-> coef;
		this-> coef = 0;
		this-> grado = p.grado;
		this-> max_grado = p.max_grado;
		this-> coef = new float[this-> max_grado + 1];
		if (this-> coef == 0){
			cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
			exit(-1);
		}
		for (int i = 0; i <= max_grado; i++){
			this-> coef[i] = p.coef[i];
		}		
	}
	return *this;
}
ostream& operator<<(ostream &flujo, const Polinomio & p){
	//cout << debug << "debug: operator \"cout <<\" | Polinomio" << restaurar << endl;

	//flujo << Azul << "/ */ *Polinomio actual* \\ *\\\n\n";
	flujo << Morado << "p(x)= ";
	if (p.grado == 0 && p.coef[0] == 0){
		 flujo << "0";
	}else{
		for (int i = p.grado; i >= 0; i--){
			if(i != p.grado){
				if (p.coef[i] > 0){
					flujo <<  " +";
				}else if (p.coef[i] < 0){
					flujo <<  " ";
				}
			}
			if (p.coef[i] == 1){
				if (i == 1){
					flujo << "x";
				}else if (i != 0){
					flujo << "x^" << i;
				}else{
					flujo << p.coef[i];
				}
			}else if (p.coef[i] != 0){
				if (i == 1){
					flujo << p.coef[i];
					flujo << "·x";
				}else if (i != 0){
					flujo << p.coef[i];
					flujo << "·x^" << i;
				}else{
					flujo << p.coef[i];
				}
			}
		}
	}
	flujo << restaurar /*<< endl << endl*/;
}
istream& operator>>(istream &flujo, Polinomio & p){
	cout << debug << "debug: operator \"cin >>\" | Polinomio" << restaurar << endl;

	float coeficiente = 0.0;
	unsigned int grado = 0;

	cout << "Introduzca el grado mayor:";
	flujo >> grado;


	if (grado >= 0){
		for (int i = grado; i >= 0; i--){

			if (i > 1){
				cout << "Para el grado: x^" << i << endl << "Introduzca su coeficiente correspondiente: ";
			}else if (i == 1){
				cout << "Para el grado: x"<< endl << "Introduzca su coeficiente correspondiente: ";
			}else if (i == 0){
				cout << "Para el coeficiente (x⁰ * ...):" << endl << "Introduzca su coeficiente correspondiente: ";
			}
			flujo >> coeficiente;
			cout << endl;
			p.setCoeficiente(i,coeficiente);
		}
	}

	return flujo;
}
void Polinomio::guardarPolinomioEnFichero(){

/*Tengo algunas preguntas sobre el uso de esta funcion

	-> Recordar si se requiere de cargar mas de un polinomio
	->
*/

}

void Polinomio::cargarPolinomioDeFichero(){
	cout << debug << "debug: guardarPolinomio | Polinomio" << restaurar << endl;

	string nombreFichero = "Polinomio.pol";
	string contrasenia = "Tortuguita";
	bool ficheroEncontrado = true;
	ifstream fe;
	fe.open(nombreFichero.c_str());
	if (! fe.good()){
		ficheroEncontrado = false;
	}
	fe.close();


	ofstream fs;
	fs.open(nombreFichero.c_str(), ofstream::app);
	if (ficheroEncontrado == false){
		fs << contrasenia << endl;
	}
	bool algunPolinomioIntroducido = false;
	for (int i = this->grado; i >= 0; i--){
		if (this->coef[i] != 0){
			fs << i << " " << this->coef[i] << endl;
			algunPolinomioIntroducido = true;
		}
	}
	if (algunPolinomioIntroducido == true){
		fs << -1 << endl;
	}

	fs.close();

}


	/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
	 *  Declaracion de la clase Vista * * Atributos & Metodos  *
	 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
class Vista{
	
	private:
		Polinomio ** vista;
		int max_vista;

		/**
		 *@brief Este metodo cambia (aumenta) la dimensión del vector de coeficientes de una clase Polinomio
		 *@param const int i (E) Variable con el valor del nuevo max_grado (+1)
		 *@pre i >= max_grado
		 *@post max_grado = i + 1
		 *@post coef [max_grado]
		 *@author PersonalCastro
		 *@version 1ºDAM 1.2
		 */
		void resize(const int i);

		/**
		 *@brief Este metodo detecta espacios de memoria libres en el vector de punteros a polinomios y te deja elegir un espacio libre si lo hay. 
		 *@param const int i (E/S) Variable con el valor del espacio vacio
		 *@pre i <= max_grado && i >= 0
		 *@post if vista[] esta ocupado 100%, entonces i = max_grado 
		 *@author PersonalCastro
		 *@version 1ºDAM 1.3
		 */
		void comprobarEspacio (int & i);

	public:

		/**
		 *@brief Metodo que inicializa los valores de los atributos de una nueva variable Vista por defecto (se inicializa al crear la variable automaticamente)
		 *@post max_vista == 0
		 *@post Dim_coef == max_vista+1
		 *@author PersonalCastro
		 *@version 1ºDAM 1.1
		 */
		Vista ();

		/**
		 *@brief Metodo que inicializa los valores de los atributos de una nueva variable Vista por defecto (se inicializa al crear la variable automaticamente)
		 *@param const int i (E) Variable que inicializa el atributo max_vista
		 *@post max_vista == i
		 *@post Dim_coef == max_vista+1
		 *@author PersonalCastro
		 *@version 1ºDAM 1.1
		 */
		Vista (const int i);

		/**
		 *@brief Metodo que reestablace los valores de los atributos a 0 y elimina de la memoria las variables Polinomio y Vista existentes en el programa (se reestablecen al terminar el programa automaticamente)
		 *@post se hara un borrado de Polinomio (si existen)
		 *@author PersonalCastro
		 *@version 1ºDAM 1.1
		 */
		~Vista();
		
		/**
		 *@brief Metodo que permite seleccionar diferentes funciones para crear, eliminar, mostrar... la Clase Vista y sus polinomios
		 *@post se acabara (a priori) el programa
		 *@author PersonalCastro
		 *@version 1ºDAM 1.2
		 */
		void menu ();

		/**
		 *@brief Muestra por pantalla las diferentes funciones para crear, eliminar, mostrar... la Clase Vista y sus polinomios
		 *@author PersonalCastro
		 *@version 1ºDAM 1.2
		 */
		void mostrarMenu ();
			
		/**
		 *@brief Metodo que inicializa los valores de los atributos de un puntero a una nueva variable Polinomio por defecto (se inicializa al crear la variable automaticamente)
		 *@post Dim_coef == 10
		 *@post max_grado == 9
		 *@post grado == 0
		 *@author PersonalCastro
		 *@version 1ºDAM 1.1
		 */
	/*1*/	void aniadirPolinomioDef ();

		/**
		 *@brief Metodo que inicializa los valores de los atributos de un puntero a una nueva variable Polinomio por parametros (se inicializa al crear la variable automaticamente)
		 *@post coef = new float[maxGrado + 1]
		 *@post max_grado = maxGrado
		 *@post grado == 0
		 *@author PersonalCastro
		 *@version 1ºDAM 1.1
		 */
	/*2*/	void aniadirPolinomioParam ();

		/**
		 *@brief Metodo que inicializa los valores de los atributos de un puntero a una nueva variable Polinomio por copia de otra variable (que sera seleccionada de entre las ya existentes) de tipo Polinomio (se inicializan al crear la variable automaticamente)
		 *@post coef != p.coef
		 *@post coef[] == p.coef[]
		 *@post max_grado = p.max_grado
		 *@post grado == p.grado
		 *@author PersonalCastro
		 *@version 1ºDAM 1.0
		 */
	/*3*/	void aniadirPolinomioCp ();

		/**
		 *@brief Metodo que reestablace los valores de los atributos a 0 de un puntero a una variable Polinomio existente en el programa (se escojera el polinomio manualmente por el usuario)
		 *@post se hara un borrado de los coeficientes y del puntero
		 *@author PersonalCastro
		 *@version 1ºDAM 1.0
		 */
	/*4*/	void eliminarPolinomio ();

		
		/**
		 *@brief Metodo que saca por pantalla todos los valores de los Polinomios almacenados en el vector Vista []
		 *@author PersonalCastro
		 *@version 1ºDAM 1.0
		 */
	/*5*/	friend ostream& operator<<(ostream &flujo, const Vista & v);

		/**
		 *@brief Metodo que añade por pimera vez o reemplaza a un coeficiente ya existente con un coeficiente dado. El numero del grado se asemeja con con la posicion dentro del vector de coeficientes. Si ese grado es mayor que la dimension vector se aumentara el espacio, si el grado introducido es mayor que el actual se guardara el nuevo parametro y si el nuevo grado es menor que la dimension vector se disminuira el espacio de este.
		 *@param int i (E) Contiene el valor de la posicion en la que se quiere añadir (la cual coincide con el grado del monomio) 
		 *@param float c (E) Contiene el valor numerico del coeficiente a introducir 
		 *@pre i >= 0
		 *@pre i <= max_grado
		 *@post La dimension puede haber cambiando
		 *@author PersonalCastro
		 *@version 1ºDAM 1.3
		 */
	/*6*/	void setPolinomioV();


	/*7*/	void savePolinomio ();


	/*8*/	void loadPolinomio ();

};

Vista::Vista () {
	cout << debug << "debug: constructor def. | Vista" << restaurar << endl;

	max_vista = 0;
	vista = new Polinomio * [max_vista + 1];
	if (vista == 0){
		cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
		exit(-1);
	}

	for(int i = 0; i <= max_vista; i++){
		vista[i] = 0;
	}
}
Vista::Vista(int maxVista){
	cout << debug << "debug: constructor pre. | Vista" << restaurar << endl;

	if (maxVista < 0){
		cout << Morado << "\nNo se admiten posiciones negativas." << endl << restaurar;
		cout << "Se creara la vista en modo default:" << endl << endl << restaurar;
		maxVista = 0;
	}


	max_vista = maxVista;
	vista = new Polinomio * [max_vista + 1];
	if (vista == 0){
		cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
		exit(-1);
	}
	for(int i = 0; i <= max_vista; i++){
		vista[i] = 0;
	}
}
void Vista::resize(const int i){
	cout << debug << "debug: resize | Vista" << restaurar << endl;

	max_vista = i+1;
	Polinomio ** auxiliar = 0;
	auxiliar = new Polinomio * [max_vista + 1];
	if (auxiliar == 0){
		cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
		exit(-1);
	}
	for(int j = 0; j < max_vista; j++){
		auxiliar[j] = vista[j];
		vista[j] = 0;
	}
	delete [] vista;
	vista = 0;
	vista = auxiliar;
	auxiliar = 0;
}
void Vista::menu () {
	cout << debug << "debug: menu | Vista" << restaurar << endl;

	bool finish_menu = false;
	int selection = 0;

	do {

		mostrarMenu();		
		cout << "Select the option you want to use: ";
		cin >> selection;

		switch (selection){

			case 0 /* Finish the program */:
				finish_menu = true;
				cout << Azul << "\nYou select: EXIT";
				cout << endl << "Thank you for using the program" << restaurar << endl << endl;
				break;			

			case 1 /*Polinomio (def.)*/:	
					aniadirPolinomioDef ();
				break;

			case 2 /*Polinomio (param.)*/:	
					aniadirPolinomioParam ();
				break;

			case 3 /*Polinomio (cp.)*/:	
					aniadirPolinomioCp ();	
				break;

			case 4 /*Delete any Polinomio*/:	
					eliminarPolinomio ();
				break;

			case 5 /*Print Vista*/:	
					cout << *this;
				break;

			case 6 /*Set any Polinomio*/:	
					setPolinomioV ();
				break;	

			case 7 /*Save any Polinomio*/:	
					savePolinomio ();
				break;	

			case 8 /*load any Polinomio*/:	
					loadPolinomio ();
				break;

			default:
				cout << debug << "\nThe number selected doesn't exist. Please try again." << restaurar << endl;
		}

	}while (finish_menu == false);

}
void Vista::mostrarMenu () {
	cout << debug << "debug: mostrarMenu | Vista" << restaurar << endl;

	cout << "\n */* " << fondoBlanco << "LISTADO DE LOS MODULOS" << restaurar <<" */*\n";
	cout << Morado;
	cout << " 1) Create a new Polinomio (def.)\n";
	cout << " 2) Create a new Polinomio (param.)\n";
	cout << " 3) Create a new Polinomio (cp.)\n";
	cout << " 4) Delete any Polinomio\n";
	cout << " 5) Print Vista\n";
	cout << " 6) Set any Polinomio\n";
	cout << " 7) Save any Polinomio\n";
	cout << " 8) Load any Polinomio\n";
	cout << Azul << endl << " 0) EXIT\n\n";
	cout << restaurar;
}
Vista::~Vista () {
	cout << debug << "debug: destructor | Vista" << restaurar << endl;
	
	for(int i = 0; i < max_vista; i++){
		delete vista[i];
		vista[i] = 0;
	}
	max_vista = 0;
	delete [] vista;
	vista = 0;
}
void Vista::aniadirPolinomioDef () {
	cout << debug << "debug: aniadirPolinomioDef | Vista" << restaurar << endl;

	int selectedCasilla = max_vista;
	comprobarEspacio(selectedCasilla);

	vista[selectedCasilla] = new Polinomio;
	if (vista[selectedCasilla] == 0){
		cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
		exit(-1);
	}
	if (selectedCasilla == max_vista){
		resize(selectedCasilla);
	}
}
void Vista::aniadirPolinomioParam () {
	cout << debug << "debug: aniadirPolinomioParam | Vista" << restaurar << endl;

	int selectedCasilla = max_vista;
	comprobarEspacio(selectedCasilla);

	unsigned int startValue = 0;
	cout << "\nDefine the initial Polinomio size: ";
	cin >> startValue;

	vista[selectedCasilla] = new Polinomio(startValue);
	if (vista[selectedCasilla] != 0){
		cin >> *vista[selectedCasilla];
	}else{
		cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
		exit(-1);
	}
	if (selectedCasilla == max_vista){
		resize(selectedCasilla);
	}
}
void Vista::aniadirPolinomioCp () {
	cout << debug << "debug: aniadirPolinomioCp | Vista" << restaurar << endl;
	
	unsigned int selection = 0;
	cout << *this << endl;
	
	if (this -> max_vista != 0){
		cout << "Selecciona el Polinomio que quieres copiar: ";
		cin >> selection;
	
		if (selection >= 0 && selection < max_vista && vista[selection] != 0){
			
			int selectedCasilla = max_vista;
			comprobarEspacio(selectedCasilla);
			
			vista[selectedCasilla] = new Polinomio(*vista[selection]);
			if (vista[selectedCasilla] == 0){
				cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
				exit(-1);
			}
			if (selectedCasilla == max_vista){
				resize(selectedCasilla);
			}
		}else {
			cout << "No existe ese Polinomio.\n";
		}
	}else {
		cout << "No se puede copiar ningun Polinomio.\n";
	}
}
void Vista::comprobarEspacio (int & i) {
	cout << debug << "debug: comprobarEspacio | Vista" << restaurar << endl;

	bool espacioLibre = false;

	for (int t = 0; t < i; t++){
		if (vista[t] == 0){
			if (espacioLibre == false){
				cout << "Se han encontrado espacios disponibles:" << endl << endl;
				espacioLibre = true;
			}
			cout << "Casilla nº" << t << endl;
		}
	}
	
	if (espacioLibre == true){
		unsigned int casilla = 0;
		cout << "\nSelecciona una de las casillas propuestas si deseas introducir ahí el polinomio: ";
		cin >> casilla;

		if (vista[casilla] == 0 && casilla >= 0 && casilla < max_vista){
			cout << "Su polinomio se introducira en la casilla escogida. Gracias por ahorrarme memoria <3" << endl;
			i = casilla; 
		}else{
			cout << "La casilla seleccionada no esta disponible. El polinomio se colocara en la ultima posicion." << endl;
		}
	}
}
ostream& operator<<(ostream &flujo, const Vista & v){
	cout << debug << "debug: operator \"cout <<\" | Vista" << restaurar << endl;

	cout << endl;
	for(int i = 0; i < v.max_vista; i++){
		flujo << "Polinomio " << i << ": ";
		if (v.vista[i] != 0){
			flujo << *v.vista[i];
			flujo << endl;
		}else{
			flujo << "Espacio vacio";
			flujo << endl;
		}
	}
	if (v.max_vista == 0){
		flujo << "Ningun Polinomio detectado\n";
	}

	return flujo;
}
void Vista::setPolinomioV(){
	cout << debug << "debug: setPolinomioV | Vista" << restaurar << endl;	

	unsigned int selection = 0;
	cout << *this;
	
	if (this -> max_vista != 0){
		cout << "Selecciona el Polinomio que quieres resetear: ";
		cin >> selection;
	
		if (selection >= 0 && selection < max_vista && vista[selection] != 0){
			delete vista[selection];
			vista[selection] = new Polinomio;
			cin >> *vista[selection];
		}else {
			cout << "No existe ese Polinomio.\n";
		}
	}else {
		cout << "No se puede resetear ningun Polinomio.\n";
	}
}
void Vista::eliminarPolinomio() {
	cout << debug << "debug: eliminarPolinomio | Vista" << restaurar << endl;	

	unsigned int selection = 0;
	cout << *this;
	
	if (this -> max_vista != 0){
		cout << "Selecciona el Polinomio que quieres eliminar: ";
		cin >> selection;
	
		if (selection >= 0 && selection < max_vista && vista[selection] != 0){
			delete vista[selection];
			vista[selection] = 0;
		}else {
			cout << "No existe ese Polinomio.\n";
		}
	}else {
		cout << "No se puede eliminar ningun Polinomio.\n";
	}
}
void Vista::savePolinomio (){
	cout << debug << "debug: savePolinomio | Vista" << restaurar << endl;	

	unsigned int selection = 0;
	cout << *this;
	
	if (this -> max_vista != 0){
		cout << "Selecciona el Polinomio que quieres guardar (.pol): ";
		cin >> selection;
	
		if (selection >= 0 && selection < max_vista && vista[selection] != 0){
			(*vista[selection]).guardarPolinomioEnFichero();
		}else {
			cout << "No existe ese Polinomio.\n";
		}
	}else {
		cout << "No se puede guardar ningun Polinomio.\n";
	}

}
void Vista::loadPolinomio (){

	cout << debug << "debug: sacarPolinomio | Polinomio" << restaurar << endl;

	string nombreFichero = "Polinomio.pol";
	string contrasenia = "Tortuguita";
	string compruebaContrasenia;
	ifstream fe;
	fe.open(nombreFichero.c_str());
	if (! fe.good()){
		cout << "No se encuentra ningun fichero llamado \"Polinomio.pol\"" << endl;
	}else{

		fe >> compruebaContrasenia;
		if (compruebaContrasenia == contrasenia){
			cout << "Contraseña correcta" << endl;
			// polinomiosDisponibles();
			// polinomioUsado();
			int selectedCasilla = max_vista;
			comprobarEspacio(selectedCasilla);

			unsigned int startValue = 0;
			cout << "\nDefine the initial Polinomio size: ";
			cin >> startValue;
			unsigned int startValue = 0;
			vista[selectedCasilla] = new Polinomio(startValue);
			if (vista[selectedCasilla] != 0){
				cin >> *vista[selectedCasilla];
			}else{
				cerr << "Error. No hay memoria suficiente. Se abortará la ejecución" << endl;
				exit(-1);
			}
			if (selectedCasilla == max_vista){
				resize(selectedCasilla);
			}
		}	

	}
	fe.close();
}

int main () {
	//cout << "Wenas tardes ha pedido usteh una pizza con paperinhniii?" << endl;
	Vista vista1;

	vista1.menu();
}
