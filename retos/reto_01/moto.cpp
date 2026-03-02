#include "moto.h"
#include <iostream>

using namespace std;
// Constructor por defecto: llama al constructor por defecto de Vehiculo
Moto::Moto() : Vehiculo() {
    cilindraje = 0;
}

// Constructor con parámetros: pasa los datos del vehículo a la base
Moto::Moto(string marca, string modelo, int anio, int cilindraje)
    : Vehiculo(marca, modelo, anio) {
    this->cilindraje = cilindraje;
}

// Método para actualizar
void Moto::actualizarCilindraje(int nuevoCilindraje) {
    cilindraje = nuevoCilindraje;
}

// Sobrescritura: reutiliza el método de la base y añade información del coche
void Moto::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Cilindraje: " << cilindraje << "cc o ";
    if (cilindraje >= 100 && cilindraje <= 250){
        cout << "cilindraje bajo" << endl;
    }

    if (cilindraje > 250 && cilindraje <= 600){
        cout << "cilindraje medio" << endl;
    }

    if (cilindraje > 600){
        cout << "cilindraje alto" << endl;
    }
    }

// Getter
int Moto::obtenerCilindraje() {
    return cilindraje;
}
