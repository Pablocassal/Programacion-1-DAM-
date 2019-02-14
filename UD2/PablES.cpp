/*  TIRO A PUERTA (MINIJUEGO)

*LA PORTERIA ES DE 3.2m(y) y 5.4m(x)
*EL GROSOR DE LOS PALOS ES DE 0.2m (y,x)
*/

#include <iostream>
//#include <cmath>

using namespace std;

int main (){

	// DECLARACIÓN DE VARIABLES
	double x = 0, y = 0;
	char portero, salto;

// ()() TURNO-1 PORTERO ()()
	cout << "La porteria se te dividira en tres secciones: izquierda (i), derecha (d) y centro (c)" << endl;
	cout << "¿Donde quieres posicionarte? (Esto lo vera tu oponente en su turno) Elige la opcion segun la letra :";
	cin >> portero;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << 	endl << endl << endl;
	

// ()() TURNO DELANTERO ()()
	//grafica
	cout << " 	   ▲	    ______________________	" << endl;
	cout << " y = 3.2m  |	  /			 /|	" << endl;
	cout << "    	   |	 /_ ____________________/ |	" << endl;
	cout << "    	   |	|  |			| |	" << endl;
	cout << "    	   |	|  |			| |	" << endl;
	cout << "    	   |	|  |			| |	" << endl;
	cout << "    	   |	|  |			| |	" << endl;
	cout << "    	   |	|  |____________________| |	" << endl;
	cout << "    	   |	| /			| /	" << endl;
	cout << "  y = 0m   |	|/			|/	" << endl;
	cout << " 	   ▼					" << endl;
	cout << "    	        ◄-------------------------►	" << endl;
	cout << "    	      x = 0m			x = 5.4m" << endl;

	//posición portero	
	if (portero == 'i'){
	cout << "(Información visual) El portero se encuentra a la izquierda" << endl;
	}
	else 	if (portero == 'c'){
		cout << "(Información visual) El portero se encuentra en el centro" << endl;
		}
		else	if (portero == 'd'){
			cout << "(Información visual) El portero se encuentra a la derecha" << endl;
			}
	//tiro	
	cout << "¡Dispara el balón contra la porteria, que vean de lo que eres capaz!" << endl;
	cout << "Introduce el valor de x deseado: ";
	cin >> x;
	cout << endl << "Introduce el valor de y deseado: "; 
	cin >> y;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << 	endl << endl << endl;

	
// ()() TURNO-2 PORTERO ()()
	cout << "Puedes realizar un salto: izquierda (i), derecha (d) , arriba (a) y mantener posición o no saltar (c)" << endl;
	cout << "¿Donde quieres saltar? Elige la opcion segun la letra :";
	cin >> salto;
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << 	endl << endl << endl;


	//RESULTADO
	cout << "          RESULTADO         " << endl;





//POSIBILIDADES

//fallo
	//larguero
	if ( ((y >= 3) && (y <= 3.2)) && ((x > 0.2) && (x < 5.2)) ){
	cout << "¡LARRRRR-GUERO!" << endl;
	}
	//palos
	if ( ((y >= 0) && (y < 3)) && ( ((x >= 0) && (x <= 0.2)) || ((x >= 5.2) && (x <= 5.4)) ) ){
	cout << "¡RA-PA-PA-PA-PALOOOO!" << endl;
	}
	//esquina
	if ( ((y >= 3) && (y <= 3.2)) && ( ((x >= 0) && (x <= 0.2)) || ((x >= 5.2) && (x <= 5.4)) ) ){
	cout << "¡COMO SUENA ESA ESQUINA!" << endl;
	}
	//fuera
	if (y > 3.2) {
	cout << "(va alta) Le ha tenido que dar a una paloma." << endl;	
	}
	else 	if (y < 0){
		cout << "(das una patada al suelo) Se deja el pie en el asfalto." << endl;
		}
		else 	if ((x < 0) || (x > 5.4)){
		cout << "(va fuera) Apunta a un farol y mata a una vieja." << endl; 
		}

//gol
	//escuadras

	if (portero == i);	
	if ( (((x > 0.2) && (x < 1.2)) && ((y <= 3) && (y >= 2.5))) || (((x > 4.2) && (x < 5.2)) && ((y <= 3) && (y >= 2.5))) ) {
	cout << "GOOOOOL ¡POR TODA LA ESCUADRAAAA!" << endl;
	}
	//gol (alto)
	if ( ((y < 3) && (y >= 2.5)) && ((x <= 4.2) && (x >= 1.2)) ) {
	cout << "GOOOOOL ¡ROZANDO EL LARGUERO!" << endl;
	}
	//gol (bajo)
 	if ( ((y >= 0) && (y < 2.5)) && ((x > 0.2) && (x < 5.2)) ) {
	cout << "GOOOOOL" << endl;
	}




}
