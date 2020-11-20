#ifndef SERVICIOS_H_
#define SERVICIOS_H_
#include <string>
#include <iostream>
#include <sstream>

using namespace std;

class Servicios{
  protected:// Visibles a las clases hijas sin getter
    string servicio;
    string herramienta;
    string materiales;
    int tiempo;
  public:
    //constructores
    Servicios();
    Servicios(string s, string h, string m,int t);
    //getters y setters
    string get_Servicio();
    string get_Herramienta();
    string get_Materiales();
    int get_Tiempo();
    void set_Servicio(string s);
    void set_Herramienta(string h);
    void set_Materiles(string m);
    void set_Tiempo(int);
    

};

Servicios::Servicios(){  //default
  servicio = "";
  herramienta = "";
  materiales = "";
  tiempo = 0;
}
Servicios::Servicios(string s, string h, string m,int t):servicio(s), herramienta(h), materiales(m),tiempo(t){};


string Servicios::get_Servicio(){
  return servicio;
}

string Servicios::get_Herramienta(){
  return herramienta;
}

string Servicios::get_Materiales(){
  return materiales;
}

int Servicios::get_Tiempo(){
  return tiempo;
}

void Servicios::set_Servicio(string s){
  servicio = s;
}

void Servicios::set_Herramienta(string h){
  herramienta = h;
}
void Servicios::set_Materiles(string m){
  materiales = m;
}

void Servicios::set_Tiempo(int t){
  tiempo = t;
}

#endif