#include "Figura.h"
#include<iostream>
#include <string>

using namespace std;

Figura::Figura(string Nov_nombre){
    nombre = Nov_nombre;
}

Figura::~Figura(){

}

string Figura::obtenerNombre(){
    return nombre;
}
