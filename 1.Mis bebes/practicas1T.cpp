/* Este programa contiene las siguientes funcionalidades:
 * Un menu de selección de ejercicio
 * 1) Problema: Contact
 * 2) Problema: Star WarsI: Yo soy tu...
 * 3) Problema: Star Wars II: Panel
 */


#include <iostream>
#include <math.h>
#include <sstream>


using namespace std;



/* [contact]
 *FUNCIÓN CABALISTICO (ESTADO)
 */
bool Cabalistico_f (int n){

	bool cabalistico = true; // Variable que dice si el numero es primo o no
	double res = 0.0; // Resultado del modulo
	int cuenta_0 = 0; // Veces que ha salido de resultado "0"

	for (int i = 1; pow(i,2) <= n; i++){ // Calcula las posibilidades logicas (para alijerar tiempo de ejecución)
		res = n % i;
		if (res == 0){
			cuenta_0++;
		}
	}
	if (cuenta_0 > 1){ // Si no es primo habra dado resto 0 en mas de 1 numero (contando el primer uno)
		cabalistico = false;
	}
	return cabalistico;
}


/* [contact]
 *FUNCIÓN FILTRO (1 - 0) 
 */
bool filtra1_0 (char a){

	int ascii = a; // Lee el valor "char" introducido a un numero
	bool salida = true; // Dicta el buen o mal resultado del "char" introducido

	if (ascii != 49 && ascii != 48 && ascii != 32){ // tener encuenta que '\n' no se considera de valor 49 (1), 48 (0) o 32 (espacio) por lo que filtra tambien la salida 
		salida = false;
	}

	return salida;
}


/* [contact]
 *FUNCIÓN CAMBIO DE INT A STRING
 */
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
	poder = pow(10,n_divisiones);//Actualiza "poder" cada vuelta, dictando asi el rango (a) y la resta de este (m)

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


        b += a ; //string que acumula cada numero

	numero = numero - m; //Se resta el valor del numero que este en la centena, decena... (segun el caso)

	n_divisiones--; // Revaloriza "poder" a un 0 menos la siguiente ronda
    }

    return b;
}


/*
 * FUNCIÓN PRINCIPAL CONTACT
 * Coge un codigo binario
 * Agrupa los unos, comprueba que el numero resultante sea primo y combierte dicho numero (primo o no) en un string
 * Da el resultado, te da las multiplicaciones hechas (la string acumulada) y te dice si el resultado es cabalistico
 */
void Contact_f() {

	string multiplicaciones; // Guarda una cadena de caracteres con las multiplicaciones realizadas
	char entrada = 'a'; // La principal entrada
	int cuenta_1 = 0, cuenta_0 = 0, total_vueltas = 0; // Cantidad de 1. Cantidad de 0. Cantidad de vueltas
	bool ceros_5 = false; // Detector de los 5 '0'
	int resultado = 1; // El cabalistico
	bool cabalistico = true, primo = true; // El estado final de cabalistico.El estado parcial de cada numero
	bool primer_estado = false; // El estado hasta el primer 1

	cout << "\n\nIntroduce la serie binaria extraterrestre: ";

	while ( cin.get(entrada) && filtra1_0(entrada) ) {//Sale cuando si hay 5'0'.Vueltas por cada char (propiedad char 1 a 1)

		total_vueltas++; // Contador de vueltas totales

		if (entrada == '1'){
			if (cuenta_1 == 0) {
				cuenta_0 = 0;
				if (total_vueltas != 0 && !(ceros_5) && total_vueltas != 1){ // Coloca en la string acumuladora cuando hace falta el simbolo " * "
					if (primer_estado){
						multiplicaciones += " * ";
					}
				}
			}
			primer_estado = true;
			cuenta_1++;
		}

		if (total_vueltas == 1){ // Arregla los casos donde se empieza con un 0 (si se pone antes de el anterior if seria igual que si lo declaramos al principio)
			cuenta_1 = 1;
			
		}


		if (entrada == '0'){
			if (cuenta_0 == 0 && !(ceros_5) && primer_estado) {

				multiplicaciones += entero_a_cadena(cuenta_1); // LLama a la función que convierte el int en un string y lo coloca dentro de un string acumulador
				resultado *= cuenta_1;
				primo = Cabalistico_f(cuenta_1); // LLama la función para saber el estado de cada número
				if(!(primo)){
					cabalistico = false; // Esto cambia el estado de cabalistico
				}
			}
			cuenta_0++;
			if (cuenta_0 == 1){
				cuenta_1 = 0;
			}
			if (cuenta_0 == 5){
				ceros_5 = true;
			}
		}
	}

	if (!filtra1_0(entrada) && (ceros_5) && entrada != '\n'){ // Resultado de este ejemplo "101'00000'210101"
		cout << "\n 	               __WARNING__";
		cout << "\nEl codigo introducido contiene algun error (aun con 5 ceros).\n              No es un codigo extraterrestre." << endl;
	}else if (!(ceros_5) && entrada != '\n'){ // Resultado de este ejemplo "a"
		cout << "\n 	      __WARNING__";
		cout << "\nEl codigo introducido contiene algun error.\n     No es un codigo extraterrestre." << endl;
	}else if (!(ceros_5)){ // Resultado de este ejemplo "1011010101"
		cout << "\n 	          __WARNING__";
		cout << "\nEl codigo introducido no acaba con cinco ceros.\n        No es un codigo extraterrestre." << endl;
		cout << "\nPress Enter To Continue\n"; // Es necesario para que continue el programa

	}else{ // Resultado de este ejemplo "101100110010'00000'"
		cout << resultado <<" = " << multiplicaciones ;
		cout << "  -->  ";
		if (cabalistico){
			cout << " Si\n";
		}else {
			cout << " No\n";
		}
		cout << "\nPress Enter To Continue\n"; // Es necesario para que continue el programa
	}
}



