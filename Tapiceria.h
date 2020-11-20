/*
 * Proyecto Servicios venta Grupo JL
 * José Luis Miranda Mejia
 * A01704696
 * 12/11/2020
 */

/*
 * Clase servicio contiene los métodos genéricos para el manejo de empleados
 * y tiene 3 clases que son los atributos a cada servicio:
 * Tipo de servicio, costos y tiempo
 *
 */

#ifndef TAPICERIA_H
#define TAPICERIA_H
#include <string>
#include <iostream>
#include <sstream>
#include "Servicios.h"

using namespace std;

class Tapiceria: public Servicios{
    private:
    string tise;
    string tamanio;
    public:
    Tapiceria();
    Tapiceria(string ts, string t);
    string get_Tise();
    string get_Tamanio();
    void set_Tise(string ts);
    void set_Tamanio(string t);
};

Tapiceria::Tapiceria(){
    tise = "";
    tamanio = "";
}

Tapiceria::Tapiceria(string ts, string t):tise(ts), tamanio(t){}

string Tapiceria::get_Tise(){
    return tise;
}

string Tapiceria::get_Tamanio(){
    return tamanio;
}
void Tapiceria::set_Tise(string ts){
    tise=ts;
}
void Tapiceria::set_Tamanio(string t){
    tamanio=t;
}

#endif