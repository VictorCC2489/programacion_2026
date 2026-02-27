#include "camion.h"
#include <iostream>

// Constructor por defecto: llama al constructor por defecto de Vehiculo
Camion::Camion() : Vehiculo() {
    cargaEstimada = 0;
}

// Constructor con parámetros: pasa los datos del vehículo a la base
Camion::Camion(std::string marca, std::string modelo, int anio, int cargaEstimada)
    : Vehiculo(marca, modelo, anio) {
    this->cargaEstimada = cargaEstimada;
}

// Método para actualizar
void Camion::actualizarCargaEstimada(int nuevaCarga){
    cargaEstimada = nuevaCarga;
}

// Sobrescritura: reutiliza el método de la base y añade información del coche
void Camion::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    std::cout << "Remolques del camión: " << cargaEstimada << std::endl;
}

// Getter
int Camion::obtenerCargaEstimada() {
    return cargaEstimada;
}
