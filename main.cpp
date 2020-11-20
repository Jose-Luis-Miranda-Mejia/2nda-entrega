/*
 * Jose luis Miranda
 * A01703867
 * 16/10/2019
 * Proyecto agencia coches/motos honda
 */

/**
 * Descripcion este proyecto es hacerca de mi negocio
 * El cual es un programa que captura
 * diferentes tipos de empleados con sus respectivos sueldos, y nos
 * permite calcular la nomina para cada tipo de empleado diferente.
*/

//Bibliotecas
#include <iostream>   //para imprimir.
#include "Tapiceria.h"    
#include "Servicios.h"
#include "Coches.h" //donde estan los serivios de los coches.

using namespace std;

//Procedimiento menu
void menu(){

    //Imprime las opciones que va a tener el sistema
    cout << "Menu:\n";
    cout << "1. Mostrar servicios. \n";
    cout << "2. Mostrar costos. \n";
    cout << "3. Mostrar tiempo de tardanza. \n";
    cout << "4. Cotizar ('+1 servicio'). \n";
    cout << "5. Calcular total tiempo de tardanza ('+1 servicio'). \n";
    cout << "6. Salir \n";
}

int main(int argc, char* argv[]){


    int opcion = 0, temp_salario = 0, temp_horas = 0, total = 0;

    /*
    //Ciclo para que el sistema siga corriendo mientras no elija la opcion salir.
    while(opcion < 6 && opcion > -1){

  		//Impresion de menu
  		menu();
  		//Leer indice que selecciona la opcion del menu
  		cin >> opcion;

  		//Switch donde dependiendo la eleccion efectua un diferente procedimiento
  		switch(opcion){

  			//Caso 1 "imprimira" los servicios.
  			case 1:
          
  			  break;

  		}
    }
    */
   // Instanciar o crear objetos
   
   //(string s, string h, string m,int t, string j, string t, string ts)
   Coches c1("Coches","K4","Agua y trapo",30,"ceramico","mediano","lavado coche");
   cout << c1.to_String() << endl;
   
}
