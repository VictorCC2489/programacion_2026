#include "moto.h"
#include <iostream>

// Constructor por defecto: llama al constructor por defecto de Vehiculo
Moto::Moto() : Vehiculo() {
    cilindraje = 0;
}

// Constructor con parámetros: pasa los datos del vehículo a la base
Moto::Moto(std::string marca, std::string modelo, int anio, int cilindraje)
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
    std::cout << "Cilindraje: " << cilindraje << "cc o ";
    if (cilindraje >= 100 && cilindraje <= 250){
        std::cout << "cilindraje bajo" << std::endl;
    }

    if (cilindraje > 250 && cilindraje <= 600){
        std::cout << "cilindraje medio" << std::endl;
    }

    if (cilindraje > 600){
        std::cout << "cilindraje alto" << std::endl;
    }
    }

// Getter
int Moto::obtenerCilindraje() {
    return cilindraje;
}
