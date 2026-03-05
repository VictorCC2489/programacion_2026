#include "autobus.h"
#include <iostream>

using namespace std;
// Constructor por defecto: llama al constructor por defecto de Vehiculo
Autobus::Autobus() : Vehiculo() {
    compania = "";
}

// Constructor con parámetros: pasa los datos del vehículo a la base
Autobus::Autobus(string marca, string modelo, int anio, string placa, string compania)
    : Vehiculo(marca, modelo, anio, placa) {
    this->compania = compania;
}

// Método para actualizar
void Autobus::actualizarCompania(string nuevaCompania) {
    compania = nuevaCompania;
}

// Sobrescritura: reutiliza el método de la base y añade información del autobus
void Autobus::mostrarInformacion() {
    Vehiculo::mostrarInformacion();
    cout << "Compania: " << compania << endl;
}

// Getter
string Autobus::obtenerCompania() {
    return compania;
}