/* 
 *Función: yo soy tu... 
 *Según los casos de pruebas que se necesiten, junta un nombre, la frase ", yo soy tu " y un parentesco.
 *Si el nombre es "Luke" y el parentesco "padre", dice "TOP SECRET"
 */
void YoSoyTu_f (){

	int veces_prueba = 1; //Numero que dicta la cantidad de veces que se efectuara la prueba
	string nombre, parentesco; //Cadena de caracteres asociados con el nombre y el parentesco 
	string frase, final_p; // Cadena de caracteres asociados con la frase formada y cadena de caracteres acumuladora de la variable "frase"


	cout << "\n	      EL IMPERIO CONTRATACA\n\n\n" << "    ¿Quieres intentar encontrar el parentesco?\n\n";
	
	do{
		if (!(cin.good()) || (veces_prueba <= 0)){ //Filtro para la variable veces_prueba
			cin.clear();//limpia la entrada
			cin.ignore(256 , '\n');//ignora los caracteres que no llegan al rango de int
			cout << "El valor introducido no es valido (pruebe con un digito entero positivo).\n";
			cout << "/·#{·//·#{·/ REINICIANDO EL PROGRAMA /·#{·//·#{·/ \n\n";
		}

		cout << "Introduce el numero de casos de prueba que deseas hacer: ";
		cin >> veces_prueba;
	}while (!(cin.good()) || (veces_prueba <= 0));


	for (int i = 1; i <= veces_prueba; i++){ //Bucle que pide el nombre y el parentesco correspondientes al las veces que se requiera hacer pruebas
		cout << "\nCaso nº" << i << endl;
		cout << "Introduce un nombre que quieras: ";
		do{
			if (nombre.size() > 100){ //Filtra que la string no tenga mas de 100 caracteres
				cout << "*Pista* El nombre tiene menos de 100 caracteres: ";
			}
			cin >> nombre;
		}while (nombre.size() > 100);
		cout << "Introduce un parentesco que quieras: ";
		do{
			if (parentesco.size() > 100){ //Filtra que la string no tenga mas de 100 caracteres
				cout << "*Pista* El parentesco tiene menos de 100 caracteres: ";
			}
			cin >> parentesco;
		}while (parentesco.size() > 100);

		if ((nombre == "Luke") && (parentesco == "padre")){
			frase = "TOP SECRET\n";
		}else{
			frase = nombre + ", yo soy tu " + parentesco +"\n";
		}
		final_p += frase; //string acumuladora del mensaje final, con cada frase creada por el usuario a traves del bucle
	}

	cout << "\n\n" << final_p << "\n\n";
}






/* [Panel]
 *FUNCIÓN Ancho grafica
 */
