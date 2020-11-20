/*aqui hare Coches de Coches donde hare
un costeo por m^2 y te dare la posibilidad de que me
ingreses la cantidad de m^2 a cortar y te arroje un valor final osea el precio*/
#ifndef COCHES_H
#define COCHES_H
#include <string>
#include <iostream>
#include <sstream>
#include "Servicios.h"

using namespace std;

class Coches:public Servicios{
  private:
    string jabones;
    string tamanio;
    string tise;
  public:
    //constructores
    Coches();
    Coches(string s, string h, string m,int t, string j, string t, string ts);
    //getters y setters
    string get_Jabones();
    string get_Tamanio();
    string get_Tise();
    void set_Jabones(string j);
    void set_Tamanio(string t); 
    void set_Tise(string ts); 
    string to_String();
};

Coches::Coches(){  //default
  jabones = "";
  tamanio = "";
  tise = "";
}
Coches::Coches(string s, string h, string m,int t, string j, string t, string ts):servicio(s), herramienta(h), materiales(m),tiempo(t),jabones(j), tamanio(t), tise(ts){}

string Coches::get_Jabones(){
  return jabones;
}

string Coches::get_Tamanio(){
  return tamanio;
}

string Coches::get_Tise(){
  return tise;
}

void Coches::set_Jabones(string j){
  jabones = j;
}

void Coches::set_Tamanio(string t){
    tamanio = t;
}
void Coches::set_Tise(string ts){
  tise = ts;
}
string Coches::to_String(){
  stringstream aux;
  aux << "Servicio: "<< servicio << "herramienta" << herramienta <<  materiales << tiempo << jabones << tamanio << tise;
  return aux.str();
}
#endif