void grafica_ancho (int a){

	string salida_linea =  "	#"; // Ajusta el ancho
	for (int i = 0; i < a;i++){ // Calcula el ancho acumulando "#"
		salida_linea += "#";
	}
	cout << salida_linea + "#"; // Ajusta el ancho
}


/* [Panel]
 *FUNCIÓN FILTRO (I-B-S)
 */
bool filtraI_B_S (char a){

	int ascii = a; // Lee el valor "char" introducido a un numero
	bool salida = true; // Dicta el buen o mal resultado del "char" introducido

	if (ascii != 73 && ascii != 66 && ascii != 83 && ascii != 32){ // tener encuenta que '\n' no se considera de valor 73 (I), 66 (B), 83 (S) o 32 (espacio) por lo que filtra tambien la salida 
		salida = false;
	}

	return salida;
}


/*
 * FUNCIÓN PRINCIPAL PANEL
 * Coge una string que usara como "bolsa" de chars
 * Calcula la altrura y anchura de la grafica
 * Da el resultado de la grafica compuesta por [I][B][S]
 */
void Panel_f(){

	string letras; //La cadena desde donde se lee

	do{
		if (letras.size() > 100){ //Filtra que la string no tenga mas de 100 caracteres
			cout << "\nNo puedes cargar una grafica con más de 100 caracteres\n";
		}
		cout << "INTRODUCE UNA SENTENCIA DE VALORES [I][S][B]:";
		getline(cin, letras, '\n'); //Coje el valor de toda la cadena "string"
	}while (letras.size() > 100);



	char serie_letras = 'a'; // Char desde donde se lanza 1 a 1 cada caracter
	int estado_altura = 0, ancho = 0, alto = 0; // Altura momentanea. Ancho. Alto. (De la grafica)
	bool b_negativa = false; // Comprueba si la grafica es negativa

	bool S_antes = false;// Controla cuando es la ultima S (para el caso de "SI" altura = 1)
	bool I_despues_S = false;//Controla cuando es la ultima I despues de una S (para el casl de "SIB" altura = 0)
	bool B_antes = false; // Controla cuando es la ultima B (para el caso de "BB" altura = -1)
	bool B_despues_I = false;//Controla cuando es la ultima I despues de una S (para el casl de "SIB" altura = 0)

	string grafica_fila; // Resultado de la grafica en cada fila 
	string grafica_altura; // Acumulador de la variable "grafica_altura"

	istringstream letras_a_char1(letras); // Traduce la variable string "letras" a char
	while ((letras_a_char1 >> serie_letras) && filtraI_B_S(serie_letras)){ 	// Lee letra a letra (La filtra tambien) y apila información sobre la altrura y anchura de la grafica
		
		if (serie_letras == 'I'){
			//Siempre
			ancho++;
			
			//Caso Altura +1
			if (S_antes){
				estado_altura++;
				if (estado_altura > alto){ //La altura maxima de la grafica
					alto = estado_altura;
				}
				I_despues_S = true;
			}else if (B_antes){
				B_despues_I = true;
			}
		
			//Validación de estado
			S_antes = false;
			B_antes = false;

		}else if (serie_letras == 'S'){
			//Siempre
			ancho++;

			//Caso Altura +1
			if (S_antes){
				estado_altura++;
				if (estado_altura > alto){ //La altura maxima de la grafica
					alto = estado_altura;
				}
			}
			S_antes = true;
		
			//Validación de estado
			I_despues_S = false;
			B_antes = false;
			B_despues_I = false;

		}else if (serie_letras == 'B'){
			//Siempre
			ancho++;

			//Caso altura -1 (v1 == "BB")
			if (B_antes){
				estado_altura--;
			}
			B_antes = true;

			//Caso altura -1 (v2 == "SIB")
			if(I_despues_S){
				estado_altura--;
			}

			//Caso altura -1 (v2 == "SIB")
			if(B_despues_I){
				estado_altura--;
			}
			
			//Caso de altura < 0 (error)
			if (estado_altura < 0){
				b_negativa = true;
			}
			
			//Validación de estado
			S_antes = false;
			I_despues_S = false;
			B_despues_I = false;
		}
	}
	
	for (int i = alto; !(b_negativa) && i >= 0; i--){ // Va a leer de arriba a abajo la grafica anotando en que nivel de altura se encuentra en ese momento

		//Inicializaciones para que no se mezclen con los valores anteriormente recogidos, sino que empiecen de cero
		estado_altura = 0;
		S_antes = false;
		I_despues_S = false;
		B_antes = false;
		istringstream letras_a_char2(letras);

		while ((letras_a_char2 >> serie_letras) && filtraI_B_S(serie_letras)){

			if (serie_letras == 'I'){
				//Caso Altura +1
				if (S_antes){
					estado_altura++;
					I_despues_S = true;
				}else if (B_antes){
					B_despues_I = true;
				}
		
				//Validación de estado
				S_antes = false;
				B_antes = false;

			}else if (serie_letras == 'S'){
				//Caso Altura +1
				if (S_antes){
					estado_altura++;
				}
				S_antes = true;

		
				//Validación de estado
				I_despues_S = false;
				B_despues_I = false;
				B_antes = false;

			}else if (serie_letras == 'B'){
				//Caso altura -1 (v1 == "BB")
				if (B_antes){
					estado_altura--;
				}
				B_antes = true;

				//Caso altura -1 (v2 == "SIB")
				if(I_despues_S){
					estado_altura--;
				}

				//Caso altura -1 (v2 == "SIB")
				if(B_despues_I){
					estado_altura--;
				}
			
				//Validación de estado
				S_antes = false;
				I_despues_S = false;
				B_despues_I = false;

			}	

			// Valor final tipo string de cada caracter:
			if ((serie_letras == 'I') && (i == estado_altura)){
				grafica_fila += "_";
			}else if ((serie_letras == 'S') && (i == estado_altura)){
				grafica_fila += "/";
			}else if ((serie_letras == 'B') && (i == estado_altura)){
				grafica_fila += "\\";	
			}else {
				grafica_fila += " ";
			}
		}
		grafica_altura += "	#" + grafica_fila + "#\n"; // Acumula la variable "grafica_fila"
		grafica_fila = ""; // Reestablece un valor neutro para la variable "grafica_fila"
	}
	
	//RESULTADOS
	if (!(filtraI_B_S(serie_letras))){ // (si) Algun caracter no permitido en la serie
		cout << "\nLa serie introducida no corresponde con [I], [S] o [B]\n\n";
		cout << "\nPress Enter To Continue\n"; // Es necesario para que continue el programa
	}else if (b_negativa){ // (si) La grafica desciende de su punto inicial
		cout << "\nLa serie introducida no puede tener una altura negativa\n\n";
		cout << "\nPress Enter To Continue\n"; // Es necesario para que continue el programa
	}else{ // (si) todo ha salido bien, se da el resultado
		cout << endl;
		grafica_ancho(ancho); // LLama la función que calcula el ancho
		cout << endl;
		cout << grafica_altura;
		grafica_ancho(ancho); // LLama la función que calcula el ancho
		cout << endl << endl;
		cout << "\nPress Enter To Continue\n"; // Es necesario para que continue el programa
	}
}





int main() {

	char seleccion = '0'; //La seleccion del usuario 
	bool exit = false; //Comprueba cuando el usuario quiere terminar el bucle y con este la ejecución


	//MENU DE SELECCIÓN DE EJERCICIO + Bucle de repeticion de este
	do {


		cout << "\nBienvenido al menu de selección de ejercicio.\n";
		cout << "[1] Problema: Contact\n";
		cout << "[2] Problema: Star WarsI: Yo soy tu...\n";
		cout << "[3] Problema: Star Wars II: Panel\n";
		cout << "[4] EXIT\n";
		cout << "Seleccione el ejercicio a probar: ";

		cin >> seleccion;

		switch (seleccion) {
			case '1' :
				cin.clear();//Limpia la entrada
				cin.ignore(256, '\n');
				
				Contact_f();    //  Ejercicio Content
				
			break;

			case '2' :
				cin.clear();//Limpia la entrada
				cin.ignore(256, '\n');
				
				YoSoyTu_f();    //  Ejercicio Content

			break;

			case '3' :
				cin.clear();//Limpia la entrada
				cin.ignore(256, '\n');

				Panel_f();     //  Ejercicio Content

			break;

			case '4' :
			exit = true;
			break;

			default: // Filtro de valores erroneos
			cout << "\n     Selección Invalida\n";

			break;

		}
		cin.clear(); //Limpia la salida
		cin.ignore(256, '\n');
	}while (!(exit));
}
